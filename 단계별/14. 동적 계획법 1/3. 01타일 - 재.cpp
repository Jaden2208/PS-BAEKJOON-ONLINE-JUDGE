// 1904

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int num1 = 1;
	int num2 = 2;
	int result;
	if(n == 1) result = num1;
	else if(n == 2) result = num2;
	for(int i=2; i<n; i++){
		result = (num1 + num2) % 15746;
		num1 = num2;
		num2 = result;
	}
	
	cout << result;
	
	return 0;
}
