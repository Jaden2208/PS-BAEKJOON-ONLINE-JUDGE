// 1152

#include <iostream>
using namespace std;
int main(){
	string str;
	int cnt = 0;
	
	while(cin >> str){
		++cnt;
	}
	cout << cnt;
	
	return 0;
}

/*
사용하는 메모리는 조금 더 크지만 시간 효율이 조금 더 높은 코드 

#include <iostream>
using namespace std;

int main(){
   string sen;
   getline(cin, sen);
   int cnt=1;
   if(sen[0] == ' ') --cnt;
   if(sen[sen.length()-1] == ' ') --cnt;
   
   for(int i=0; i<sen.length(); i++){
      
      if(sen[i] == ' ') {
         ++cnt;   
      }
      else if(sen[i] == '\n') break;
      else continue;
   } 
   
   cout << cnt;

   return 0;
}

*/
