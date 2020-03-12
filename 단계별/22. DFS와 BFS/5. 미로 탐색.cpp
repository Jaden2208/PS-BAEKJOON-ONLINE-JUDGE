// 2178

#include <iostream>
#include <queue>
using namespace std;

int n, m;

char arr[100][100];
int visited[100][100];
int dir[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

bool fourSidesBlocked(int x, int y){
	if(visited[x-1][y] && visited[x+1][y] && visited[x][y-1] && visited[x][y+1])
		return true;
	else false;
}

void dfs(int x, int y){
	queue<pair<int, int>> q;
	// 먼저 시작 점 큐에 넣고 방문 처리. 
	q.push(pair<int, int>(x, y));
	visited[x][y] = 1;
	while(!q.empty()){
		// 큐 맨 앞에 것 빼고, ++cnt; 
		int X = q.front().first;
		int Y = q.front().second;
		q.pop();
		
		// 다음 갈수 있는 것들 전부 큐에 추가. 
		for(int i=0; i<4; i++){
			int nextX = X + dir[i][0];
			int nextY = Y + dir[i][1];
			
			if(nextX>=0 && nextX<n && nextY>=0 && nextY<m &&
			visited[nextX][nextY] == 0 && arr[nextX][nextY] == '1'){
				visited[nextX][nextY] = visited[X][Y] + 1;	
				q.push(pair<int, int>(nextX, nextY));
			}
		}
	}
}

int main(){
	
	cin >> n >> m;
		
	for(int i=0; i<n; i++){
		string input;
		cin >> input;
		for(int j=0; j<m; j++){
			arr[i][j] = input.at(j);
			visited[i][j] = 0;
		}
	} 

	dfs(0, 0);
	
	cout << visited[n-1][m-1];
	
	return 0;
}
