// 2981

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int arr[n];
	int smaller = 1000000000;
	int bigger = 0;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		smaller = min(smaller, arr[i]);
		bigger = max(bigger, arr[i]);
		
	}
	
	int divider = 2;
	while(divider <= sqrt(bigger - smaller)){
		bool itis = true;
		int extra = arr[0] % divider;
		for(int i=1; i<n; i++){
			if(arr[i]%divider != extra){
				itis = false;
				break;
			}
		}
		if(itis) cout << divider << ' ';
		++divider;
	}
	
	return 0;
}
