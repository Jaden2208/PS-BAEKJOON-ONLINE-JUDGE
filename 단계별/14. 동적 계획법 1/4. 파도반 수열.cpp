// 9461

#include <iostream>
using namespace std;
int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int t, n;
	
	cin >> t;
	for(int i=0; i<t; i++){
		long long arr[6] = {0, 1, 1, 1, 2, 2};
		cin >> n;
		if(n<=5){
			cout << arr[n]<< '\n';
			continue;
		}
		
		for(int j=5; j<n; j++){
			long long t = arr[1] + arr[5];
			arr[1] = arr[2];
			arr[2] = arr[3];
			arr[3] = arr[4];
			arr[4] = arr[5];
			arr[5] = t;
		}
		cout << arr[5] << '\n';
	} 
	return 0;
}
