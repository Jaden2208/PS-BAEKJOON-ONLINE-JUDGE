// 1931

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	
	int n;
	cin >> n;
	pair<int, int> arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i].second >> arr[i].first;
	}
	sort(arr, arr+n);
	
	int cnt = 1;
	int last = arr[0].first;
	for(int i=1; i<n; i++){
		if(arr[i].second >= last){
			++cnt;
			last = arr[i].first;
		}
	}
	
	cout << cnt;
	
	return 0;
}
