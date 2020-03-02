// 5430

#include <iostream>
#include <deque>
using namespace std;
int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string str, dset;
		int m;
		cin >> str >> m >> dset;

		// dq에 리스트 저장. 
		deque<int> dq;
		string temp = "";
		for(int j=1; j < dset.length()-1; j++){
			if(dset.at(j) != ',') temp += dset.at(j);
			if(dset.at(j+1) == ',' || dset.at(j+1) == ']'){
				dq.push_back(atoi(temp.c_str()));
				temp = "";
			}
		}
		
		// R/D에 따라서 처리. 
		bool fromStart = true;
		bool isError = false;
		for(int j=0; j<str.size(); j++){
			if(str.at(j) == 'R'){
				if(fromStart) fromStart = false;
				else fromStart = true;
			} else {
				if(dq.size()==0){
					isError = true;
					break;
				}
				if(fromStart) dq.pop_front();
				else dq.pop_back();
				
			}
		}
		
		// 출력. 
		if(isError) cout << "error\n";
		else {
			cout << '[';
			while(dq.size()>0){
				if(fromStart){
					cout << dq.front();
					dq.pop_front();
				} else {
					cout << dq.back();
					dq.pop_back();
				}
				if(dq.size() != 0) cout << ',';
			}
			cout << "]\n";
		}
		
	}
	
	return 0;
}
