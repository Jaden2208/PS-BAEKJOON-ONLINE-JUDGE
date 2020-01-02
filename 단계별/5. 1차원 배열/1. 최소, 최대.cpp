// 10818

#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int array[n];
	int max = -1000000;
	int min = 1000000;
	
	for(int i=0; i<n; i++)	cin >> array[i];

	for(int i=0; i<n; i++){
		if(array[i] > max) max = array[i];
		if(array[i] < min) min = array[i];
	}
	cout << min << ' ' << max;
	
	return 0;
} 
