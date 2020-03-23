// 13458

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
//	int *arr = new int[n];
	int arr[1000000];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int b, c;
	cin >> b >> c;
	
	long long result = 0;
	for(int i=0; i<n; i++){
		int remain = arr[i]-b;
		++result;
		if(remain <= 0) continue;
		result += (remain/c);
		if(remain%c > 0) ++result;
	}
	cout << result;
	
	return 0;
}
