// 1018

#include <iostream>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	string row[n];
	for(int i=0; i<n; i++){
		cin >> row[i];
	}
	char check;
	int minCnt = m*n;
	for(int w=0; w<2; w++){
		if(w==0) check = 'W';
		if(w==1) check = 'B';
		for(int k=0; k<n-7; k++){
			for(int l=0; l<m-7; l++){
				int cnt = 0;
				for(int i=k; i<k+8; i++){
					for(int j=l; j<l+8; j++){
						if(check == 'W' && row[i][j] == 'W'){
							++cnt;
							check = 'B';
						}
						else if(check == 'B' && row[i][j] == 'B'){
							++cnt;
							check = 'W';
						}
						else check = row[i][j];
						if(j == l+7){
							if(check == 'B') check = 'W';
							else check = 'B';
						}
					}
				}
				if(cnt < minCnt) minCnt = cnt;
			}
		}
	}
	cout << minCnt;
	
	return 0;
}
