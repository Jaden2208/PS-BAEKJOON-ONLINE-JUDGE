// 1929

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cin.tie(NULL); // (1)
	ios::sync_with_stdio(false); // (2)
	int m, n;
	cin >> m >> n;
	for(int i=m; i<=n; i++){
		if(i == 1) continue;
		bool isPrime = true;
		for(int j=2; j<=sqrt(i); j++){
			if(i%j == 0){
				isPrime = false;
				break;
			}
		}
		if(isPrime) cout << i << '\n';
	}
	return 0;
}
