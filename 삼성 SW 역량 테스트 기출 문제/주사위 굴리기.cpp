// 14499

#include <iostream>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	int x, y;
	int k;
	
	cin >> n >> m >> x >> y >> k;
	
	int arr[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}
	
	int dice[4][4];
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			dice[i][j] = 0;
		}
	}
	
	// 주사위 바닥 index 
	int bottomX = 1;
	int bottomY = 1;
	
	// 주사위 위 index
	int topX = 3;
	int topY = 1;
	
	if(arr[x][y] != 0){
		dice[bottomX][bottomX] = arr[x][y];
		arr[x][y] = 0;
	}
	
	for(int i=0; i<k; i++){
		int dir;
		cin >> dir;
		if(dir == 1) {
			if(y == m-1) continue;
			topX = 1;
			topY = 3;
			++y;
			int temp = dice[1][0];
			dice[1][0] = dice[1][1];
			dice[1][1] = dice[1][2];
			dice[1][2] = dice[1][3];
			dice[1][3] = temp;
			
			dice[3][1] = dice[topX][topY];
		}
		else if(dir == 2) {
			if(y == 0) continue;
			topX = 1;
			topY = 3;
			--y;
			int temp = dice[1][3];
			dice[1][3] = dice[1][2];
			dice[1][2] = dice[1][1];
			dice[1][1] = dice[1][0];
			dice[1][0] = temp;
			
			dice[3][1] = dice[topX][topY];
		} 
		else if(dir == 3) {
			if(x == 0) continue;
			topX = 3;
			topY = 1;
			--x;
			int temp = dice[3][1];
			dice[3][1] = dice[2][1];
			dice[2][1] = dice[1][1];
			dice[1][1] = dice[0][1];
			dice[0][1] = temp;
			
			dice[1][3] = dice[topX][topY];
		}
		else {
			if(x == n-1) continue;
			topX = 3;
			topY = 1;
			++x;
			int temp = dice[0][1];
			dice[0][1] = dice[1][1];
			dice[1][1] = dice[2][1];
			dice[2][1] = dice[3][1];
			dice[3][1] = temp;
			
			dice[1][3] = dice[topX][topY];
		}
		
		cout << dice[topX][topY] << '\n';
		
		if((x==3 && y==1) && (x==1 && y==2)) arr[y][x] = arr[x][y]; 
		
		if(arr[x][y] == 0){
			arr[x][y] = dice[bottomX][bottomY];
		} else {
			dice[bottomX][bottomY] = arr[x][y];
			arr[x][y] = 0;
		}
		
	}
	
	return 0;
} 
