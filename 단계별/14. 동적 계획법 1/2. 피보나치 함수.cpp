// 1003

#include <iostream>
using namespace std;
int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int t, n;
	cin >> t;
	
	for(int i=0; i<t; i++){
		cin >> n;
		int a[2] = {1, 0}, b[2] = {0, 1}, tmp[2];
		if(n == 0) cout << a[0] << ' ' << a[1] << '\n';
		else{
			for(int j=1; j<n; j++){
				tmp[0] = a[0], tmp[1] = a[1];
				a[0] = b[0], a[1] = b[1];
				b[0] = tmp[0] + a[0], b[1] = tmp[1] + a[1];
			}
			cout << b[0] << ' ' << b[1] << '\n';
		}
	}
	return 0;
}
