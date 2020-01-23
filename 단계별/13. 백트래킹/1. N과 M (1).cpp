// 15649

#include <iostream>
using namespace std;

int n, m; // n 까지 중복 없이 m 개
bool visited[9]; // 방문했는지  
int arr[9]; // 출력할 것 

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
		if(!visited[i]){
			arr[cnt] = i;
			visited[i] = true;
			recur(cnt+1);
			visited[i] = false;
		}

	}
}

int main(){
	cin >> n >> m; 
	
	recur(0);
	
	return 0;
}
