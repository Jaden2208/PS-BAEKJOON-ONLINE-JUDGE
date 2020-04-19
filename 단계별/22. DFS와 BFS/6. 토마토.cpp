// 7576

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int m, n;
int box[1000][1000];
int days = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int>> q;

bool allRiped(){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(box[i][j] == 0) return false;
		}
	}
	return true;
}

void bfs(){
	
	int xx, yy;
	
	while(!q.empty()){
		xx = q.front().first;
		yy = q.front().second;
		q.pop();
		for(int i=0; i<4; i++){
			int nextX = xx + dx[i];
			int nextY = yy + dy[i];
			
			if(nextX<0 || nextX>=n || nextY<0 || nextY>=m || box[nextX][nextY] != 0) continue;
			q.push(pair<int, int>(nextX, nextY));
			box[nextX][nextY] = box[xx][yy] + 1;
		}
	}
	days = max(days, box[xx][yy] - 1);
	
}

int main(){
	
	cin >> m >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> box[i][j];
			if(box[i][j] == 1) q.push(pair<int, int>(i, j));
		}
	}
	
	bfs();
	
	if(!allRiped()) days = -1;
	
	cout << days;
	
	return 0;
}
