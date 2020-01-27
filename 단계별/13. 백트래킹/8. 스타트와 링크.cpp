// 14889

#include <iostream>
#include <vector>
using namespace std;

int n;
int arr[20][20];
bool picked[20];


int result = 990; // 가능한 최대 차이 

void dfs(int current, int cnt){
	if(cnt == n/2){
		vector<int> teamStart;
		vector<int> teamLink;

		for(int i=0; i<n; i++){
			if(picked[i]) teamStart.push_back(i);
			else teamLink.push_back(i);
		}
		
		
		int sStat = 0;
		int lStat = 0;
		for(int i=0; i<n/2; i++){
			for(int j=i+1; j<n/2; j++){
				int x1 = teamStart[i], y1 = teamStart[j];
				int x2 = teamLink[i], y2 = teamLink[j];
				sStat += arr[x1][y1] + arr[y1][x1];
				lStat += arr[x2][y2] + arr[y2][x2];
			}
		}
		result = min(result, abs(sStat - lStat));
		return;
	}
	for(int i=current+1; i<n; i++){
		if(!picked[i]){
			picked[i] = true;
			dfs(i, cnt + 1);
			picked[i] = false;
		}
	}
}

int main(){
	
	cin >> n;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> arr[i][j];
		}
	}
	
	dfs(0, 0);
	
	cout << result;
	
	return 0;
}
