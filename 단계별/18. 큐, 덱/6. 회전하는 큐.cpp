// 1021

#include <iostream>
#include <deque>
using namespace std;
int main(){
	int n, m;
	cin >> n >> m;
	
	deque<int> dq;
	for(int i=1; i<=n; i++){
		dq.push_back(i);
	}
	
	int num;
	int cnt = 0;
	for(int i=0; i<m; i++){
		cin >> num;
		while(dq.size()>1){
			
			if(dq.front() == num){
				dq.pop_front();
				break;
			}
			
			int m = (dq.size()-1)/2;
			int nIndex;
			for(int j=0; j<dq.size(); j++){
				if(dq.at(j) == num){
					nIndex = j;
					break;
				}
			}
			
			if(nIndex <= m){
				dq.push_back(dq.front());
				dq.pop_front();
				++cnt;
			} else {
				dq.push_front(dq.back());
				dq.pop_back();
				++cnt;
			}
		}
		
	}
	
	cout << cnt;

	return 0;
}
