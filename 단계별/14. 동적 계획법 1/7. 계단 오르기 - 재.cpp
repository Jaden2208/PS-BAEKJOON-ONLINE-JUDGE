// 2579

#include <iostream>
using namespace std; 
int main(){
	
	int n;
	cin >> n;
	int arr[n];
	int dp[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	dp[0] = arr[0];
	dp[1] = arr[0] + arr[1];
	dp[2] = arr[2] + max(arr[0], arr[1]);
	
	for(int i=3; i<n; i++){
		dp[i] = arr[i] + max(dp[i-2], dp[i-3] + arr[i-1]);
	}
	
	cout << dp[n-1];
	
	return 0;
}
