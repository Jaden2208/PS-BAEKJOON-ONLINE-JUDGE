// 15649

#include <iostream>
using namespace std;

int n, m; // n ���� �ߺ� ���� m ��
bool visited[9]; // �湮�ߴ���  
int arr[9]; // ����� �� 

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
