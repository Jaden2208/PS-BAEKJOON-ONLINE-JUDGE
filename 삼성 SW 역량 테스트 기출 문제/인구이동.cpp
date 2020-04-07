// 16234

#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

int n, l, r;
int land[50][50];
bool visited[50][50];
vector<pair<int, int>> v;
int cnt = 0;
int pSum = 0;

void resetVisited(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			visited[i][j] = false;
		}
	}
}

void movePeople(vector<pair<int, int>> v, int people){
	for(int i=0; i<v.size(); i++){
		land[v[i].first][v[i].second] = people;
	}
}

void dfs(int x, int y, int person, bool isFirst){
	if(visited[x][y] || x<0 || x>=n || y<0 || y>=n) {
		return;
	}
	int dif = abs(land[x][y] - person);
	if(!visited[x][y] && ((dif >= l && dif <= r) || isFirst)){
		visited[x][y] = true;
		++cnt;
		pSum += land[x][y];
		v.push_back(pair<int, int>(x, y));
		dfs(x-1, y, land[x][y], false);
		dfs(x, y+1, land[x][y], false);
		dfs(x+1, y, land[x][y], false);
		dfs(x, y-1, land[x][y], false);
	}

}

int main(){
	
	cin >> n >> l >> r;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> land[i][j];
			visited[i][j] = false;
		}
	}
	
	int wasMoved = true;
	int moveCount = 0;
	while(wasMoved){
		wasMoved = false;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cnt = 0;
				pSum = 0;
				v.clear();
				if(!visited[i][j]){
					dfs(i, j, land[i][j], true);
				}
				if(cnt > 1){
					movePeople(v, pSum/cnt);
					wasMoved = true;
					
				} 
			}
		}
		if(wasMoved) ++moveCount;
		resetVisited();
	}
	
	cout << moveCount;
	
	return 0;
}
