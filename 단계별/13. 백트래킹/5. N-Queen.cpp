// 9663

#include <iostream>
using namespace std;

int n;
int cnt = 0;
int col[15];

bool isEmpty(int i){
	for(int j=0; j<i; j++){
		if(col[j] == col[i] || abs(col[i]-col[j]) == i - j) return false;
	}
	return true;
}

void nQueen(int i){
	if(i == n){
		++cnt;
		return;
	}
	for(int j=0; j<n; j++){
		col[i] = j;
		if(isEmpty(i)) nQueen(i+1);
	}
}

int main(){
	cin >> n;
	nQueen(0);
	
	cout << cnt;
	
	return 0;
}
