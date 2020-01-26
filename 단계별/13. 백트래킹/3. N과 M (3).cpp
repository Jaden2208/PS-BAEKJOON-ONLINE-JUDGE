// 15651

#include <iostream>
using namespace std;

int n, m;
bool visited[8];
int arr[8];

void printAll(){
	for(int i=0; i<m; i++){
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void recur(int cnt){
	if(cnt == m){
		printAll();
		return;
	}
	for(int i=1; i<=n; i++){
		arr[cnt] = i;
		recur(cnt + 1);
	}
}

int main(){
	
	cin >> n >> m;
	recur(0);
	
	return 0;
}
