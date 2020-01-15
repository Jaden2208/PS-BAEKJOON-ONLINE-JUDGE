// 1436

#include <iostream>
#include <string>
using namespace std;
int main(){
	int n;
	cin >> n;
	int cnt = 0;
	string str;
	for(int num=666; cnt<n; num++){
		str = to_string(num);
		if(str.find("666") != string::npos) ++cnt;
	}
	cout << str;
	
	return 0;
}
