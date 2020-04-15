// 1932

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int arr[n][n];
	int dp[n][n];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cin >> arr[i][j];
		}
	}
	
	dp[0][0] = arr[0][0];
	for(int i=1; i<n; i++){
		dp[i][0] = arr[i][0] + dp[i-1][0];
		for(int j=1; j<i; j++){
			dp[i][j] = arr[i][j] + max(dp[i-1][j-1], dp[i-1][j]);
		}
		dp[i][i] = arr[i][i] + dp[i-1][i-1];
	}
	
	int result = dp[n-1][0];
	for(int i=1; i<n; i++){
		result = max(result, dp[n-1][i]);
	}
	
	cout << result;
	
	return 0;
}
