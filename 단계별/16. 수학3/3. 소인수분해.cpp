// 11653

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int divider = 2;
	while(n != 1){
		for(int i=divider; i<=n; i++){
			if(n%i == 0){
				divider = i;
				break;
			}
		}
		cout << divider << '\n';
		n /= divider;
	}
	
	return 0;
}
