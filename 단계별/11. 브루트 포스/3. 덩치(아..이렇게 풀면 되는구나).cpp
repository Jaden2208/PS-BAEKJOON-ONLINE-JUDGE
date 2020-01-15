// 7568

#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	pair<int, int> people[n];
	int rank[n] = {0};
	for(int i=0; i<n; i++){
		cin >> people[i].first >> people[i].second;
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(people[i].first > people[j].first && people[i].second > people[j].second){
				++rank[j];
			}
		}
	}
	for(int i=0; i<n; i++){
		cout << rank[i]+1 << ' ';
	}
	
	return 0;
}
