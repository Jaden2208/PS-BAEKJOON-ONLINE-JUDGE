// 16236 다음에 다시 ^^* 

#include <iostream>
#include <queue>
#include <cstdlib>
using namespace std;

int n;
int water[20][20];
bool visited[20][20];
int sharkI, sharkJ;
int sharkSize = 2;
int sharkAte = 0;
int result = 0;

void drawWaterStat(){
	cout << "\nSHARK AT : " << sharkI << ", " << sharkJ << '\n';
	cout << "SHARK SIZE : " << sharkSize << '\n';
	cout << "SHARK ATE : " << sharkAte << '\n';
	cout << "WATER STAT \n";
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << water[i][j] << ' ';
		}
		cout << '\n';
	}
}

//bool hasFishToEat(){
//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			if(water[i][j] > 0 && water[i][j] < sharkSize){
//				return true;
//			}
//		}
//	}
//	return false;
//}

void resetVisited(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			visited[i][j] = false;
		}
	}
}

void bfs(int x, int y){
//	cout << "\nbfs 시작 \n"; 
	queue<pair<int, int>> q;
	q.push(pair<int, int>(x, y));
	visited[x][y] = true;
	int cnt = 0;
	while(!q.empty()){
		pair<int, int> p = q.front();
		q.pop();
		int i = p.first;
		int j = p.second;
		if(water[i][j] > sharkSize) continue;
		if(water[i][j] > 0 && water[i][j] < sharkSize){
			++cnt;
			
			if(cnt == 1) {	
				continue;
			} 
			
			
//			int sec = abs(sharkI - i) + abs(sharkJ - j);
////			cout << "sec: " << sec << '\n';
//			result += sec;
//			sharkI = i;
//			sharkJ = j;
//			sharkAte += water[i][j];
//			water[i][j] = 0;
//			if(sharkAte >= sharkSize){
//				++sharkSize;
//				sharkAte -= sharkSize;
//			}
//			break;
		}
		if(i-1 >= 0 && !visited[i-1][j]) {
			q.push(pair<int, int>(i-1, j));
			visited[i-1][j];
		}
		if(j-1 >= 0 && !visited[i][j-1]) {
			q.push(pair<int, int>(i, j-1));
			visited[i][j-1];
		}
		if(j+1 < n && !visited[i][j+1]) {
			q.push(pair<int, int>(i, j+1));
			visited[i][j+1];
		} 
		if(i+1 < n && !visited[i+1][j]) {
			q.push(pair<int, int>(i+1, j));
			visited[i+1][j];
		}
	}
	
}

int main(){
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> water[i][j];
			if(water[i][j] == 9){
				water[i][j] = 0;
				sharkI = i;
				sharkJ = j;
			}
		}
	}
	int ti = -1;
	int tj = -1;
//	drawWaterStat();
	while(ti != sharkI || tj != sharkJ){
		ti = sharkI;
		tj = sharkJ;
		resetVisited();
		bfs(sharkI, sharkJ);
		cout << "ti: " << ti << '\n';
		cout << "tj: " << tj << '\n';
		cout << "sharkI: " << sharkI << '\n';
		cout << "sharkJ: " << sharkJ << '\n';
		drawWaterStat();
	}
	
	cout << result;
	
	return 0;
}
