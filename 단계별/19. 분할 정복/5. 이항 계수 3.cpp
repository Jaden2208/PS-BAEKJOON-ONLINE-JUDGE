// 11401 풀이 보니깐 몰라도 될 듯? 일단 패스 

#include <iostream>
using namespace std;

const long long KKK = 1000000007;
long long n, k;

long long dc(long long a, long long b){
	if(b == 0 || a == b){
		return 1;
	}
	return (dc(a-1, b-1) % KKK) + (dc(a-1, b) % KKK);
}

int main(){
	
	cin >> n >> k;
	
	cout << dc(n, k);
	
	return 0;
}
