// 10773

#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	int k, n;
	cin >> k;
	vector<int> arr;
	for(int i=0; i<k; i++){
		cin >> n;
		if(n==0) arr.pop_back();
		else arr.push_back(n);
	}
	int sum = 0;
	for(int i=0; i<arr.size(); i++){
		sum += arr[i];
	}
	cout << sum;
	
	return 0;
}
