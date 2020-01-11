// 4948

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cin.tie(NULL); // (1)
	ios::sync_with_stdio(false); // (2)
	int n;
	while(cin >> n && n!=0){
		int cnt = 0;
		for(int i=n+1; i<=2*n; i++){
			if(i == 1) continue;
			bool isPrime = true;
			for(int j=2; j<=sqrt(i); j++){
				if(i%j == 0){
					isPrime = false;
					break;
				}
			}
			if(isPrime) ++cnt;
		}
		cout << cnt << '\n';
	}
	
	return 0;
}
