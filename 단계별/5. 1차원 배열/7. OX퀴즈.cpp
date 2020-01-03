// 8958

#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	string ox;
	for(int i=0; i<n; i++){
		cin >> ox;
		bool wasO = false;
		int score = 1;
		int scoreSum = 0;
		for(int j=0; j<ox.size(); j++){
			if(ox.at(j) == 'O'){
				if(wasO) ++score;
				wasO = true;
				scoreSum += score;
			}
			else{
				wasO = false;
				score = 1;
			}
		}
		cout << scoreSum << '\n';
	}
	
	return 0;
} 
