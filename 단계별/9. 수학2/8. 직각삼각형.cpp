// 4153

#include <iostream>
using namespace std;
int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false); 
	int a, b, c;
	while(cin >> a >> b >> c && (a!=0 && b!=0 && c!=0)){
		bool isRecTri = false;
		if(a > b && a > c && a*a == b*b + c*c) isRecTri = true;
		else if(b > a && b > c && b*b == a*a + c*c) isRecTri = true;
		else if(c > a && c > b && c*c == a*a + b*b) isRecTri = true;
		if(isRecTri) cout << "right\n";
		else cout << "wrong\n";
	}
	
	return 0;
}
