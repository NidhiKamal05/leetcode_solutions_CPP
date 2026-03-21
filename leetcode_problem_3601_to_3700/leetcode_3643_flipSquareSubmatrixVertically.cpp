
// 3643. FLIP SQUARE SUBMATRIX VERTICALLY

/** T.C. - O(K^2) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/flip-square-submatrix-vertically/solutions/7677481/c-very-easy-simple-solution-matrix-simul-11gs/

/* JAVA */
// https://leetcode.com/problems/flip-square-submatrix-vertically/solutions/7677522/java-solution-0-ms-runtime-beats-100-o1-tr7lv/

#include<iostream>
#include<vector>

using namespace std ;

vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
	int i = x, j = x + k - 1 ;
	while(i < j) {
		for(int col = y; col < y + k; ++col) {
			swap(grid[i][col], grid[j][col]) ;
		}
		++i ;
		--j ;
	}
	return grid ;
}

/*vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
    int top = x, down = x + k - 1 ;
    while(top < down) {
		int a = y, b = y + k - 1 ;
		for(int i=a; i<=b; ++i) {
			swap(grid[top][i], grid[down][i]) ;
		}
		++top ;
		--down ;
	}
	return grid ;
}*/

int main() {
	vector<vector<int>> grid, mat ;
	int e, m, n, x, y, k ;
	
	cout << endl ;
	cout << "  FLIP SQUARE SUBMARIX VERTICALLY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter no. of rows, m = " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter no. of columns, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the 2D array(grid)....." << endl ;
	for(int i=0; i<m; ++i) {
		vector<int> row ;
		cout << endl << "Enter elements of " << i << "th row..." << endl ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
	cout << endl ;
	cout << "Enter starting coordinates of submatrix....." << endl ;
	cout << "x = " ;
	cin >> x ;
	cout << "y = " ;
	cin >> y ;
	
	cout << endl ;
	cout << "Enter size of square submatrix, k = " ;
	cin >> k ;		
	
	mat = reverseSubmatrix(grid, x, y, k) ;
	
	cout << endl ;
	cout << "Result....." << endl ;
	cout << "[ " ;
	for(vector<int>& row : mat) {
		cout << "[ " ;
		for(int& num : row) {
			cout << num << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}