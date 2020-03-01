// 4949

#include <iostream>
#include <vector>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	while(getline(cin, str)){
		if(str == ".") break;
		vector<char> arr;
		bool isOk = true;
		for(int i=0; i<str.length(); i++){
			if(str.at(i) == '(' || str.at(i) == '[') {
				arr.push_back(str.at(i));
			}
			else if(str.at(i) == ')') {
				if(arr.size()>0 && arr.back() == '(') arr.pop_back();
				else {
					isOk = false;
					break;
				}
				
			}
			else if(str.at(i) == ']') {
				if(arr.size()>0 && arr.back() == '[') arr.pop_back();
				else {
					isOk = false;
					break;
				}
			}
		}
		if(arr.size() == 0 && isOk) cout << "yes\n";
		else cout << "no\n";
	}
	
	return 0;
}
