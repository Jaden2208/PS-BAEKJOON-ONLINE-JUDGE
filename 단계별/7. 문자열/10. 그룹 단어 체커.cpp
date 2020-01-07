// 1316

#include <iostream>
using namespace std;
int main(){
	int n;
	string str;
	cin >> n;
	int cnt = 0;
	for(int i=0; i<n; i++){
		cin >> str;
		bool isGroup = true;
		for(int j=0; j<str.size(); j++){
			if(j+1 < str.size() && str[j] == str[j+1]) continue;
			if(str.substr(j+1, str.size()-1).find(str[j]) != string::npos){
				isGroup = false;
				break;
			}
		}
		if(isGroup) ++cnt;
	}
	cout << cnt;
	
	return 0;
}
