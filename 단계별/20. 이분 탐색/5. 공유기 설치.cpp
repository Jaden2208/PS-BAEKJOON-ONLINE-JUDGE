// 2110

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	
	int n, c;
	cin >> n >> c;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr, arr + n);
	
	int from = 1;
	int to = (arr[n-1]-arr[0]) / (c - 1);
	int result = 0;
	
	while(from <= to) {
		int mid = (from + to) / 2;
		int before_set_index = 0;
		int set_cnt = 1;
		
		for(int i=1; i<n; i++){
			if(arr[i] - arr[before_set_index] >= mid){
				before_set_index = i;
				++set_cnt;
			}
		}
		
		if(set_cnt >= c) {
			from = mid + 1;
			if(mid > result){
				result = mid;
			}
		}
		else to = mid - 1;
	
	}
	
	cout << result;
	
	return 0;
} 
