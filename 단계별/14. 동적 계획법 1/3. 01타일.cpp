// 1904

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	long long a = 1, b = 2, tmp;
	if(n == 1) cout << a;
	else if(n == 2) cout << b;
	else{
		for(int i=2; i<n; i++){
			tmp = a;
			a = b;
			b = (tmp + a) % 15746;
		}
		cout << b;
	}
	
	return 0;
}
