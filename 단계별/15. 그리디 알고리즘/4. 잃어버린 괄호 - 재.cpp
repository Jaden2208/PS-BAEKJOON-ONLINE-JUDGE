// 1541

#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	string s;
	cin >> s;
	int num = 0;
	vector<int> nums;
	int minusIndex = 51;
	for(int i=0; i<s.length(); i++){
		if(s[i] != '-' && s[i] != '+'){
			num *= 10;
			num += (s[i] - '0');
			if(i == s.length() - 1){
				nums.push_back(num);
				break;
			}
		} else {
			nums.push_back(num);
			num = 0;
			if(s[i] == '-' && minusIndex == 51){
				minusIndex = nums.size();
			}
		}
	}
	
	int result = 0;
	for(int i=0; i<nums.size(); i++){
		if(i < minusIndex){
			result += nums[i];
		} else {
			result -= nums[i];
		}
	}

	cout << result;
	
	return 0;
}
