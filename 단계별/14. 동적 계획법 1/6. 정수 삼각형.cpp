// 1932

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
	int n;
	cin >> n;
	int arr[n][n];
	int dp[n][n] = {0};
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cin >> arr[i][j];
		}
	}
	
	dp[0][0] = arr[0][0];
	for(int i=1; i<n; i++){
		for(int j=0; j<=i; j++){
			if(j==0){
				dp[i][j] = arr[i][j] + dp[i-1][j];
			} else {
				dp[i][j] = arr[i][j] + max(dp[i-1][j-1], dp[i-1][j]);
			}
		}
	}
	
	int max = 0;
	for(int i=0; i<n; i++){
		if(dp[n-1][i] > max) max = dp[n-1][i];
	}
	cout << max;
	
	return 0;
}
