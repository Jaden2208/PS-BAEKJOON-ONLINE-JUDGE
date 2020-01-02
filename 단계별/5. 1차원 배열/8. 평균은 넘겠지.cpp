// 4344

#include <iostream>
using namespace std;
int main(){
	int c, n;
	cin >> c;
	for(int i=0; i<c; i++){
		cin >> n;
		int scores[n];
		float avg = 0;
		for(int j=0; j<n; j++){
			cin >> scores[j];
			avg += scores[j];
		}
		avg/=n;
		float overAvgCnt = 0;
		for(int j=0; j<n; j++){
			if(scores[j] > avg) ++overAvgCnt;
		}
		cout << fixed;
		cout.precision(3);
		cout << overAvgCnt/n*100 << "%\n";
	}
	
	return 0;
} 
