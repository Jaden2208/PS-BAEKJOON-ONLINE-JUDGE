// 10866

#include <iostream>
#include <deque>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	deque<int> dq;
	for(int i=0; i<n; i++){
		string str;
		int num;
		cin >> str;
		if(str == "push_front"){
			cin >> num;
			dq.push_front(num);
			continue;
		} else if(str == "push_back"){
			cin >> num;
			dq.push_back(num);
			continue;
		} else if(str == "pop_front"){
			if(dq.size() == 0) cout << -1;
			else {
				cout << dq.front();
				dq.pop_front();
			}
		} else if(str == "pop_back"){
			if(dq.size() == 0) cout << -1;
			else {
				cout << dq.back();
				dq.pop_back();
			}
		} else if(str == "size"){
			cout << dq.size();
		} else if(str == "empty"){
			if(dq.size() == 0) cout << 1;
			else cout << 0;
		} else if(str == "front"){
			if(dq.size() == 0) cout << -1;
			else cout << dq.front();
		} else {
			if(dq.size() == 0) cout << -1;
			else cout << dq.back();
		}
		cout << '\n';
	}
	
	return 0;
}
