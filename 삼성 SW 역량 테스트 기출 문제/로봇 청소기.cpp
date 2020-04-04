// 14503

#include <iostream>
using namespace std;

int n, m;
int r, c, d;
int board[50][50];
bool allBlocked = false;
bool completelyBlocked = false;
int cnt = 0;

void clean(){
	++cnt;
	board[r][c] = 2;
}

void turnDir(int cnt){
	if(cnt > 4) {
		allBlocked = true;
		return;
	}
	if(d==0){
		d = 3;
		if(c-1 >= 0 && board[r][c-1] == 0){
			--c;
		} else turnDir(cnt+1);	
	} else if(d==1){
		d = 0;
		if(r-1 >= 0 && board[r-1][c] == 0){
			--r;
		} else turnDir(cnt+1);
	} else if(d==2){
		d = 1;
		if(c+1 < m && board[r][c+1] == 0){
			++c;
		} else turnDir(cnt+1);		
	} else {
		d = 2;
		if(r+1 < n && board[r+1][c] == 0){
			++r;
		} else turnDir(cnt+1);
	}
}

void moveBack(){
	if(d==0 && r+1<n && board[r+1][c] == 2){
		++r;
	} else if(d==1 && c-1>=0 && board[r][c-1] == 2){
		--c;
	} else if(d==2 && r-1>=0 && board[r-1][c] == 2){
		--r;
	} else if(d==3 && c+1<m && board[r][c+1] == 2){
		++c;
	} else {
		completelyBlocked = true;
	}
}

int main(){
	
	cin >> n >> m;
	
	cin >> r >> c >> d;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> board[i][j];
		}
	}
	
	while(true){
		
		if(board[r][c] == 0){
			clean();
		}
		
		allBlocked = false;
		turnDir(1);
		
		if(allBlocked){
			completelyBlocked = false;
			moveBack();
			if(completelyBlocked) break;
		}
	}
	
	cout << cnt;
	
	return 0;
}
