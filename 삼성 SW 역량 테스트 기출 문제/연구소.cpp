// 14502

#include <iostream>
using namespace std;

int n, m;
int lab[8][8];
int virusedLab[8][8];
bool virusVisited[8][8];
int maxSize = 0;

void setVirus(int i, int j, bool isFirst){
	if(i<0 || i>=n || j<0 || j>=m) return;
	if(isFirst || virusedLab[i][j] == 0){
		virusedLab[i][j] = 2;
		virusVisited[i][j] = true;
		setVirus(i, j+1, false);
		setVirus(i, j-1, false);
		setVirus(i+1, j, false);
		setVirus(i-1, j, false);
	}
}

int safeLabSize(){
	int cnt = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(virusedLab[i][j] == 0) ++cnt;
		}
	}
	return cnt;
}

void initVirusedLab(){
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			virusedLab[i][j] = lab[i][j];
			virusVisited[i][j] = false;
		}
	}
}

void setBlock(int x, int y, int cnt){
	if(cnt > 3) {
		initVirusedLab();
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				if(!virusVisited[i][j] && virusedLab[i][j] == 2){
					setVirus(i, j, true);
				}
			}
		}
		maxSize = max(maxSize, safeLabSize());
		return;
	}
	
	for(int i=x; i<n; i++){
		for(int j=y; j<m; j++){
			if(lab[i][j] == 0){
				lab[i][j] = 1;
				setBlock(i, j, cnt+1);
				lab[i][j] = 0;
			}
			if(j==m-1) y=0;
		}
	}
}

int main(){
	
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> lab[i][j];
		}
	}

	setBlock(0, 0, 1);
	
	cout << maxSize;
	
	return 0;
} 
