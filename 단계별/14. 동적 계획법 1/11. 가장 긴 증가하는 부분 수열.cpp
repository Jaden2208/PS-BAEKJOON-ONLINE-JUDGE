// 11053

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int arr[n];
	int dp[n];
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
		dp[i] = 1;
	}
	
	int sum = 0;

	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(arr[i] > arr[j]){
				dp[i] = max(dp[i],1 + dp[j]);
			}
		}
		sum = max(sum, dp[i]);
	}

	cout << sum;
	
	return 0;
}
