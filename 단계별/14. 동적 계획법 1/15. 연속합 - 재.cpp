// 1912

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
	int result = dp[0];
	for(int i=1; i<n; i++){
		dp[i] = max(arr[i], arr[i] + dp[i-1]);
		result = max(result, dp[i]);
	}
	
	cout << result;
	
	return 0;
} 
