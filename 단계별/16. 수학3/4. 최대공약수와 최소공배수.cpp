// 2609

#include <iostream>
using namespace std;
int main(){
	
	int a, b;
	cin >> a >> b;
	int smaller = min(a, b);
	
	int result = 1;
	int divider = 2;
	while(divider <= smaller){
		if(a%divider==0 && b%divider==0){
			result *= divider;
			a/=divider;
			b/=divider;
		} else{
			++divider;
		}
	}
	
	cout << result << '\n' << result * a * b;
	
	return 0;
}
