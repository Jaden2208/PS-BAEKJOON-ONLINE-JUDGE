// 2580

#include <iostream>
using namespace std;

int sudoku[9][9];
bool col[9][10];
bool row[9][10];
bool square[9][10];

void printAll(){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cout << sudoku[i][j] << ' ';
		}
		cout << '\n';
	}
}

int change2SquareIdx(int x, int y){
	return (x / 3) * 3 + y / 3;
}
void DFS(int cnt){
	if(cnt == 81){
		printAll();
		exit(0); // 에러 없이 정상 종료  
	}
	int x = cnt / 9;
	int y = cnt % 9;
	if(sudoku[x][y]){
		DFS(cnt+1);
		return;
	}
	for(int k=1; k<=9; k++){
		int t = change2SquareIdx(x, y);
		if(!col[y][k] && !row[x][k] && !square[t][k]){
			sudoku[x][y] = k;
			col[y][k] = true;
			row[x][k] = true;
			square[t][k] = true;
			DFS(cnt + 1);
			sudoku[x][y] = 0;
			col[y][k] = false;
			row[x][k] = false;
			square[t][k] = false;
		}
	}
}

int main(){
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			cin >> sudoku[i][j];
			if(sudoku[i][j]){
				col[j][sudoku[i][j]] = true;
				row[i][sudoku[i][j]] = true;
				square[change2SquareIdx(i, j)][sudoku[i][j]] = true;
			}
		}
	}
	
	DFS(0);
	
	return 0;
}
