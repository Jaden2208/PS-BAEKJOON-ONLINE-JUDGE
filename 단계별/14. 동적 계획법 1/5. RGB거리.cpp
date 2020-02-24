// 1149

#include <iostream>
#include <algorithm>

using namespace std;
int main(){
	
	int n;
	cin >> n;
	int cost[n][3];
	int dp[n][3];
	
	for(int i=0; i<n; i++){
		cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
	}
	
	// 먼저 첫번째 집에서 각각의 색깔을 골랐을 경우 세가지를 dp에 저장한다. 
	dp[0][0] = cost[0][0];
	dp[0][1] = cost[0][1];
	dp[0][2] = cost[0][2];

	for(int i=1; i<n; i++) {
		dp[i][0] = cost[i][0] + min(dp[i-1][1], dp[i-1][2]);
		dp[i][1] = cost[i][1] + min(dp[i-1][0], dp[i-1][2]);
		dp[i][2] = cost[i][2] + min(dp[i-1][0], dp[i-1][1]);
	}
	
	cout << min(dp[n-1][0], min(dp[n-1][1], dp[n-1][2]));
	
	return 0;
}
