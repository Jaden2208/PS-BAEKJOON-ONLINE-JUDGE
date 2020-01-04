// 11720

#include<iostream>
using namespace std;
int main(){
	int n;
	string str;
	cin >> n;
	cin >> str;
	
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += (str.at(i) - '0');
	}
	
	cout << sum;
	
	return 0;
}
