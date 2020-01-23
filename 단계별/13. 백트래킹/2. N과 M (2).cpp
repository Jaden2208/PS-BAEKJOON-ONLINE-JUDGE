// 15650

#include <iostream>
using namespace std;

int n, m; // n까지 m개 
bool visited[9]; // 방문했는지  
int arr[9]; // 출력할 결과  

void printAll(){
	for(int i=0; i<m; i++){
		cout << arr[i] << ' ';
	}
	cout << '\n';
}

void recur(int cnt, int t){
	if(cnt==m){
		printAll();
		return;
	}
	for(int i=t+1; i<=n; i++){
		if(!visited[i]){
			arr[cnt] = i;
			visited[i] = true;
			recur(cnt+1, i);
			visited[i] = false;
		}
	}
}

int main(){
	cin >> n >> m;

	recur(0, 0); 
	
	return 0;
}
