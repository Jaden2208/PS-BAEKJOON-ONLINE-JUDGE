// 11047

#include <iostream>
using namespace std;
int main(){
	
	int n, k;
	cin >> n >> k;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[n-i-1];
	}
	int sum = 0;
	int cnt = 0;
	for(int i=0; i<n && sum<k; i++){
		for(int j=1; sum+arr[i]<=k; j++){
			++cnt;
			sum += arr[i];
		}
	}
	
	cout << cnt;
	
	return 0;
}
