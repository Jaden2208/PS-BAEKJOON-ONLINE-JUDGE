// 14888

#include <iostream>
using namespace std;

int n;
int A[11];
int o1, o2, o3, o4;
int cal[10]; // 1: +, 2: -, 3: *, 4: /
int minV = 1000000001;
int maxV = -1000000001;

void calculate(){
	int result = A[0];
	for(int i=1; i<n; i++){
		if(cal[i-1] == 1) result += A[i];
		else if(cal[i-1] == 2) result -= A[i];
		else if(cal[i-1] == 3) result *= A[i];
		else result /= A[i];
	}
	
	if(result < minV) minV = result;
	if(result > maxV) maxV = result;
}

void DFS(int cnt){
	if(cnt == n-1){
		calculate();
		return;
	}
	for(int i=0; i<o1; i++){
		cal[cnt] = 1;
		--o1;
		DFS(cnt + 1);
		cal[cnt] = 0;
		++o1;
	}
	for(int i=0; i<o2; i++){
		cal[cnt] = 2;
		--o2;
		DFS(cnt + 1);
		cal[cnt] = 0;
		++o2;
	}
	for(int i=0; i<o3; i++){
		cal[cnt] = 3;
		--o3;
		DFS(cnt + 1);
		cal[cnt] = 0;
		++o3;
	}
	for(int i=0; i<o4; i++){
		cal[cnt] = 4;
		--o4;
		DFS(cnt + 1);
		cal[cnt] = 0;
		++o4;
	}
}

int main(){
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> A[i];
	}
	
	cin >> o1 >> o2 >> o3 >> o4;
	
	DFS(0);
	
	cout << maxV << '\n' << minV;
	
	return 0;
}
