// 1654

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int k, n;
	cin >> k >> n;
	int arr[k];
	int sum = 0;
	for(int i=0; i<k; i++){
		cin >> arr[i];
		sum += arr[i];
	}
	int divider = sum / n + 1;
	int cnt = 0;
	while(cnt != n){
		--divider;
		cnt = 0;
		for(int i=0; i<k; i++){
			cnt += (arr[i]/divider);
		}
		
	}
	
	cout << divider;
	
	return 0;
}
