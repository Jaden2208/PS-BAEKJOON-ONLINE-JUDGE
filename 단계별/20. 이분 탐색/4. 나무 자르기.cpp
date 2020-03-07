// 2805

#include <iostream>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);

	int n, m;
	cin >> n >> m;
	long long arr[n];
	long long max = 0; 
	for(int i=0; i<n; i++){
		cin >> arr[i];
		if(arr[i] > max) max = arr[i];
	}
	long long from = 0;
	long long to = max;
	long long result = -1;
	while(from <= to){
		long long sum = 0;
		long long mid = (from + to) / 2;
		
		for(int i=0; i<n; i++){
			long long temp = arr[i] - mid;
			if(temp < 0) temp = 0;
			sum += temp; 
		}
		
		if(sum >= m){
			from = mid + 1;
			if(mid > result) result = mid;
		} else {
			to = mid - 1;
		}
	}
	cout << result;
	return 0;
}
