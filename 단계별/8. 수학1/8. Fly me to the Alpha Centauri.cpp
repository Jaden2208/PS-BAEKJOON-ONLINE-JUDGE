// 1011

#include <iostream>
using namespace std;
int main(){
	cin.tie(NULL); // (1)
	ios::sync_with_stdio(false); // (2)
	int t, x, y;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> x >> y;
		int distance = y - x;
		for(unsigned long j=1; j<=46341; j++){
			if(j*j >= distance){
				cout << (j-1)*2+1 << '\n';
				break;
			}
			else if(j*(j+1) >= distance){
				cout << j*2 << '\n';
				break;
			}
		}
	}
	
	return 0;
}


