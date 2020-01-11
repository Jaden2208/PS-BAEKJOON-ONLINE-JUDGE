// 1002

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	int x1, y1, r1, x2, y2, r2;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		if(x1 == x2 && y1 == y2 && r1 == r2){
			cout << -1 << '\n';
			continue;
		}
		float d = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
		if(r1 > r2){
			int tmp = r1;
			r1 = r2; // �� ª�� �� 
			r2 = tmp; // �� �� �� 
		}
		if(d == r1 + r2 || r1 == r2 - d) cout << 1 << '\n';
		else if(d < r1 + r2 && r1 > r2 - d) cout << 2 << '\n';
		else cout << 0 << '\n';
	}
	
	return 0;
}
