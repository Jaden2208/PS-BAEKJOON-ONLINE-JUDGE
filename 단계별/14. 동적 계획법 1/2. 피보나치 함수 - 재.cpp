// 1003

#include <iostream>
using namespace std;
int main(){
	
	int t;
	cin >> t;
	int n[t];
	int maxN = -1;
	int maxIndex;
	
	for(int i=0; i<t; i++){
		cin >> n[i];
		if(n[i] > maxN) {
			maxN = n[i];
			maxIndex = i;
		}
	}
	
	int dp[41][2];
	dp[0][0] = 1;
	dp[0][1] = 0;
	dp[1][0] = 0;
	dp[1][1] = 1;
	
	for(int i=2; i<maxN+1; i++){
		dp[i][0] = dp[i-1][0] + dp[i-2][0];
		dp[i][1] = dp[i-1][1] + dp[i-2][1];
	}
	for(int i=0; i<t; i++){
		cout << dp[n[i]][0] << ' ' << dp[n[i]][1] << '\n';
	}
	
	return 0;
} 
