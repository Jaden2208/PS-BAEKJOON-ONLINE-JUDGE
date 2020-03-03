// 1629 

#include <iostream>
using namespace std;

long long c;

long long pow(long long a, long long b){
	if(b == 1){
		return a;
	} else if(b == 0){
		return 1;
	} else if(b % 2 == 1){
		return pow(a, b-1) * a;
	}
	long long half = pow(a, b/2) % c;
	return (half * half) % c;
	
}

int main(){
	
	long long a, b;
	cin >> a >> b >> c;
	
	cout << pow(a, b) % c;
	
	return 0;
}
