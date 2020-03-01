// 1874

#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	int index = 0;
	vector<int> nums;
	vector<char> result;
	for(int i=1; i<=n; i++){
		nums.push_back(i);
		result.push_back('+');
		while(arr[index] == nums.back()){
			++index;
			nums.pop_back();
			result.push_back('-');
		}
	}
	if(nums.size()==0){
		for(int i=0; i<result.size(); i++){
			cout << result[i] << '\n';
		}
	} else cout << "NO";
	
	return 0;
}
