// 12865

#include <iostream>
using namespace std;
int main(){
	
	int n, k;
	cin >> n >> k;
	int arr[n][2];
	int dp[k+1] = {0,};
	for(int i=0; i<n; i++){
		cin >> arr[i][0] >> arr[i][1];
	} 
	
	for(int i=0; i<n; i++){
		for(int j=k; j>0; j--){
			if(arr[i][0] <= j){
				dp[j] = max(dp[j], dp[j-arr[i][0]] + arr[i][1]);
			}
		}
	}
	
	cout << dp[k];
	
	return 0;
}
