// 1541

#include <iostream>
#include <vector>
using namespace std;

int main(){
	string str;
	cin >> str;
	int n = str.length();
	vector<int> nums;
	vector<char> opers;
	
	string temp;
	for(int i=0; i<n; i++){
		int s = str.at(i);
		if(i == n-1){
			temp += s;
			nums.push_back(atoi(temp.c_str()));
		}
		if(s=='+' || s=='-'){
			nums.push_back(atoi(temp.c_str()));
			temp = "";
			if(i!=n-1) opers.push_back(s);
		} else {
			temp += s;
		}
	}
	int result = nums[0];
	bool wasPlus = true;
	for(int i=0; i<opers.size(); i++){
		if(opers[i] == '+'){
			if(wasPlus){
				result += nums[i+1];
			}
			else {
				result -= nums[i+1];
			}
		} else{
			wasPlus = false;
			result -= nums[i+1];
		}
	}
	
	cout << result;
	
	return 0;
}
