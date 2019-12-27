// 10817

#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if((b>=a && a>=c) || (c>=a && a>=b)) cout << a;
	else if((a>=b && b>=c) || (c>=b && c>=a)) cout << b;
	else cout << c;	
	return 0;
}
