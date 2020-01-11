// 1978

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n, x;
	cin >> n;
	int cnt = 0;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x == 1) continue;
		bool thereIs = false;
		for(int j=2; j<=sqrt(x); j++){
			if(x%j == 0){
				thereIs = true;
				break;
			}
		}
		if(!thereIs) ++cnt;
	}
	cout << cnt;
	
	return 0;
}
