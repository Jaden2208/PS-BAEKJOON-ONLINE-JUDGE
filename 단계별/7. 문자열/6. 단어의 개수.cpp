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
����ϴ� �޸𸮴� ���� �� ũ���� �ð� ȿ���� ���� �� ���� �ڵ� 

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
