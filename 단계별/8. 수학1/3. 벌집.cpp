// 2292

#include <iostream>
using namespace std;
int main(){
   int num;
   cin >> num;
   
   int total=0;
   int n =0;
   while( 1+3*n*(n+1) < num){
      ++n;
   }
   
   cout << n+1;
      return 0;
}

//´ú ÁÁÀº ÄÚµå 
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin >> n;
//	int cnt = 1;
//	if(n == 1){
//		cout << cnt;
//		return 0;
//	}
//	--n;
//	while(n >= 1){
//		n -= 6*cnt;
//		++cnt;
//	}
//	cout << cnt;
//	return 0;
//}
