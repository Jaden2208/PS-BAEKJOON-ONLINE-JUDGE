// 11729

#include <iostream>
#include <cmath>
using namespace std;

void hannoi(int n, int a, int b, int c){
	if(n==1) cout << a << ' ' << c << '\n';
	else{
		hannoi(n-1, a, c, b);
		cout << a << ' ' << c << '\n';
		hannoi(n-1, b, a, c);
	}
}

int main(){
	int n;
	cin >> n;
	unsigned int cnt = pow(2, n) - 1;
	cout << cnt << '\n';
	hannoi(n, 1, 2, 3);
	
	return 0;
}
