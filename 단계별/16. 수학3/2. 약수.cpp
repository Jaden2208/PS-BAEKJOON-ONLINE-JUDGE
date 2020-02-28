// 1037

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int num[n];
	int maxn = 2;
	int minn = 1000000;
	
	for(int i=0; i<n; i++){
		cin >> num[i];
		maxn = max(maxn, num[i]);
		minn = min(minn, num[i]);
	}
	
	cout << maxn * minn;
	
	return 0;
}
