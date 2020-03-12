// 7576 할 수 있을 것 같음 패쓰 !

#include <iostream>
#include <queue>
#define MAX 1000
using namespace std;

typedef pair<int, int> P;

int dx[4] = {1,-1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int tomato[MAX][MAX];
int m, n;
queue<P> start;

void bfs(int x, int y){
	for(int i=0; i<4; i++){
		int nextX = x + dx[i];
		int nextY = y + dy[i];
		if(nextX < 0 || nextX >= n || nextY < 0 || nextY >= m) continue;
		if(tomato[nextX][nextY] == 0){
			tomato[nextX][nextY] = 1;
			start.push(P(nextX, nextY))
		}
	}
}

int main(){
	cin >> m >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> tomato[i][j];
			if(tomato[i][j] == 1) start.push(P(i, j));
		}
	}
	
	while(start.size())){
		P from = start.front();
		bfs(from.first, from.second);
		
	}
	
	return 0;
}
