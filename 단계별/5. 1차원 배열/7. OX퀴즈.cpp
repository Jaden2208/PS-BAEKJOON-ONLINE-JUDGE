// 8958

#include <iostream>
using namespace std;
int main(){
	int n;
	string result;

	cin >> n;

	for(int i=0; i<n; i++){
		int total = 0;
		int score = 0;
		cin >> result;
		for(int j=0; j<result.size(); j++){
			if(result.at(j) == 'O'){
				score++;
				total += score;
			}
			else
				score = 0;
		}
		cout << total << endl;
	}
	return 0;
}
