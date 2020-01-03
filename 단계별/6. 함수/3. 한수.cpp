// 1065

#include<iostream>
#include<vector>
using namespace std;

bool isHan(int n){
	vector<int> arr;
	while(n>0){
		arr.push_back(n%10);
		n /= 10;
	}
	int gap = arr[0] - arr[1];
	for(int i=2; i<arr.size(); i++){
		if(arr[i-1] - arr[i] != gap) return false;
	}
	return true;
}

int main(){
	int n;
	int cnt = 0;
	cin >> n;
	for(int i=1; i<=n; i++){
		if(isHan(i)) ++cnt;
	}
	
	cout << cnt; 
	
	return 0;
}
