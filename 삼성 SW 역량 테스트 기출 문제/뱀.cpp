// 3190

#include <iostream>
#include <queue>

using namespace std;
int main() {
	typedef pair<int, char> P_ic;
	typedef pair<int, int> P_ii;
	
	int n, k, l;
	
	char dir;
	
	int APPLE = 1;
	int SNAKE = -1;
	
	int curDir = 0; // 0:right, 1:down, 2:left, 3:up
	int dx[4] = {0, 1, 0, -1};
	int dy[4] = {1, 0, -1, 0};
	
	P_ii head = P_ii(0, 0);
	queue<P_ii> snake;
	snake.push(head);
	
	cin >> n >> k;
	int board[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			board[i][j] = 0;
		}
	}
	board[0][0] = SNAKE;
	
	for(int i=0; i<k; i++){
		int x, y;
		cin >> x >> y;
		board[x-1][y-1] = APPLE;
	}
	
	cin >> l;
	P_ic dirList[l];
	int dlIdx = 0;
	for(int i=0; i<l; i++){
		cin >> dirList[i].first >> dirList[i].second;
	}
	
	int sec = 0;
	
	while(true){
		++sec;
		int x = head.first + dx[curDir];
		int y = head.second + dy[curDir];
		
		// 벽이면 끝 
		if(x < 0 || x >= n || y < 0 || y >= n || board[x][y] == SNAKE) break;
		// 사과가 없으면 꼬리 제거 
		if(board[x][y] != APPLE){
			P_ii tail = snake.front();
			snake.pop();
			board[tail.first][tail.second] = 0;
		}
		
		// 머리 한칸 이동 
		head = P_ii(x, y); 
		snake.push(head);
		board[x][y] = SNAKE;
		
		// 진행 방향 찾기 
		if(dirList[dlIdx].first == sec){
			char dir = dirList[dlIdx].second;
			if(dir == 'L'){
				curDir = (curDir+3) % 4;
			} else {
				curDir = (curDir+1) % 4;
			}
			++dlIdx;
		}
	}
	
	cout << sec;
	
	return 0;
}
