// 2577

#include <iostream>
using namespace std;
int main(){
	int input;
	int val = 1;
	int result[10] = {0};
	 
	for(int i=0; i<3; i++){
		cin >> input;
		val *= input;
	}
	
	while(val>0){
		result[val%10]++;
		val /= 10;
	}

	for(int i=0; i<10; i++){
		cout << result[i] << '\n';
	}
	 
	return 0;
} 
