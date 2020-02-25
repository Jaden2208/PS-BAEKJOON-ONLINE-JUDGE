// 1463

#include <iostream>
#include <algorithm>

using namespace std;
int main(){
	int x;
	cin >> x;
	int dp[x+1];
	dp[1] = 0;
	dp[2] = 1;
	for(int i=3; i<=x; i++){
		if(i % 3 == 0){
			dp[i] = 1 + min(dp[i/3], dp[i-1]);
		} else if(i % 2 == 0){
			dp[i] = 1 + min(dp[i/2], dp[i-1]);
		} else {
			dp[i] = 1 + dp[i-1];
		}
	}
	cout << dp[x];
	
	return 0;
}
