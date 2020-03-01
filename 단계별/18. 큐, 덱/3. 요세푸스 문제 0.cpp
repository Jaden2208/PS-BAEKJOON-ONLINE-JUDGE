// 11866

#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main(){
	
	int n, k;
	cin >> n >> k;
	
	queue<int> q;
	vector<int> v;
	int cnt = 0;
	int num = 1;
	bool check = false;
	while(v.size() < n){
		if(num <= n){
			if(cnt + 1 < k){
				q.push(num);
				++cnt;
			} else {
				v.push_back(num);
				cnt = 0;
			}
			++num;
		} else {
			if(cnt + 1 < k){
				q.push(q.front());
				q.pop();
				++cnt;
			} else {
				v.push_back(q.front());
				q.pop();
				cnt = 0;
			}
		}
	}
	
	cout << "<" << v[0];
	for(int i=1; i<n; i++){
		cout << ", " << v[i];
	}
	cout << ">";
	
	return 0;
}
