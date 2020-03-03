// 1780

#include <iostream>
#include <cmath> 
using namespace std;

int n;
const int MAX_SIZE = pow(3, 7);
int arr[MAX_SIZE][MAX_SIZE];
int minone = 0;
int zero = 0;
int one = 0;

// -1만 있으면 -1, 0만 있으면 0, 1만 있으면 1, 둘다 있으면 2 return. 
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
	if(colorOf(x, y, size) == -1){
		++minone;
		return;
	} else if(colorOf(x, y, size) == 0){
		++zero;
		return;
	} else if(colorOf(x, y, size) == 1){
		++one;
		return;
	}

	int point = size/3;
	dc(x, y, point);
	dc(x, y+point, point);
	dc(x, y+(point*2), point);
	dc(x+point, y, point);
	dc(x+point, y+point, point);
	dc(x+point, y+(point*2), point);
	dc(x+(point*2), y, point);
	dc(x+(point*2), y+point, point);
	dc(x+(point*2), y+(point*2), point);
	
}

int main(){
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}
	
	dc(0, 0, n);
	
	cout << minone << '\n' << zero << '\n' << one;
	
	return 0;
}
