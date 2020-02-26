// 11054

#include <iostream>
using namespace std;
int main(){
	
	int n;
	cin >> n;
	int arr[n];
	int dp1[n];
	int dp2[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	// arr[i] �� ���ҷ� ������ ���� �� ���� �κ� ������ ���� ���ϱ�. 
	for(int i=0; i<n; i++){
		dp1[i] = 1;
		for(int j=0; j<i; j++){
			if(arr[i] > arr[j] && dp1[j] + 1 > dp1[i]){
				dp1[i] = dp1[j] + 1;
			}
		}
	}
	
	// arr[i] �� ���ҷ� ������ ���� �� ���� �κ� ������ ���� ���ϱ�.
	for(int i=n-1; i>=0; i--){
		dp2[i] = 1;
		for(int j=i; j<n; j++){
			if(arr[i] > arr[j] && dp2[j] + 1 > dp2[i]){
				dp2[i] = dp2[j] + 1;
			}
		}
	}
	
	// �ΰ� ���� �� ū �� ã��.
	int result = 0;
	for(int i=0; i<n; i++){
		if(dp1[i] + dp2[i] > result){
			result = dp1[i] + dp2[i];
		}
	} 
	
	cout << result - 1;
	
	return 0;
}
