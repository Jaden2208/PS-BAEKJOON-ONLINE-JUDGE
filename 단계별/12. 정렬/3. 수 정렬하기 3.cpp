// 10989

#include <iostream>
using namespace std;
int main(){
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n, input;
	cin >> n;
	int arr[10000] = {0};
	int max = 0;
	
	for(int i=0; i<n; i++){
		cin >> input;
		if(input > max) max = input;
		++arr[input-1];
	}
	
	for(int i=0; i<max; i++){
		for(int j=0; j<arr[i]; j++){
			cout << i+1 << '\n';
		}
	}
	
	return 0;
}

