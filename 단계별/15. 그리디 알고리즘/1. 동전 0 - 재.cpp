// 11047

#include <iostream>
using namespace std;
int main(){
	
	int n, k;
	cin >> n >> k;
	int coin[n];
	for(int i=0; i<n; i++){
		cin >> coin[i];
	}
	
	int cnt = 0;
	for(int i=n-1; i>=0 && k>=0; i--){
		int t = k/coin[i];
		if(t>0) {
			cnt += t;
			k %= coin[i];
		}
	}
	
	cout << cnt;
	
	return 0;
} 
