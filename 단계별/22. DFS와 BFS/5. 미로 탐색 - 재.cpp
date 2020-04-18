// 2178

#include <iostream>
#include <queue>
using namespace std;

int n, m;
string miro[100];
int visited[100][100];
int cnt = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void bfs(int x, int y){
	queue<pair<int, int>> q;
	q.push(pair<int, int>(x, y));
	visited[x][y] = 1;
	while(!q.empty()){
		pair<int, int> p = q.front();
		q.pop();
		int xx = p.first;
		int yy = p.second;
		
		for(int i=0; i<4; i++){
			int nextX = xx + dx[i];
			int nextY = yy + dy[i];
			if(nextX<0 || nextX>=n || nextY<0 || nextY>=m || visited[nextX][nextY] > 0 || miro[nextX][nextY] == '0') continue;
			q.push(pair<int, int>(nextX, nextY));
			visited[nextX][nextY] = visited[xx][yy] + 1;
		}
	}
}
int main(){
	
	cin >> n >> m;
	
	for(int i=0; i<n; i++){
		cin >> miro[i];
		for(int j=0; j<m; j++){
			visited[i][j] = false;
		}
	}
	
	bfs(0, 0);
	
	cout << visited[n-1][m-1];
	
	return 0;
}
