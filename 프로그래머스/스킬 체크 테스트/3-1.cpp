#include <vector>

using namespace std;

int answer = 0;

void dfs(int index, int n, vector<int> money){
	if(n==0){
		(++answer)%1000000007;
		return;
	} else if(index >= money.size()) return;
	
	for(int i=0; i<=n/money[index]; i++){
		dfs(index+1, n-money[index]*i, money);
	}
}

int solution(int n, vector<int> money) {
    
//    dfs(0, n, money);
	
    
    return answer;
}
