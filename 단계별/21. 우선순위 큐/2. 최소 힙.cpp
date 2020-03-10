// 1927

#include <iostream>
#include <queue>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, x;
	cin >> n;
	priority_queue<int, vector<int>, greater<int>> heap;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x == 0){
			if(heap.empty()){
				cout << 0;
			} else {
				cout << heap.top();
				heap.pop();
			}
			cout << '\n';
		} else {
			heap.push(x);
		}
		
	}
	
	return 0;
}
