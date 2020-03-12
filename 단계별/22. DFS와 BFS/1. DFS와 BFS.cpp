// 1260

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

vector<int> arr[1001];
bool visited[1001];
int n, v;

void dfs(int p){
	if(visited[p]) return;
	cout << p << ' ';
	visited[p] = true;
	for(int i=0; i<arr[p].size(); i++){
		dfs(arr[p][i]);
	}
}

void bfs(int p){
	queue<int> q;
	q.push(p);
	visited[p] = true;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		cout << x << ' ';
		for(int i=0; i<arr[x].size(); i++){
			int num = arr[x][i];
			if(visited[num]) continue;
			q.push(num);
			visited[num] = true;
		}
	}

}

void resetVisited(){
	for(int i=1; i<=n; i++){
		visited[i] = false;
	}
}

int main(){
	
	int m;
	cin >> n >> m >> v;
	int p1, p2;
	
	
	for(int i=0; i<m; i++){
		cin >> p1 >> p2;
		arr[p1].push_back(p2);
		arr[p2].push_back(p1);
	}
	for(int i=1; i<=n; i++){
		sort(arr[i].begin(), arr[i].end());
	}
	
	dfs(v);
	cout << '\n';
	resetVisited();
	bfs(v);
	
	return 0;
}
