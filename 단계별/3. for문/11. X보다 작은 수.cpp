// 10871

#include <iostream>
using namespace std;
int main(){
	int n, x, a;
	cin >> n >> x;
	cin.tie(NULL);
	for(int i=0; i<n; i++){
		cin >> a;
		if (a < x) cout << a << ' ';
	} 

	return 0;
}
