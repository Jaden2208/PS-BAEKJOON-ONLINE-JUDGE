// 1966

#include <iostream>
#include <queue>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int cases;
	cin >> cases;
	for(int i=0; i<cases; i++){
		int n, m;
		cin >> n >> m;
		
		queue<pair<int, int>> q;
		int imp;
		for(int j=0; j<n; j++){
			cin >> imp;
			q.push(pair<int, int>(j, imp));
		}
		
		int cnt = 0;
		while(q.size()>0){
			int mIndex = q.front().first;
			int mImp = q.front().second;
			q.pop();
			queue<pair<int, int>> tempQ = q;

			bool thereIs = false;
			while(tempQ.size()>0){
				if(tempQ.front().second > mImp){
					thereIs = true;
					break;
				}
				tempQ.pop();
			}
			
			if(thereIs){
				q.push(pair<int, int>(mIndex, mImp));
			} else{
				++cnt;
				if(mIndex == m){
					cout << cnt << '\n';
					break;
				}
			}
		}
	}
	
	return 0;
}
