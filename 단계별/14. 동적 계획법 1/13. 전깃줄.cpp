// 2565

#include <iostream>
#include <algorithm>

using namespace std;
int main(){
	
	int n;
	cin >> n;
	pair<int, int> arr[n];
	int dp[n];
	
	for(int i=0; i<n; i++){
		cin >> arr[i].first >> arr[i].second;
		dp[i] = 1;
	}
	sort(arr, arr + n);
	
	int maxCnt = 0; 
	
	for(int i=0; i<n; i++){
		for(int j=0; j<i; j++){
			if(arr[i].second > arr[j].second){
				dp[i] = max(dp[i], 1 + dp[j]);
			}
		}
		maxCnt = max(maxCnt, dp[i]);
	}
	cout << n - maxCnt;
	
	return 0;
}
