// 2775

#include <iostream>
using namespace std;
int find(int k, int n){
	if(k==0) return n;
	if(n==1) return 1; 
	return find(k-1, n) + find(k, n-1);
}
int main(){
	int t, k, n;
	cin >> t; 
	for(int i=0; i<t; i++){
		int result = 0;
		cin >> k >> n; // kÃş nÈ£
		cout << find(k, n) << '\n';
	}
	
	return 0;
}
