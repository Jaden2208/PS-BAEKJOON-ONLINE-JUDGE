// 7569

#include <iostream>
#include <queue>
using namespace std;

int m, n, h;
int box[100][100][100];
int days = 0;
queue<pair<int, pair<int, int>>> q;
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

bool allRiped(){
	for(int i=0; i<h; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<m; k++){
				if(box[i][j][k] == 0) return false;
			}
		}
	}
	return true;
}

void bfs(){
	int z, x, y;
	while(!q.empty()){
		pair<int, pair<int, int>> p = q.front();
		q.pop();
		z = p.first;
		x = p.second.first;
		y = p.second.second;
		for(int i=0; i<6; i++){
			int nextZ = z + dz[i];
			int nextX = x + dx[i];
			int nextY = y + dy[i];
			
			if(nextX<0 || nextX>=n || nextY<0 || nextY>=m || nextZ<0 || nextZ>=h
			|| box[nextZ][nextX][nextY] != 0) continue;
			q.push(pair<int, pair<int, int>>(nextZ, pair<int, int>(nextX, nextY)));
			box[nextZ][nextX][nextY] = box[z][x][y] + 1;
		}
	}
	
	days = box[z][x][y] - 1;
}

int main(){
	
	cin >> m >> n >> h;
	
	for(int i=0; i<h; i++){
		for(int j=0; j<n; j++){
			for(int k=0; k<m; k++){
				cin >> box[i][j][k];
				if(box[i][j][k] == 1) 
					q.push(pair<int, pair<int, int>>(i, pair<int, int>(j, k))); 
			} 
		}
	}
	
	bfs();
	
	if(!allRiped()) days = -1;
	
	cout << days;
	
	return 0;
}
