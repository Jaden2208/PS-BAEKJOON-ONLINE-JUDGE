// 11022

#include <iostream>
using namespace std;
int main(){
	int n, a, b;
	cin >> n;
	cin.tie(NULL);
	for(int i=1; i<=n; i++){
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << '\n';
	}

	return 0;
}
