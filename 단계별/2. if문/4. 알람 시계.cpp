#2884

#include <iostream>
using namespace std;
int main(){
	
	int h, m;
	cin >> h >> m;
	m -= 45;
	if(m < 0){
		h -= 1;
		if(h < 0) h = 24 + h;
		m = 60 + m;
	}
	
	cout << h << ' ' << m;
	
	return 0;
}
