// 2630

#include <iostream>
using namespace std;

int n;
int arr[128][128];
int zero = 0;
int one = 0;

// 0만 있으면 0, 1만 있으면 1, 둘다 있으면 2 return. 
int colorOf(int x, int y, int size){
	int current = arr[x][y];
	for(int i=x; i<x+size; i++){
		for(int j=y; j<y+size; j++){
			if(arr[i][j] != current){
				return 2;
			} 
		}
	}
	return current;
}

void dc(int x, int y, int size){
	if(colorOf(x, y, size) == 0){
		++zero;
		return;
	} else if(colorOf(x, y, size) == 1){
		++one;
		return;
	}

	int half = size/2;
	dc(x, y, half);
	dc(x, y+half, half);
	dc(x+half, y, half);
	dc(x+half, y+half, half);
	
}

int main(){
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}
	
	dc(0, 0, n);
	
	cout << zero << '\n' << one;
	
	return 0;
}
