
// 1861. ROTATING THE BOX

/** T.C. - O(M * N^2) & S.C. - O(M * N) **/

/* C++ */
// https://leetcode.com/problems/rotating-the-box/solutions/8153774/c-solution-beats-9017-brute-force-approa-m8ns/

/* JAVA */
// https://leetcode.com/problems/rotating-the-box/solutions/8154531/java-solution-by-nidhi_kamal-aito/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
	int m = boxGrid.size(), n = boxGrid[0].size() ;
	vector<vector<char>> res(n, vector<char>(m)) ;
	for(int j = 0; j < n; ++j) {
		for(int i = 0; i < m; ++i) {
			res[j][i] = boxGrid[i][j] ;
		}
		reverse(res[j].begin(), res[j].end()) ;
	}
	for(int j = 0; j < m; ++j) {
		for(int i = n - 1; i >= 0; --i) {
			if(res[i][j] == '.') {
				int rowWithStone = -1 ;
				for(int k = i - 1; k >= 0; --k) {
					if(res[k][j] == '*') {
						break ;
					}
					if(res[k][j] == '#') {
						rowWithStone = k ;
						break ;
					}
				}
				if(rowWithStone == -1) {
					continue ;
				}
				else {
					swap(res[i][j], res[rowWithStone][j]) ;
				}
			}
		}
	}
	return res ;
}

int main() {
	vector<vector<char>> boxGrid, res ;
	int m, n ;
	char c ;
	
	cout << endl ;
	cout << "  ROTATING THE BOX " << endl ;
	cout << " ``````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter row: " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter col: " ;
	cin >> n ;
	
	cout << endl << "Enter elements('#', '.', & '*') of the matrix : " << endl ;
	for(int i = 0; i < m; i++) {
		vector<char> row ;
		for(int j = 0; j < n; ++j) {
			cin >> c ;
			row.push_back(c) ;
		}
		boxGrid.push_back(row) ;
	}
	
    res = rotateTheBox(boxGrid) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(vector<char>& row : res) {
		cout << "[ " ;
		for(char& r : row) {			
			cout << r << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}