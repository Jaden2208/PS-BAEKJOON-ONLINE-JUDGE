// 10250

#include <iostream>
using namespace std;
int main(){
	int t, h, w, n;
	cin >> t;
	for(int i=0; i<t; i++){
		cin >> h >> w >> n;
		int room = n % h; // Ãþ
		if(room == 0) room = h;
		room = room * 100 + n/h;
		if(n%h != 0) ++room;
		cout << room << '\n';
	}
	
	return 0;
}
