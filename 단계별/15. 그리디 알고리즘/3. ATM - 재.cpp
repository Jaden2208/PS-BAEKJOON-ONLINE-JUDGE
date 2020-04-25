// 11399

#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	
	int sum = 0;
	int t = 0;
	for(int i=0; i<n; i++){
		t += arr[i];
		sum += t;
	}
	
	cout << sum;
	
	return 0;
}
