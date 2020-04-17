// 2565

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int arr[n][2];
	int dp[n];
	for(int i=0; i<n; i++){
		cin >> arr[i][0] >> arr[i][1];
		dp[i] = 1;
	}

	int maxCnt = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(arr[i][1] > arr[j][1]){ 
				dp[i] = max(dp[i], 1 + dp[j]);
			}
		}
		maxCnt = max(maxCnt, dp[i]);
	}
	
	cout << n - maxCnt;
	
	
	return 0;
}
