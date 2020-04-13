// 2748
#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	long long dp[n+1];
	
	dp[0] = 0;
	dp[1] = 1;
	for(int i=2; i<=n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	
	cout << dp[n];
	return 0;
} 
