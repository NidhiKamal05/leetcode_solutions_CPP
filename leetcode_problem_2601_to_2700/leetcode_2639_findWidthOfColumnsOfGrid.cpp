
// 2639. FIND THE WIDTH OF COLUMNS OF A GRID

/** T.C. - O(M * N * log10V) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/find-the-width-of-columns-of-a-grid/solutions/8475893/c-0-ms-runtime-beats-100-memory-beats-90-a2qj/

/* JAVA */
// https://leetcode.com/problems/find-the-width-of-columns-of-a-grid/solutions/8475899/java-solution-beats-9561-matrix-math-by-dd749/

#include<iostream>
#include<vector>

using namespace std ;

int count(int num) {
    int cnt = num <= 0 ? 1 : 0 ;
    while(num) {
        ++cnt ;
        num /= 10 ;
    }
    return cnt ;
}

vector<int> findColumnWidth(vector<vector<int>>& grid) {
    vector<int> ans ;
    int m = grid.size(), n = grid[0].size() ;
    for(int i = 0; i < n; ++i) {
        int width = 0 ;
        for(int j = 0; j < m; ++j) {
            width = max(width, count(grid[j][i])) ;
        }
        ans.push_back(width) ;
    }
    return ans ;
}
	
int main() {
	int m, n, e ;
	vector<vector<int>> grid ;
	vector<int> width ;
	
	cout << endl ;
	cout << "  FIND THE WIDTH OF COLUMNS OF A GRID " << endl ;
	cout << " *************************************" << endl ;
	
	cout << endl ;
	cout << "Enter number of rows, m = " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter number of columns, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the 2-D array....." << endl ;
	for(int i=0; i<m; ++i) {
		vector<int> row ;
		cout << "Enter elements in the " << i << "th row...." << endl ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
	width = findColumnWidth(grid) ;
	
	cout << endl ;
	cout << "Column Width....." << endl ;
	cout << "[ " ;
	for(int w : width) {
		cout << w << " " ;
	}
	cout << "]" ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}