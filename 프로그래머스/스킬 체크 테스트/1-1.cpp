#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    
    int t = x;
    int divider = 0;
    while(t>0){
    	divider += (t%10);
    	t /= 10;
	}
	if(x % divider != 0) answer = false; 
    
    return answer;
}

int main(){
	
	int x;
	cin >> x;
	if(solution(x)){
		cout << "true";
	}
	else cout << "false";
	
	return 0;
}
