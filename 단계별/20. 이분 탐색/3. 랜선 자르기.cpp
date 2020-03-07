// 1654

#include <iostream>
#include <climits> 
using namespace std;
int main(){
	
	int k, n;
	cin >> k >> n;
	long long arr[k];
	long long to = LLONG_MAX;
	for(int i=0; i<k; i++){
		cin >> arr[i];
	}
	
	long long from = 0;
	long long maxv = 0;
	while(from <= to) {
		long long mid = (from + to) / 2;
		int cnt = 0;
		for(int i=0; i<k; i++){
			cnt += (arr[i]/mid);
		}
		if(cnt < n){
			to = mid - 1;
		} else{
			from = mid + 1;
			if(mid > maxv) maxv = mid;
		}
	}
	
	cout << maxv;
	
	return 0;
}
