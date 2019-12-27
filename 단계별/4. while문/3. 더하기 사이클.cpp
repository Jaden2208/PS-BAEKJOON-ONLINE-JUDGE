// 1110

#include <iostream>
using namespace std;
int main(){
	int n, tmpn;
	int cnt = 0;
	
	cin >> n;
	tmpn = n;
	do{
		++cnt;
		n = n%10*10 + (n/10 + n%10)%10;
	} while(n != tmpn);
	cout << cnt;

	return 0;
}
