// 2231

#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int result = 0;
	for(int i=0; i<n; i++){
		result = i;
		int tmp = i;
		for(int t=i; t>0; t/=10){
			result += t%10;
		}
		if(result == n){
			cout << i;
			return 0;
		}
	}
	cout << 0;
	
	return 0;
}
