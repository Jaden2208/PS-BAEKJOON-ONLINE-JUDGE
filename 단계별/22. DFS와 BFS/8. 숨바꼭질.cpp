// 1697 다시 해보기. 

#include <iostream>
#include <queue>
using namespace std;
int main(){
	
	int n, k;
	cin >> n >> k;
	int visited[100001] = {0};
	
	queue<int> q;
	q.push(n);
	
	int result = 0;
	
	while(!q.empty()){
		int x = q.front();
		if(x == k){
			result = visited[x];
			break;
		}
		q.pop();
		
		
		for(int i=0; i<3; i++){
			int nextX;
			if(i==0) nextX = x + 1;
			else if(i==1) nextX = x - 1;
			else nextX = 2 * x;
			
			if(nextX<0 || nextX>100000 || visited[nextX] != 0) continue;
			q.push(nextX);
			visited[nextX] = visited[x] + 1;
		}
	}
	
	cout << result;
		
	return 0;
}
