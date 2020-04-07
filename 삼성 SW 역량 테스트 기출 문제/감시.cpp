// 15683 ½ÇÆÐ ^^ 

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int office[8][8];
vector<pair<int, pair<int, int>>> cams;
int minZeroCnt = 64;

void drawFilled() {
	cout << "drawFilled()\n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << office[i][j] << ' ';
		}
		cout << '\n';
	}
}

void fillTop(int x, int y, int num) {
	//cout << "fillTop()\n";
	for (int i = x - 1; i >= 0; i--) {
		if (office[i][y] == 6) return;
		if ((office[i][y] > 0 && office[i][y] < 6) || office[i][y] == 8) continue;
		office[i][y] = num;
	}
	//drawFilled();
}
void fillRight(int x, int y, int num) {
	//cout << "fillRight()\n";
	for (int j = y + 1; j < m; j++) {
		if (office[x][j] == 6) return;
		if ((office[x][j] > 0 && office[x][j] < 6) || office[x][j] == 8) continue;
		office[x][j] = num;
	}
	//drawFilled();
}
void fillBottom(int x, int y, int num) {
	//cout << "fillBottom()\n";
	for (int i = x + 1; i < n; i++) {
		if (office[i][y] == 6) return;
		if ((office[i][y] > 0 && office[i][y] < 6) || office[i][y] == 8) continue;
		office[i][y] = num;
	}
	//drawFilled();
}
void fillLeft(int x, int y, int num) {
	//cout << "fillLeft()\n";
	for (int j = y - 1; j >= 0; j--) {
		if (office[x][j] == 6) return;
		if ((office[x][j] > 0 && office[x][j] < 6) || office[x][j] == 8) continue;
		office[x][j] = num;
	}
	//drawFilled();
}

void clearTop(int x, int y) {
	for (int i = x - 1; i >= 0; i--) {
		if (office[i][y] == 6) return;
		if (office[i][y] > 0 && office[i][y] < 6) continue;
		if (office[i][y] == 9) office[i][y] = 0;
	}
}
void clearRight(int x, int y) {
	for (int j = y + 1; j < m; j++) {
		if (office[x][j] == 6) return;
		if (office[x][j] > 0 && office[x][j] < 6) continue;
		if (office[x][j] == 9) office[x][j] = 0;
	}
}
void clearBottom(int x, int y) {
	for (int i = x + 1; i < n; i++) {
		if (office[i][y] == 6) return;
		if (office[i][y] > 0 && office[i][y] < 6) continue;
		if (office[i][y] == 9) office[i][y] = 0;
	}
}
void clearLeft(int x, int y) {
	for (int j = y - 1; j >= 0; j--) {
		if (office[x][j] == 6) return;
		if (office[x][j] > 0 && office[x][j] < 6) continue;
		if (office[x][j] == 9) office[x][j] = 0;
	}
}

int countZero() {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (office[i][j] == 0) {
				++cnt;
			}
		}
	}
	return cnt;
}

void dfs(int n) {
//		cout << "dfs(" << n << ")\n";
	if (n >= cams.size()) {
		cout << "countZro : " << countZero() << '\n';
		drawFilled();
		
//		cout << "countZro : " << countZero() << '\n';
//		drawFilled();
		minZeroCnt = min(minZeroCnt, countZero());
		if(minZeroCnt == 3){
			return;
		}
		return;
	}

	int cam = cams[n].first;
	int x = cams[n].second.first;
	int y = cams[n].second.second;

	if (cam == 1) {
		for (int i = 0; i < 4; i++) {
			//			cout << "i : " << i << '\n';
			if (i == 0) fillTop(x, y, 9);
			else if (i == 1) fillRight(x, y, 9);
			else if (i == 2) fillBottom(x, y, 9);
			else fillLeft(x, y, 9);
			dfs(n + 1);
			if (i == 0) clearTop(x, y);
			else if (i == 1) clearRight(x, y);
			else if (i == 2) clearBottom(x, y);
			else clearLeft(x, y);
		}
	}
	else if (cam == 2) {
		for (int i = 0; i < 2; i++) {
			if (i == 0) {
				fillTop(x, y, 9);
				fillBottom(x, y, 9);
			}
			else {
				fillLeft(x, y, 9);
				fillRight(x, y, 9);
			}
			dfs(n + 1);
			if (i == 0) {
				clearTop(x, y);
				clearBottom(x, y);
			}
			else {
				clearLeft(x, y);
				clearRight(x, y);
			}
		}
	}
	else if (cam == 3) {
		for (int i = 0; i < 4; i++) {
			if (i == 0) {
				fillTop(x, y, 9);
				fillRight(x, y, 9);
			}
			else if (i == 1) {
				fillRight(x, y, 9);
				fillBottom(x, y, 9);
			}
			else if (i == 2) {
				fillBottom(x, y, 9);
				fillLeft(x, y, 9);
			}
			else {
				fillLeft(x, y, 9);
				fillTop(x, y, 9);
			}
			dfs(n + 1);
			if (i == 0) {
				clearTop(x, y);
				clearRight(x, y);
			}
			else if (i == 1) {
				clearRight(x, y);
				clearBottom(x, y);
			}
			else if (i == 2) {
				clearBottom(x, y);
				clearLeft(x, y);
			}
			else {
				clearLeft(x, y);
				clearTop(x, y);
			}
		}
	}
	else if (cam == 4) {
		for (int i = 0; i < 4; i++) {
			if (i == 0) {
				fillTop(x, y, 9);
				fillRight(x, y, 9);
				fillBottom(x, y, 9);
			}
			else if (i == 1) {
				fillRight(x, y, 9);
				fillBottom(x, y, 9);
				fillLeft(x, y, 9);
			}
			else if (i == 2) {
				fillBottom(x, y, 9);
				fillLeft(x, y, 9);
				fillTop(x, y, 9);
			}
			else {
				fillLeft(x, y, 9);
				fillTop(x, y, 9);
				fillRight(x, y, 9);
			}
			dfs(n + 1);
			if (i == 0) {
				clearTop(x, y);
				clearRight(x, y);
				clearBottom(x, y);
			}
			else if (i == 1) {
				clearRight(x, y);
				clearBottom(x, y);
				clearLeft(x, y);
			}
			else if (i == 2) {
				clearBottom(x, y);
				clearLeft(x, y);
				clearTop(x, y);
			}
			else {
				clearLeft(x, y);
				clearTop(x, y);
				clearRight(x, y);
			}
		}
	} else {
		fillTop(x, y, 8);
		fillRight(x, y, 8);
		fillBottom(x, y, 8);
		fillLeft(x, y, 8);
		dfs(n + 1);
	}
}

int main() {

//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> office[i][j];
//			if (office[i][j] == 5) {
//				fillTop(i, j, 8);
//				fillRight(i, j, 8);
//				fillBottom(i, j, 8);
//				fillLeft(i, j, 8);
//			}
//			else 
			if (office[i][j] > 0 && office[i][j] < 6) {
				cams.push_back(pair<int, pair<int, int>>(office[i][j], pair<int, int>(i, j)));
			}
		}
	}

//	drawFilled();

//	return 0;


	dfs(0);

	cout << minZeroCnt;

	return 0;
}
