// 1300 ÆÐ¾²... 

#include <iostream>
using namespace std;
int main(){
	
	int n, k;
	cin >> n >> k;
	
	int from = 1;
	int to = k;
	int result;
	while(from <= to) {
		int cnt = 0;
		int mid = (from + to) / 2;
		for(int i=1; i<=n; i++){
			cnt += min(mid/i, n);
		}
	}
	
	return 0;
}
