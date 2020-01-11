// 1085

#include <iostream>
using namespace std;
int main(){
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int d1 = w-x;
	int d2 = h-y;
	if(x <= y && x <= d1 && x <= d2) cout << x;
	else if(y <= x && y <= d1 && y <= d2) cout << y;
	else if(d1 <= x && d1 <= x && d1 <= d2) cout << d1;
	else cout << d2;
	
	return 0;
}
