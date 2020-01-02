// 2562

#include <iostream>
using namespace std;
int main(){
	int array[9];
	int max_index;
	int max = 0;
	for(int i=0; i<9; i++) cin >> array[i];
	for(int i=0; i<9; i++){
		if(a[i] > max){
			max = array[i];
			max_index = i+1;
		}
	}
	
	cout << max << '\n' << max_index;
	
	return 0;
} 
