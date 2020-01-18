// 10814

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
bool compare(pair<int, pair<int, string>> a, pair<int, pair<int, string>> b){
	if(a.second.first == b.second.first) return a.first < b.first;
	else return a.second.first < b.second.first;
}
int main(){
	int n, age;
	string name;
	cin >> n;
	vector<pair<int, pair<int, string>>> user;
	for(int i=0; i<n; i++){
		cin >> age >> name;
		user.push_back(pair<int, pair<int, string>>(i, pair<int, string>(age, name)));
	}
	
	sort(user.begin(), user.end(), compare);
	
	for(int i=0; i<n; i++){
		cout << user[i].second.first << ' ' << user[i].second.second << '\n';
	}
	
	return 0;
}
