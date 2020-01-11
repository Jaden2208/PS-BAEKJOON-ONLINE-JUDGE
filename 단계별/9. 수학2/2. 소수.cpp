// 2581

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int m, n;
	cin >> m >> n;
	int sum = 0;
	int min = n;
	
	for(int i=m; i<=n; i++){
		if(i == 1) continue;
		bool isPrime = true;
		for(int j=2; j<=sqrt(i); j++){
			if(i%j == 0){
				isPrime = false;
				break;
			}
		}
		if(isPrime){
			sum += i;
			if(i < min) min = i;
		}
	}
	if(sum == 0) cout << -1;
	else cout << sum << '\n' << min;
	
	return 0;
}
