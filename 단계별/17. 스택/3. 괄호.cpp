// 9012

#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string par;
		cin >> par;
		int cnt = 0;
		for(int i=0; i<par.length() && cnt>=0; i++){
			if(par.at(i)=='(') ++cnt;
			else --cnt;
		}
		if(!cnt) cout << "YES\n";
		else cout << "NO\n";
	} 
	
	return 0;
}
