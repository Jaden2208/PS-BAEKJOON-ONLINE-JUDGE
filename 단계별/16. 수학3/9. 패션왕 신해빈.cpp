// 9375

#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> m;
		string name, type;
		vector<pair<string, int>> types;
		for(int j=0; j<m; j++){
			cin >> name >> type;
			if(j==0){
				types.push_back(pair<string, int>(type, 1));
				continue;
			}
			bool thereIs = false;
			for(int k=0; k<types.size(); k++){
				if(types[k].first == type){
					thereIs = true;
					++types[k].second;
					break;
				}
			}
			if(!thereIs){
				types.push_back(pair<string, int>(type, 1));
			}
		}
		int result = 1;
		for(int j=0; j<types.size(); j++){
			result *= types[j].second + 1;
		}
		cout << result - 1 << '\n';
	}
	
	return 0;
}
