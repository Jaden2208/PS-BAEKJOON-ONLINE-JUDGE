// 2667

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;

const int MAX = 26;
char arr[MAX][MAX];
int visited[MAX][MAX];
vector<int> counts;
int cnt = 0;

void count(int x, int y){
	if(visited[x][y]) return;
	if(x < 0 || y >= n) return;
	if(arr[x][y] == '1' && !visited[x][y]){
		++cnt;
		visited[x][y] = true;
		count(x-1, y);
		count(x+1, y);
		count(x, y-1);
		count(x, y+1);
	} else return;
}

int main(){
	
 
	cin >> n;
	
	string input;
	for(int i=0; i<n; i++){
		cin >> input;
		for(int j=0; j<n; j++){
			arr[i][j] = input.at(j);
			visited[i][j] = false;
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(visited[i][j] || arr[i][j] == '0') continue;
			count(i, j);
			counts.push_back(cnt);
			cnt = 0;
		}
	}
	
	sort(counts.begin(), counts.end());
	
	int size = counts.size();
	cout << size << '\n';
	for(int i=0; i<size; i++){
		cout << counts[i] << '\n';
	}
	
	return 0;
}
