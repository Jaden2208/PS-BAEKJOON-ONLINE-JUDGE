// 2156

#include <iostream>
#include <algorithm>

using namespace std;
int main(){
	
	int n;
	cin >> n; 
	int arr[n+1];
	unsigned int dp[n+1];
	for(int i=1; i<=n; i++){
		cin >> arr[i];
	}
	dp[0] = 0;
	dp[1] = arr[1];
	dp[2] = arr[2] + arr[1];
	for(int i=3; i<=n; i++){
		dp[i] = arr[i] + max(arr[i-1] + dp[i-3], dp[i-2]);
		dp[i] = max(dp[i-1], dp[i]);
	}
	cout << dp[n];
	return 0;
}
