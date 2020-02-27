// 1912

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int arr[n];
	int dp[n];
	int result;
	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(i==0) {
			dp[i] = arr[i];
			result = arr[i];
		}
		else{
			dp[i] = max(dp[i-1] + arr[i], arr[i]);
			result = max(result, dp[i]);
		}
	} 

	cout << result;
	
	return 0;
}
