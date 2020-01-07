// 1152

#include <iostream>
#include <vector>
using namespace std;
int main(){
	string str;
	vector<string> arr;
	
	while(cin >> str){
		arr.push_back(str);
	}
	cout << arr.size();
	
	return 0;
}
