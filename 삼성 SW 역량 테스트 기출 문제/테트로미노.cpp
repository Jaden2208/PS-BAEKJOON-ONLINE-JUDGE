// 14500

#include <iostream>
using namespace std;

int n, m;
const int MAX = 500;
int arr[MAX][MAX];
int maxSum = 0;
int sum;
void search1(int i, int j){
	if(j+3 < m){
		sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i][j+3];
		maxSum = max(maxSum, sum);
	}
	if(i+3 < n){
		sum = arr[i][j] + arr[i+1][j] + arr[i+2][j] + arr[i+3][j];
		maxSum = max(maxSum, sum);
	}
}

void search2(int i, int j){
	if(i+1 < n && j+1 < m){
		sum = arr[i][j] + arr[i][j+1] + arr[i+1][j] + arr[i+1][j+1];
		maxSum = max(maxSum, sum);
	}
}

void search3(int i, int j){
	if(j+1 < m && i+2 < n){
		sum = arr[i][j] + arr[i+1][j] + arr[i+2][j] + arr[i+2][j+1];
		maxSum = max(maxSum, sum);
	}
	if(j-1 >= 0 && i+2 < n){
		sum = arr[i][j] + arr[i+1][j] + arr[i+2][j] + arr[i+2][j-1];
		maxSum = max(maxSum, sum);
	}
	if(j+1 < m && i-2 >= 0){
		sum = arr[i][j] + arr[i-1][j] + arr[i-2][j] + arr[i-2][j+1];
		maxSum = max(maxSum, sum);
	}
	if(j-1 >= 0 && i-2 >= 0){
		sum = arr[i][j] + arr[i-1][j] + arr[i-2][j] + arr[i-2][j-1];
		maxSum = max(maxSum, sum);
	}
	
	if(j+2 < m && i-1 >= 0){
		sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i-1][j+2];
		maxSum = max(maxSum, sum);
	}
	if(j+2 < m && i+1 < n){
		sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+2];
		maxSum = max(maxSum, sum);
	}
	if(j-2 >= 0 && i-1 >= 0){
		sum = arr[i][j] + arr[i][j-1] + arr[i][j-2] + arr[i-1][j-2];
		maxSum = max(maxSum, sum);
	}
	if(j-2 >= 0 && i+1 < n){
		sum = arr[i][j] + arr[i][j-1] + arr[i][j-2] + arr[i+1][j-2];
		maxSum = max(maxSum, sum);
	}
}

void search4(int i, int j){
	if(i+2 < n && j+1 < m){
		sum = arr[i][j] + arr[i+1][j] + arr[i+1][j+1] + arr[i+2][j+1];
		maxSum = max(maxSum, sum);
	}
	if(i+2 < n && j-1 >= 0){
		sum = arr[i][j] + arr[i+1][j] + arr[i+1][j-1] + arr[i+2][j-1];
		maxSum = max(maxSum, sum);
	}
	if(i-1 >= 0 && j+2 < m){
		sum = arr[i][j] + arr[i][j+1] + arr[i-1][j+1] + arr[i-1][j+2];
		maxSum = max(maxSum, sum);
	}
	if(i+1 < n && j+2 < m){
		sum = arr[i][j] + arr[i][j+1] + arr[i+1][j+1] + arr[i+1][j+2];
		maxSum = max(maxSum, sum);
	}
}

void search5(int i, int j){
	if(i+1 < n && j+2 < m){
		sum = arr[i][j] + arr[i][j+1] + arr[i+1][j+1] + arr[i][j+2];
		maxSum = max(maxSum, sum);
	}
	if(i+2 < n && j+1 < m){
		sum = arr[i][j] + arr[i+1][j] + arr[i+1][j+1] + arr[i+2][j];
		maxSum = max(maxSum, sum);
	}
	if(i-1 >= 0 && j+2 < m){
		sum = arr[i][j] + arr[i][j+1] + arr[i-1][j+1] + arr[i][j+2];
		maxSum = max(maxSum, sum);
	}
	if(i+2 < n && j-1 < m){
		sum = arr[i][j] + arr[i+1][j] + arr[i+1][j-1] + arr[i+2][j];
		maxSum = max(maxSum, sum);
	}
}

int main(){
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin >> arr[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			search1(i, j);
			search2(i, j);
			search3(i, j);
			search4(i, j);
			search5(i, j);
		}
	}
	
	cout << maxSum;
	
	return 0;
}
