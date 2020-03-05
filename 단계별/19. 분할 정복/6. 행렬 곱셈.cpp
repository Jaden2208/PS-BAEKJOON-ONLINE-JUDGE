// 2740

#include <iostream>
using namespace std;
int main(){
	
	int n, m, k;
	cin >> n >> m;
	int A[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> A[i][j];
		}
	}
	
	cin >> m >> k;
	int B[m][k];
	for(int i=0; i<m; i++){
		for(int j=0; j<k; j++){
			cin >> B[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<k; j++){
			int result = 0;
			for(int l=0; l<m; l++){
				result += (A[i][l] * B[l][j]);
			}
			cout << result << ' ';
		}
		cout << '\n';
	}
	
	return 0;
}
