// 2292

#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int cnt = 1;
	if(n == 1){
		cout << cnt;
		return 0;
	}
	--n;
	while(n >= 1){
		n -= 6*cnt;
		++cnt;
	}
	cout << cnt;
	return 0;
}
