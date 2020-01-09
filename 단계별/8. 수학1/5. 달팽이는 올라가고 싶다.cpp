// 2869

#include <iostream>
using namespace std;
int main(){
	
	int a, b, v;
	cin >> a >> b >> v;
	if(a == v){
		cout << 1;
		return 0;
	}
	v -= a;
	int day = v/(a-b);
	if(v%(a-b) != 0) ++day;
	if(day == 0) ++day;
	cout << day + 1;
	
	return 0;
}
