// 11651

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(pair<int, int> a, pair<int, int> b){
	if(a.second == b.second) return a.first < b.first;
	else return a.second < b.second;
}
int main(){
	int n, x, y;
	cin >> n;
	vector<pair<int, int>> loc;
	for(int i=0; i<n; i++){
		cin >> x >> y;
		loc.push_back(pair<int, int>(x, y));
	}
	
	sort(loc.begin(), loc.end(), compare);
	
	for(int i=0; i<n; i++){
		cout << loc[i].first << ' ' << loc[i].second << '\n';
	}
	return 0;
}
