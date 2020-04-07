// 15684 실패 ^^ 다시해보기 

#include <iostream>
using namespace std;

int n, m, h;

char connected[30][10];
int result = -1;
bool found = false;

void drawCurrent(){
	cout << "drawCurrent()\n";
	for(int i=0; i<h; i++){
		for(int j=0; j<n; j++){
			cout << connected[i][j] << ' ';
		}
		cout << '\n';
	}
}

bool isOk(){
	for(int i=0; i<n; i++){
		int currentL = i;
		int currentH = 0;
		while(currentH != h){
			if(connected[currentH][currentL] == 'R'){
				++currentL;
			} else if(connected[currentH][currentL] == 'L'){
				--currentL;
			}
			++currentH;
		}
		if(currentL != i) return false;
	}
	return true;
}

void drawLine(int height, int line, int num){
	cout << "\nDRAWLINE(" << height << ", " << line << ", " << num << ")\n";
	if(isOk()){ // 매 번 검사. 
		found = true;
		return;
	} else if(line == n-1){
		drawLine(height+1, 0, num);
		return;
	}
	else if(num == 0 || height == h){ 
		result = -1;
		return;
	}
	
	
	for(int i=height; i<h; i++){
		for(int j=line; j<n-1; j++){
			if(connected[i][j] == 'N' && connected[i][j+1] == 'N'){
				connected[i][j] = 'R';
				connected[i][j+1] = 'L';
				drawCurrent();
				if(j+1 == n-1) {
					i++;
					j=-1;
				}
				drawLine(i, j+1, num-1);
				
				connected[i][j] = 'N';
				connected[i][j+1] = 'N';
				if(found) return;
			}
		}
	}
}


int main(){
	
	cin >> n >> m >> h;
	
	// 연결상태 초기화 
	for(int i=0; i<h; i++){
		for(int j=0; j<n; j++){
			connected[i][j] = 'N';
		}
	}
	
	// 연결 짓기  
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		connected[a-1][b-1] = 'R';
		connected[a-1][b] = 'L'; 
	}
	
	// 추가 선이 0개 일때 부터 확인  
	for(int i=0; i<=3; i++){
		cout << "\n\n 선이 " << i << "개 일 때\n"; 
		drawLine(0, 0, i);
		if(found) {
			result = i;
			break;
		}
	}
	
	cout << result;
	
	return 0;
}
