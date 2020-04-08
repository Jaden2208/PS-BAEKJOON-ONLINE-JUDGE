// 16235

#include <iostream>
#include <deque>
using namespace std;
int main(){
	
	int n, m, k;
	cin >> n >> m >> k;
	
	int land[n][n];
	int A[n][n];
	
	deque<int> tree[n][n];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> A[i][j];
			land[i][j] = 5;
		}
	}
	
	// 나무 심기. 
	for(int i=0; i<m; i++){
		int x, y, z;
		cin >> x >> y >> z;
		tree[x-1][y-1].push_back(z);
	}
	
	while(k>0){
		
		// 봄: 양분 먹기. 여름: 죽은 나무 -> 양분. 
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				if(tree[i][j].empty()) continue;
				int treeSize = tree[i][j].size();
				int deads = 0;
				for(int l=0; l<treeSize; l++){
					if(land[i][j] >= tree[i][j].back()){
						land[i][j] -= tree[i][j].back();
						tree[i][j].push_front(tree[i][j].back()+1);
					} else{
						deads += (tree[i][j].back()/2);
						
					}
					tree[i][j].pop_back();
				}
				land[i][j] += deads;
			}
		}
		
		// 가을: 나무 번식. 겨울: 양분 추가. 
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				land[i][j] += A[i][j];
				if(tree[i][j].empty()) continue;
				for(int l=0; l<tree[i][j].size(); l++){
					int last = tree[i][j].back();
					if(last%5 == 0){
						if(i-1 >= 0) tree[i-1][j].push_back(1);
						if(j-1 >= 0) tree[i][j-1].push_back(1);
						if(i+1 < n) tree[i+1][j].push_back(1);
						if(j+1 < n) tree[i][j+1].push_back(1);
						if(i-1 >= 0 && j-1 >= 0) tree[i-1][j-1].push_back(1);
						if(i-1 >= 0 && j+1 < n) tree[i-1][j+1].push_back(1);
						if(i+1 < n && j-1 >= 0) tree[i+1][j-1].push_back(1);
						if(i+1 < n && j+1 < n) tree[i+1][j+1].push_back(1);
					}
					
					tree[i][j].push_front(last);
					tree[i][j].pop_back();
				}
				
			}
		} 
		
		--k;
	}
	
	int result = 0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			result += tree[i][j].size();
		}
	}
	
	cout << result;
	
	return 0;
}
