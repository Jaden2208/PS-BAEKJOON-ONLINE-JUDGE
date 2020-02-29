// 2981 PASS! 아래 정답 아님. 

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int arr[n];
	int bigger = 0;
	int smaller = 1000000000;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		bigger = max(bigger, arr[i]);
		smaller = min(smaller, arr[i]);
	}
	int divider = 2;
	int remain = 0;
	while(divider <= bigger-smaller){
		remain = arr[0]%divider;
		bool itis = true;
		for(int i=1; i<n; i++){
			if(arr[i]%divider != remain){
				itis = false;
				break;
			}
		}
		if(itis) cout << divider << ' ';
		++divider;
	}
	
	return 0;
}
