// 10809

#include<iostream>
using namespace std;
int main(){
	string str;
	cin >> str;
	int result[26];
	fill_n(result, 26, -1);
	
	char ch;
	for(int i=97; i<=122; i++){
		ch = i;
		for(int j=0; j<str.size(); j++){
			if(ch == str.at(j)){
				result[i-97] = j;
				break;
			}
		}
	}
	for(int i=0; i<26; i++){
		cout << result[i] << ' ';
	}
	
	return 0;
}
