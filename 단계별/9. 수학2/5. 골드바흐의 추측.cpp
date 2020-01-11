// 9020

#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int n){
	if(n==1) return false;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i == 0) return false;
	}
	return true;
}
int main(){
	cin.tie(NULL); // (1)
	ios::sync_with_stdio(false); // (2)
	int n, x;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x;
		for(int j=x/2; j>=2; j--){
			if(isPrime(j) && isPrime(x-j)){
				cout << j << ' ' << x-j << '\n';
				break;
			}
		}
	} 
	
	return 0;
}
