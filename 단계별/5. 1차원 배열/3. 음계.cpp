// 2920

#include <iostream>
using namespace std;
int main(){
	int array[8];
	bool isAsc;
	for(int i=0; i<8; i++) cin >> array[i];
	if(array[0] < array[1]) isAsc = true;
	else isAsc = false;
	for(int i=1; i<7; i++){
		if((isAsc && array[i] > array[i+1]) || (!isAsc && array[i] < array[i+1])){
			cout << "mixed";
			return 0;
		}
	}
	if(isAsc) cout << "ascending";
	else cout << "descending";
	
	return 0;
} 
