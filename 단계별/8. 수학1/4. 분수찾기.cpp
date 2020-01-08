// 1193

#include <iostream>
using namespace std;
int main(){
	int num;
    cin >> num;
    int n=0;
    while( n*(n+1)/2 < num){
       ++n;
    }     
    if(n%2 == 0) cout <<  num - (n*(n-1)/2) << '/' << (n+1) - (num - (n*(n-1)/2));
    else cout << (n+1) - (num - (n*(n-1)/2))  << '/' << num - (n*(n-1)/2);
    return 0;
}

// ´ú ÁÁÀº ÄÚ 
//#include <iostream>
//using namespace std;
//int main(){
//	int n;
//	cin >> n;
//	int a = 1;
//	int b = 1;
//	
//	if(n==1){
//		cout << a << '/' << b;
//		return 0;
//	}
//	bool AupBdown = false;
//	for(int i=1; i<n; i++){
//		if(a==1){
//			AupBdown = true;
//			if(b%2==1){
//				++b;
//				continue;
//			}
//		}
//		else if(b==1){
//			AupBdown = false;
//			if(a%2==0){
//				++a;
//				continue;
//			}
//		}
//		if(AupBdown){
//			++a;
//			--b;
//		}
//		else{
//			--a;
//			++b;
//		}
//	}
//	cout << a << '/' << b;
//	
//	return 0;
//}
