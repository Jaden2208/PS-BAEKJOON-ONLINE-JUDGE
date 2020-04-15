// 10844

#include <iostream>
using namespace std;
int main(){
	
	int divider = 1000000000;
	int n;
	cin >> n;
	int dp[n][10];
	dp[0][0] = 0;
	for(int i=1; i<10; i++){
		dp[0][i] = 1;
	}
	
	for(int i=1; i<n; i++){
		dp[i][0] = dp[i-1][1] % divider;
		for(int j=1; j<9; j++){
			dp[i][j] = ((dp[i-1][j-1] % divider) + (dp[i-1][j+1] % divider)) % divider;	
		}
		dp[i][9] = dp[i-1][8] % divider;
	}
	
	int sum = 0;
	for(int i=0; i<10; i++){
		sum = (sum +dp[n-1][i]) % divider;
	}
	
	cout << sum;
	
	return 0;
}
