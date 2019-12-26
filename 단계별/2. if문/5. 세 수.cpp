//10817

#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	// b>a>c || c>a>b
	if((b>=a && a>=c ) || (c>=a && a>=b)) cout << a;
	// a>b>c || c>b>a
	else if((a>=b && b>=c) || (c>=b && c>=a)) cout << b;
	// a>c>b || b>c>a
	else cout << c;	
	return 0;
}
