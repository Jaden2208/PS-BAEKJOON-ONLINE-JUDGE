// 2108

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
	int n, cnt[8001] = {0}, curIdx = 0, maxCnt = 0, mcv;
	cin >> n;
	int arr[n];
	float sum = 0;
	
	for(int i=0; i<n; i++){
		cin >> arr[i];
		sum += arr[i];
		++cnt[arr[i] + 4000];
	} 
	
	sort(arr, arr + n);
	
	for(int i=0; i<8001; i++){
		if(cnt[i] > maxCnt){
			maxCnt = cnt[i];
			mcv = i;
		}
	}
	
	for(int i=0; i<8001; i++){
		if(cnt[i] == maxCnt && i > mcv){
			mcv = i;
			break;
		}
	}
	
	cout << round(sum/n) << '\n';
	cout << arr[n/2] << '\n';
	cout << mcv - 4000 << '\n';
	cout << arr[n-1] - arr[0];
	
	return 0;
}
