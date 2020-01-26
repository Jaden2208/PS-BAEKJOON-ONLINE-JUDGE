// 15652

#include <iostream>
using namespace std;

int n, m;
bool visited[9];
int arr[9];

void printAll(){
	for(int i=0; i<m; i++){
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void recur(int cnt, int t){
	if(cnt == m){
		printAll();
		return;
	}
	for(int i=t; i<=n; i++){
		arr[cnt] = i;
		recur(cnt + 1, i);
	}
}
int main(){
	cin >> n >> m;
	
	recur(0, 1);
	
	return 0;
}
