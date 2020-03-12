// 1012

#include <iostream>
using namespace std;

const int MAX = 51;
char arr[MAX][MAX];
bool visited[MAX][MAX];
int m, n;

void initArr(){
	for(int i=0; i<MAX; i++){
		for(int j=0; j<MAX; j++){
			arr[i][j] = '0';
			visited[i][j] = false;
		}
	}
}

void check(int x, int y){
	if(x<0 || x>=n || y<0 || y>=m || visited[x][y]) return;
	if(arr[x][y] == '1'){
		visited[x][y] = true;
		check(x-1, y);
		check(x+1, y);
		check(x, y-1);
		check(x, y+1);
	}
	
}

int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int t;
	cin >> t;
	
	for(int i=0; i<t; i++){
		initArr();
		int cnt = 0;
		int k;
		cin >> m >> n >> k;
		for(int j=0; j<k; j++){
			int x, y;
			cin >> x >> y;
			arr[y][x] = '1';
		}
		
		for(int j=0; j<n; j++){
			for(int l=0; l<m; l++){
				if(arr[j][l] == '1' && !visited[j][l]){
					check(j, l);
					++cnt;
				}
			}
		}
		
		cout << cnt << '\n';
	} 
	
	return 0;
}
