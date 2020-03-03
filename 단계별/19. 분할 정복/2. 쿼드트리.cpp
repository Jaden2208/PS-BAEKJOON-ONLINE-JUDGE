// 1992

#include <iostream>
using namespace std;

int n;
char arr[64][64];

// 0만 있으면 0, 1만 있으면 1, 둘다 있으면 2 return. 
char colorOf(int x, int y, int size){
	char current = arr[x][y];
	for(int i=x; i<x+size; i++){
		for(int j=y; j<y+size; j++){
			if(arr[i][j] != current){
				return '2';
			} 
		}
	}
	return current;
}

void dc(int x, int y, int size){
	char colorIs = colorOf(x, y, size);
	if(colorIs != '2'){
		cout << colorIs;
		return;
	}
	
	int half = size/2;
	cout << "(";
	dc(x, y, half);
	dc(x, y+half, half);
	dc(x+half, y, half);
	dc(x+half, y+half, half);
	cout << ")";
	
}

int main(){
	
	cin >> n;
	string input;
	
	for(int i=0; i<n; i++){
		cin >> input;
		for(int j=0; j<n; j++){
			arr[i][j] = input.at(j);
		}
	}
	
	dc(0, 0, n);
	
	return 0;
}
