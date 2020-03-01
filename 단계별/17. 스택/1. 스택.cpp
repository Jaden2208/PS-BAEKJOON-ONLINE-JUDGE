// 10828

#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	
	vector<int> arr;
	
	string str;
	int input;
	for(int i=0; i<n; i++){
		cin >> str;
		if(str == "push"){
			cin >> input;
			arr.push_back(input);
			continue;
		} else if(str == "pop"){
			if(!arr.size()) cout <<  -1;
			else {
				cout << arr.back();
				arr.pop_back();
			}
		} else if(str == "size"){
			cout << arr.size();
		} else if(str == "empty"){
			if(!arr.size()) cout << 1;
			else cout << 0;
		} else {
			if(!arr.size()) cout << -1;
			else cout << arr.back();
		}
		cout << '\n';
	}
	return 0;
}
