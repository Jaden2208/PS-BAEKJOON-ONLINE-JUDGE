// 15684 ���� ^^ �ٽ��غ��� 

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
	if(isOk()){ // �� �� �˻�. 
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
	
	// ������� �ʱ�ȭ 
	for(int i=0; i<h; i++){
		for(int j=0; j<n; j++){
			connected[i][j] = 'N';
		}
	}
	
	// ���� ����  
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		connected[a-1][b-1] = 'R';
		connected[a-1][b] = 'L'; 
	}
	
	// �߰� ���� 0�� �϶� ���� Ȯ��  
	for(int i=0; i<=3; i++){
		cout << "\n\n ���� " << i << "�� �� ��\n"; 
		drawLine(0, 0, i);
		if(found) {
			result = i;
			break;
		}
	}
	
	cout << result;
	
	return 0;
}
