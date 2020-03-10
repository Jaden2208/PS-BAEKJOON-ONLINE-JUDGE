// 11286

#include <iostream>
#include <queue>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, x;
	cin >> n;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
	for(int i=0; i<n; i++){
		cin >> x;
		if(x == 0){
			if(heap.empty()) cout << 0;
			else {
				cout << heap.top().second;
				heap.pop();
			}
			cout << '\n';
		} else {
			heap.push(pair<int, int>(abs(x), x));
		}
	}
	
	return 0;
}
