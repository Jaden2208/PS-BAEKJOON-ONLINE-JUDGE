// 10844

#include <iostream>
#define BIG_NUM 1000000000
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	//dp[n][j] : 길이 n, 마지막 수가 j인 경우 
	long long dp[n+1][10];
	
	// dp[1][i] 초기화 : 처음 0을 제외하고 전부 계단이기 때문에 1로. 
	for(int i=1; i<10; i++){
		dp[1][i] = 1;
	}
	dp[1][0] = 0;
	
	// 이전 dp의 오른쪽에 값을 추가해준다. 
	for(int i=2; i<=n; i++){
		for(int j=0; j<=9; j++){
			if(j == 0){ // 마지막 수가 0이면 "이전 dp의 마지막 수+1"을 값으로 추가. 
				dp[i][j] = dp[i-1][j+1] % BIG_NUM;
			} else if (j == 9){ // 마지막 수가 9이면 "이전 dp의 마지막 수-1"을 값으로 추가. 
				dp[i][j] = dp[i-1][j-1] % BIG_NUM;
			} else { // 그 외의 경우에는 "이전 dp의 마지막 수 +-1" 두가지 경우 전부 추가. 
				dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1] % BIG_NUM;
			}
		}
	}
	
	long long sum = 0;
	for(int i=0; i<10; i++){
		sum += dp[n][i];
	}
	cout << sum % BIG_NUM;
	
	return 0;
}
