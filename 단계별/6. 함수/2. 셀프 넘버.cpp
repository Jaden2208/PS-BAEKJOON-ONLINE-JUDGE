// 4673

#include<iostream>
using namespace std;

bool isSelf(int n){
	for(int i=1; i<=10000; i++){
		int tmp_i = i;
		int d_i = i;
		while(tmp_i>0){
			d_i += (tmp_i%10);
			tmp_i /= 10;
		}
		if(d_i == n) return false;
	}
	return true;
}

int main(){
	for(int i=1; i<=10000; i++){
		if(isSelf(i)) cout << i << '\n';
	}
	
	return 0;
}
