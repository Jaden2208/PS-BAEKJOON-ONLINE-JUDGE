// 3036

#include <iostream>
using namespace std;

int gcd(int a, int b){
	return a % b ? gcd(b, a%b) : b;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, a, b;
	cin >> n >> a;
	for(int i=1; i<n; i++){
		cin >> b;
		int d = gcd(a, b);
		cout << a/d << '/' << b/d << '\n';
	}
	
	return 0;
}
