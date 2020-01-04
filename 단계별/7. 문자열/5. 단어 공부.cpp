// 1157

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string str;
	cin >> str;
	int len = str.size();
	char arr_str[len];
	for(int i=0; i<len; i++){
		arr_str[i] = toupper(str[i]);
	}
	sort(arr_str, arr_str + len);
	char check_word = arr_str[0];
	int cnt = 1;
	int max = 1;
	char max_word = arr_str[0];
	for(int i=1; i<len; i++){
		if(arr_str[i] == check_word){
			++cnt;
			if(i == len-1){
				if(cnt == max && check_word != max_word){
					max_word = '?';
				}
				if(cnt > max){
					max = cnt;
					max_word = arr_str[i];
				}	
			}
		}
		else {
			if(cnt == max && check_word != max_word){
				max_word = '?';
			}
			if(cnt > max){
				max = cnt;
				max_word = arr_str[i-1];
			}
			
			cnt = 1;
			check_word = arr_str[i];
		}
	}
	cout << max_word;

	return 0;
}
