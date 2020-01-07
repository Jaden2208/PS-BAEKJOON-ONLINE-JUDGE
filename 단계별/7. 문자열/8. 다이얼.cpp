// 5622

#include <iostream>
using namespace std;
int main(){
	string str;
	cin >> str;
	int sec = 0;
	for(int i=0; i<str.size(); i++){
		int check = str[i] - 65;
		if(check >= 0 && check < 3) sec += 3;
		else if(check >= 3 && check < 6) sec += 4;
		else if(check >= 6 && check < 9) sec += 5;
		else if(check >= 9 && check < 12) sec += 6;
		else if(check >= 12 && check < 15) sec += 7;
		else if(check >= 15 && check < 19) sec += 8;
		else if(check >= 19 && check < 22) sec += 9;
		else sec += 10;
	}
	cout << sec;
	
	return 0;
}
