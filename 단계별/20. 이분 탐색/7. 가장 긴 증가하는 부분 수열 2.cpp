// 12015 ÆÐ¾² 

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int dp[n];
	dp[0] = 1;
	for(int i=1; i<n; i++){
		if(arr[i] > arr[i-1]){
			dp[i] = 1 + dp[i-1];
		} else {
			for(int j=i-2; j>=0; j--){
				dp[i] = max(dp[j]+1, dp[i-1]);
			}
		}
	}
	
	cout << dp[n-1];
	return 0; 
} 
