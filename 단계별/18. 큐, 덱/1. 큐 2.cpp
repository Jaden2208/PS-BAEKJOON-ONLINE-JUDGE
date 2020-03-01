// 18258

#include <iostream>
#include <queue>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	string str;
	int num;
	queue<int> q;
	for(int i=0; i<n; i++){
		cin >> str;
		if(str == "push"){
			cin >> num;
			q.push(num);
			continue;
		} else if(str == "pop"){
			if(q.size() == 0) cout << -1;
			else{
				cout << q.front();
				q.pop();
			}
		} else if(str == "size"){
			cout << q.size();
		} else if(str == "empty"){
			if(q.size() == 0) cout << 1;
			else cout << 0;
		} else if(str == "front"){
			if(q.size() == 0) cout << -1;
			else cout << q.front();
		} else{
			if(q.size() == 0) cout << -1;
			else cout << q.back();
		}
		cout << '\n';
	}
	
	return 0;
}
