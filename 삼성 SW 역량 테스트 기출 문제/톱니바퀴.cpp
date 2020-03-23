// 14891

#include <iostream>
#include <cmath>
using namespace std;

string arr[4];
int topIndex[4];

void turn(int n, int d, int t){ 
	
	if(n == 5 || n == 0 || d == 0) return;
	
	int rightIndex = (topIndex[n-1] + 2) % 8;
	int leftIndex = (topIndex[n-1] + 6) % 8;
	
	if(d == 1){
		topIndex[n-1] = (topIndex[n-1] + 7) % 8;
	} else{
		topIndex[n-1] = (topIndex[n-1] + 1) % 8;
	}
	
	if(t==0 || t==1) {
		if(n < 4 && arr[n-1].at(rightIndex) == arr[n].at((topIndex[n] + 6) % 8)){
			turn(n+1, 0, 1);
		}else {
			turn(n+1, d*(-1), 1);
		}
		
	}
	if(t==0 || t==-1){
		if(n > 1 && arr[n-1].at(leftIndex) == arr[n-2].at((topIndex[n-2] + 2) % 8)){
			turn(n-1, 0, -1);
		}
		else turn(n-1, d*(-1), -1);
	}
}

int main(){
	
	for(int i=0; i<4; i++){
		cin >> arr[i];
		topIndex[i] = 0;
	}
	
	int k; // k 번 회전 
	cin >> k;
	for(int i=0; i<k; i++){
		int n, d; // 톱니번호, 방향 
		cin >> n >> d; 
		turn(n, d, 0);
	} 
	
	int score = 0;
	for(int i=0; i<4; i++){
		if(arr[i].at(topIndex[i]) == '1') score += (pow(2,i));
	}
	
	cout << score;
	
	return 0;
}
