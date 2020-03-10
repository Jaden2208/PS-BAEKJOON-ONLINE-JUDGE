// 1655

#include <iostream>
#include <queue>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, x;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> heap1;
	priority_queue<int> heap2;
	int mid;
	for(int i=0; i<n; i++){
		cin >> x;
		if(i == 0){
			mid = x;
		}
		else if(x > mid){
			heap1.push(x);
			if(heap1.size() - heap2.size() == 2){
				heap2.push(mid);
				mid = heap1.top();
				heap1.pop();
			} 
		} else {
			heap2.push(x);
			if(heap2.size() > heap1.size()) {
				heap1.push(mid);
				mid = heap2.top();
				heap2.pop();
			}
		}
		
		cout << mid << '\n';
	}
	
	return 0;
}
