
// 3417. ZIGZAG GRID TRAVERSAL WITH SKIP

/** T.C. - O(M * N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/zigzag-grid-traversal-with-skip/solutions/8523294/c-easy-solution-matrix-parity-check-by-n-l28h/

/* JAVA */
// https://leetcode.com/problems/zigzag-grid-traversal-with-skip/solutions/8523287/java-solution-1-ms-runtime-beats-100-by-nifo4/

#include<iostream>
#include<vector>

using namespace std ;

vector<int> zigzagTraversal(vector<vector<int>>& grid) {
    vector<int> ans ;
    int m = grid.size(), n = grid[0].size() ;
    for(int i = 0; i < m; ++i) {
        if(i % 2 == 0) {
            for(int j = 0; j < n; ++j) {
                if((i + j) % 2 == 0) {
                    ans.push_back(grid[i][j]) ;
                }
            }
        }
        else {
            for(int j = n - 1; j >= 0; --j) {
                if((i + j) % 2 == 0) {
                    ans.push_back(grid[i][j]) ;
                }
            }
        }
    }
    return ans ;
}

int main() {	
	vector<vector<int>> grid ;
	vector<int> res ;
	int m, n, e ;
	
	cout << endl ;
	cout << "  ZIGZAG GRID TRAVERSAL WITH SKIP " << endl ;
	cout << " `````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter row: " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter col: " ;
	cin >> n ;
	
	cout << endl << "Enter elements of the grid......" << endl ;
	for(int i = 0; i < m; i++) {
		vector<int> row ;
		for(int j = 0; j < n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
    res = zigzagTraversal(grid) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(int& r : res) {
		cout << r << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}