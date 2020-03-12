// 2606

#include <iostream>
#include <vector>
using namespace std;

vector<int> arr[101];
bool visited[101];
int cnt = -1;
void dfs(int p){
	if(visited[p]) return;
	++cnt;
	visited[p] = true;
	for(int i=0; i<arr[p].size(); i++){
		dfs(arr[p][i]);
	}
}

int main(){
	int n, m;
	cin >> n >> m;
	int p1, p2;
	for(int i=0; i<m; i++){
		cin >> p1 >> p2;
		arr[p1].push_back(p2);
		arr[p2].push_back(p1);
	}
	
	dfs(1);
	
	cout << cnt;
		
	return 0;
}
