// 1149

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	int rgb[n][3];
	int dp[n][3];
	
	for(int i=0; i<n; i++){
		cin >> rgb[i][0] >> rgb[i][1] >> rgb[i][2];
	}
	
	dp[0][0] = rgb[0][0];
	dp[0][1] = rgb[0][1];
	dp[0][2] = rgb[0][2];
	
	for(int i=1; i<n; i++){
		dp[i][0] = rgb[i][0] + min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = rgb[i][1] + min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = rgb[i][2] + min(dp[i-1][0], dp[i-1][1]);
	}
	
	cout << min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]));
	
	return 0;
} 
