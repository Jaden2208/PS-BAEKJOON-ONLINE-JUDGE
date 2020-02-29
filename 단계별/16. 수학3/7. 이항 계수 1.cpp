// 11050

#include <iostream>
using namespace std;
int main(){
	
	int n, k;
	cin >> n >> k; 
	
	int a = 1;
	for(int i=n; i>k; i--){
		a *= i;
	}
	int b = 1;
	for(int i=n-k; i>=2; i--){
		b *= i;
	}
	cout << a/b;
	
	return 0;
}
