// 2675

#include<iostream>
using namespace std;
int main(){
	int n, m;
	string str;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> m >> str;
		for(int j=0; j<str.size(); j++){
			for(int k=0; k<m; k++){
				cout << str.at(j);
			}
		}
		cout << '\n';
	} 
	
	return 0;
}
