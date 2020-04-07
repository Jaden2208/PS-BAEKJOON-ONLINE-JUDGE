// 15686

#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
using namespace std;

int n, m;
int city[50][50];
int minDsum = INT_MAX;
int removeChicken;

int nearestDistance(int x, int y){
	int nDist = INT_MAX;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(city[i][j] == 2){
				nDist = min(nDist, abs(i-x) + abs(j-y));
			}
		}
	}
	return nDist;
}

int chickenDistance(){
	int dSum = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(city[i][j] == 1){
				dSum += nearestDistance(i, j);
			}
		}
	}
	return dSum;
}

void dfs(int x, int y, int cnt){
	if(cnt == removeChicken){
		minDsum = min(minDsum, chickenDistance());
		return;
	}
	for(int i=x; i<n; i++){
		if(i != x) y = 0;
		for(int j=y; j<n; j++){
			if(city[i][j] == 2){
				city[i][j] = 0;
				dfs(i, j+1, cnt+1);
				city[i][j] = 2;
			}
		}
	}
}

int main(){
	
	cin >> n >> m;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> city[i][j];
			if(city[i][j] == 2) ++removeChicken;
		}
	}
	removeChicken -= m;
	
	dfs(0, 0, 0); 
	
	cout << minDsum;
	
	return 0;
}
