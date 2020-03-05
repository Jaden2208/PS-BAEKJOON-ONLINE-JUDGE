// 10830 ÆÐ¾² 

#include <iostream>
using namespace std;

int n, b;
int c = 1000;
long long arr[5][5];
long long result[5][5];

void printAll(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << result[i][j] << ' ';
		}
		cout << '\n';
	}
	cout << "-----------------------\n";
}

void calculate(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			int temp = 0;
			for(int k=0; k<n; k++){
				temp += (result[i][k]*arr[k][j]);
			}
			result[i][j] = temp % c;
		}
	}
	printAll();
}

void pow(int cnt){
	if(cnt == 0){
		return;
	} else if(cnt % 2 == 1) {
		calculate();
		pow(cnt-1);
	} else {
		pow(cnt/2);
		pow(cnt/2);
	}
	
}

int main(){
	
	cin >> n >> b;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
			result[i][j] = arr[i][j];
		}
	} 
	
	pow(b-1);
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << result[i][j] << ' ';
		}
		cout << '\n';
	}
	
	
	return 0;
}
