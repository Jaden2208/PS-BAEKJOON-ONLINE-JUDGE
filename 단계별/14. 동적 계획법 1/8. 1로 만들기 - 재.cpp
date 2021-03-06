// 1463

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int dp[n+1];
	dp[1] = 0;
	
	for(int i=2; i<=n; i++){
		if(i%3 == 0) {
			dp[i] = 1 + min(dp[i/3], dp[i-1]);
		} else if(i%2 == 0){
			dp[i] = 1 + min(dp[i/2], dp[i-1]);
		} else dp[i] = 1 + dp[i-1]; 
	}
	
	cout << dp[n];
	
	return 0;
}
