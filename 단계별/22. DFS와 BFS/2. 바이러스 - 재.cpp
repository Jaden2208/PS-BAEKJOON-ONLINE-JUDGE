// 2606

#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> computer[101];
int cnt = -1;
int visited[101];

void dfs(int c){
	if(visited[c]) return;
	++cnt;
	visited[c] = true;
	
	for(int i=0; i<computer[c].size(); i++){
		dfs(computer[c][i]);
	}
}

int main(){
	
	cin >> n >> m;
	
	for(int i=0; i<m; i++){
		int c1, c2;
		cin >> c1 >> c2;
		computer[c1].push_back(c2);
		computer[c2].push_back(c1);
	}
	
	dfs(1);
	
	cout << cnt;
	
	return 0;
} 
