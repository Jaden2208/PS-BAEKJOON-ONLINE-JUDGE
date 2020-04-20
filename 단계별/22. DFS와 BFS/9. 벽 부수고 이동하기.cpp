// 2206 14% 에서 안됨. 나중에 풀어보기. 

#include <iostream>
#include <queue>

using namespace std;
int main(){
	
	int n, m;
	
	cin >> n >> m;
	
	string map[n];
	int visited[n][m][2];
	int dx[4] = {1, 0, -1, 0};
	int dy[4] = {0, 1, 0, -1};
	
	for(int i=0; i<n; i++){
		cin >> map[i];
		for(int j=0; j<m; j++){
			visited[i][j][0] = 0;
			visited[i][j][1] = 0;
		}
	}
	
	queue<pair<int, int>> q;
	q.push(pair<int, int>(0, 0));
	visited[0][0][0] = 1;
	int result = -1;
	
	while(!q.empty()){
		pair<int, int> qItem = q.front();
		int xx = qItem.first;
		int yy = qItem.second;
		
//		cout << "(xx, yy) : " << xx << ", " << yy << '\n';
		if(xx == n-1 && yy == m-1){
			result = visited[xx][yy][0];
			break;
		}
		q.pop();
		
		for(int i=0; i<4; i++){
//			cout << "i: " << i << "\n";
			int nextX = xx + dx[i];
			int nextY = yy + dy[i];
//			cout << "nextX = " << nextX << '\n';
//			cout << "nextY = " << nextY << '\n';
			if(nextX>=0 && nextX<n && nextY>=0 && nextY<m && visited[nextX][nextY][0] == 0){
				if(map[nextX][nextY] == '1'){
					if(visited[xx][yy][1] == 1) {
						visited[nextX][nextY][1] = 1;
//						cout << "이 전에 한 번 뚫었어서 이번엔 못 뚫음\n"; 
						continue;
					} else {
						visited[nextX][nextY][1] = 0;
					}
				} else {
					visited[nextX][nextY][1] = visited[xx][yy][1];
				}
				visited[nextX][nextY][0] = visited[xx][yy][0] + 1;
				q.push(pair<int, int>(nextX, nextY));
			}
//			cout << "qSize : " << q.size() << '\n';
		}
		
		cout << "visited status\n";
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cout << "[" << visited[i][j][0] << "," << visited[i][j][1] <<"] ";
			}
			cout << '\n';
		}
		
	}
	
	cout << result;
	
	
	
	return 0;
} 
