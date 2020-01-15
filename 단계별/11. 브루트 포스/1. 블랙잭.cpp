// 2798

#include <iostream>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	int c[n];
	for(int i=0; i<n; i++){
		cin >> c[i];
	}
	int max = 0;
	int sum;
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			for(int k=j+1; k<n; k++){
				sum = c[i] + c[j] + c[k];
				if(sum <= m && sum > max) max = sum; 
			}
		}
	}
	cout << max;
	
	return 0;
}
