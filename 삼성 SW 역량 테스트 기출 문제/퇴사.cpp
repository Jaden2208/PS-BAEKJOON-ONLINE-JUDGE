// 14501

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	
	int arr[n][2];
	int dp[n][2];
	int maxP = 0;
	for(int i=0; i<n; i++){
		cin >> arr[i][0] >> arr[i][1];
		
		if(i + arr[i][0] > n) continue;
		
		dp[i][0] = arr[i][0];
		dp[i][1] = arr[i][1];
		
		for(int j=i-1; j>=0; j--){
			if(j + arr[j][0] <= i && dp[j][1] + arr[i][1] > dp[i][1]){
				dp[i][0] = dp[j][0] + arr[i][0];
				dp[i][1] = dp[j][1] + arr[i][1];
			}
		}
		
		if(dp[i][1] > maxP) maxP = dp[i][1];
	}
	
	cout << maxP;	
	
	return 0;
} 
