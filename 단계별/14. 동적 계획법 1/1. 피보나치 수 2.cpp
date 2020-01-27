// 2748

#include <iostream>
using namespace std;
int main(){
	int n;
	long long a = 0, b = 1, tmp;
	
	cin >> n;
	if(n == 0 || n == 1) cout << n;
	else{
		for(int i=1; i<n; i++){
			tmp = a;
			a = b;
			b = tmp + a;
		}
		cout << b;
	}
	return 0;
}
