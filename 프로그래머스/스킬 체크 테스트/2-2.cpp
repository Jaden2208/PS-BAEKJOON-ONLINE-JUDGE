#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    int len = prices.size();
	vector<int> answer;
	
	for(int i=0; i<len; i++){
		int sec = 0;
		int price = prices[i];
		for(int j=i+1; j<len; j++){
			++sec;
			if(prices[j] < price) break;
		}
		answer.push_back(sec);
	}    
    return answer;
}
