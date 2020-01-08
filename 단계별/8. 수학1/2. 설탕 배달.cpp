// 2839

#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int five = n/5;
	if(n%5 == 0){
		cout << five;
		return 0;
	}
	int min = 5000;
	for(int i=0; i<=five; i++){
		int restOfN = n - i * 5;
		if(restOfN%3 != 0) continue;
		else if(i + restOfN/3 < min) min = i + restOfN/3;
	}
	if(min == 5000) cout << -1;
	else cout << min;
	
	return 0;
}
