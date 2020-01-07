// 2941

#include <iostream>
using namespace std;
int main(){
	string cro[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	string str;
	cin >> str;
	for(int i=0; i<8; i++){
		int index = str.find(cro[i]);
		if(index != string::npos){
			str.replace(index, cro[i].length(), "_");
			--i;
		}
	}
	cout << str.size();
	
	return 0;
}
