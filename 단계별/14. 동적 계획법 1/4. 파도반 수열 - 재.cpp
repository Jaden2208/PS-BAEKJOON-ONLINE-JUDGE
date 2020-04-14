// 9461

#include <iostream>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin >> t;
	
	long long dp[100];
	
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 2;
	
	int start = 5;
	for(int i=0; i<t; i++){
		int n;
		cin >> n;
		for(start; start<n; start++){
			dp[start] = dp[start-1] + dp[start-5];
		} 
		cout << dp[n-1] << '\n';
	}
	
	return 0;
} 
