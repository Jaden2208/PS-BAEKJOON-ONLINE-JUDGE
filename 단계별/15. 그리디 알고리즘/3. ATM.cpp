// 11399

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	sort(arr, arr + n);
	
	int dp[n];
	dp[0] = arr[0];
	int sum = dp[0];
	for(int i=1; i<n; i++){
		dp[i] = arr[i] + dp[i-1];
		sum += dp[i];
	}
	
	cout << sum;
	
	return 0;
}
