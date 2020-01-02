// 1546

#include <iostream>
using namespace std;
int main(){
	int n;
	int max = 0;
	float avg = 0;
	cin >> n;
	float score[n];
	
	for(int i=0; i<n; i++){
		cin >> score[i];
		if(score[i] > max) max = score[i];
	} 
	for(int i=0; i<n; i++){
		score[i] = score[i]/max*100;
		avg += score[i];
	}
	cout << avg/n;
	
	return 0;
} 
