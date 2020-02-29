// 11051

#include <iostream>
using namespace std;
int main(){
	
	int n, k;
	cin >> n >> k;
	
	int dp[n+1][n+1];

	for(int i=1; i<=n; i++){
		for(int j=0; j<=k && j<=i; j++){
			if(j == 0 || i == j) dp[i][j] = 1;
			else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % 10007;
		}
	}
	
	cout << dp[n][k];
	
	return 0;
}
