// 10844

#include <iostream>
#define BIG_NUM 1000000000
using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	//dp[n][j] : ���� n, ������ ���� j�� ��� 
	long long dp[n+1][10];
	
	// dp[1][i] �ʱ�ȭ : ó�� 0�� �����ϰ� ���� ����̱� ������ 1��. 
	for(int i=1; i<10; i++){
		dp[1][i] = 1;
	}
	dp[1][0] = 0;
	
	// ���� dp�� �����ʿ� ���� �߰����ش�. 
	for(int i=2; i<=n; i++){
		for(int j=0; j<=9; j++){
			if(j == 0){ // ������ ���� 0�̸� "���� dp�� ������ ��+1"�� ������ �߰�. 
				dp[i][j] = dp[i-1][j+1] % BIG_NUM;
			} else if (j == 9){ // ������ ���� 9�̸� "���� dp�� ������ ��-1"�� ������ �߰�. 
				dp[i][j] = dp[i-1][j-1] % BIG_NUM;
			} else { // �� ���� ��쿡�� "���� dp�� ������ �� +-1" �ΰ��� ��� ���� �߰�. 
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
