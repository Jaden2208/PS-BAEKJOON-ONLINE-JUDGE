// 1012

#include <iostream>
using namespace std;

int m, n, k;
char land[50][50];
bool visited[50][50];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y){
	if(x<0 || x>=n || y<0 || y>=m || land[x][y] == '0' || visited[x][y]) return;
	visited[x][y] = true;
	for(int i=0; i<4; i++){
		dfs(x + dx[i], y + dy[i]);
	}
}

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	
	for(int i=0; i<t; i++){
		int cnt = 0;
		
		cin >> m >> n >> k; 
	
		for(int j=0; j<n; j++){
			for(int l=0; l<m; l++){
				land[j][l] = '0';
				visited[j][l] = false;
			}
		}
		
		for(int j=0; j<k; j++){
			int x, y;
			cin >> y >> x;
			land[x][y] = '1';
		}
		
		for(int j=0; j<n; j++){
			for(int l=0; l<m; l++){
				if(visited[j][l] || land[j][l] == '0') continue;
				++cnt;
				dfs(j, l);
			}
		}
		
		cout << cnt << '\n';
	}
	
	return 0;
}
