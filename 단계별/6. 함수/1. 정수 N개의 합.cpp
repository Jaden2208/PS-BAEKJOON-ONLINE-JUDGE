// 15596
// ��� : �Լ� ���θ� �����ϸ� ���� 

#include<iostream>
#include<vector>
using namespace std;

long sum(std::vector<int> &a){
	long long result = 0;
	for(int i=0; i<a.size(); i++){
		result += a[i];
	}
	return result;
} 

int main(){
	int n, input;
	vector<int> arr;
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> input;
		arr.push_back(input);
	}
	
	cout << sum(arr);
	
	return 0;
}


