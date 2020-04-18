// 1260

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m, v;
vector<int> arr[1001];
bool visited[1001];

void initVisited(){
	for(int i=1; i<=n; i++){
		visited[i] = false;
	}
}

void dfs(int p){
	if(visited[p]) return;
	cout << p << ' ';
	visited[p] = true;
	for(int i=0; i<arr[p].size(); i++){
		dfs(arr[p][i]);
	}
}

void bfs(int p){
	cout << '\n';
	queue<int> q;
	q.push(p);
	visited[p] = true;
	
	while(!q.empty()){
		int x = q.front();
		cout << x << ' ';
		q.pop();
		
		for(int i=0; i<arr[x].size(); i++){
			if(visited[arr[x][i]]) continue;
			q.push(arr[x][i]);
			visited[arr[x][i]] = true;
		}
	}
}

int main(){
	
	cin >> n >> m >> v;
	
	for(int i=0; i<m; i++){
		int from, to;
		cin >> from >> to;
		arr[from].push_back(to);
		arr[to].push_back(from);
	}
	
	for(int i=1; i<n; i++){
		sort(arr[i].begin(), arr[i].end());
	}
	
	dfs(v);
	
	initVisited();
	
	bfs(v);
	
	return 0;
}
