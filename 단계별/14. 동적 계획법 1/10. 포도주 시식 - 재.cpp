// 2156

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int arr[n];
	int dp[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	dp[0] = arr[0];
	for(int i=1; i<n; i++){
		if(i==1) dp[1] = arr[0] + arr[1];
		else if(i==2) dp[2] = max(dp[i-1], arr[2] + max(arr[0], arr[1]));
		else dp[i] = max(dp[i-1], arr[i] + max(dp[i-2], dp[i-3] + arr[i-1]));
	}
	
	cout << dp[n-1];
	
	return 0;
}
