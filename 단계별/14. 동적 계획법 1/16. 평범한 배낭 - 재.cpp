// 12865

#include <iostream>
using namespace std;
int main(){
	
	int n, k;
	cin >> n >> k;
	int weight[n], value[n];
	int dp[k+1] = {0};
	
	for(int i=0; i<n; i++){
		cin >> weight[i] >> value[i];
	}
	
	for(int i=0; i<n; i++){
		for(int j=k; j>=weight[i]; j++){
			dp[j] = max(dp[j], dp[j-weight[i]] + value[i]);
		}
	}
	
	cout << dp[k];
		
	return 0;
}
