// 2667

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
string arr[25];
bool visited[25][25];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt = 0;
vector<int> danji;

void dfs(int x, int y){
	if(x<0 || x>=n || y<0 || y>=n || visited[x][y] || arr[x][y] == '0') return;
	visited[x][y] = true;
	++cnt;
	for(int i=0; i<4; i++){
		dfs(x+dx[i], y+dy[i]);
	}
}

int main(){
	
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		for(int j=0; j<n; j++){
			visited[i][j] = false;
		}
	}
	
	int danjiCnt = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(arr[i][j] == '0' || visited[i][j]) continue;
			++danjiCnt;
			cnt = 0;
			dfs(i, j);
			danji.push_back(cnt);
		}
	}
	cout << danjiCnt << '\n';
	sort(danji.begin(), danji.end());
	for(int i=0; i<danji.size(); i++){
		cout << danji[i] << '\n';
	}
	
	return 0;
}
