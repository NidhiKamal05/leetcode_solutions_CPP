
// 1260. SHIFT 2D GRID

/** T.C. - O(M * N) & S.C. - O(M * N) **/

/* C++ */
// https://leetcode.com/problems/shift-2d-grid/solutions/8409445/c-solution-by-nidhi_kamal-ptwu/

/* JAVA */
// https://leetcode.com/problems/shift-2d-grid/solutions/8409706/java-solution-beats-9218-matrix-by-nidhi-i5q4/

#include<iostream>
#include<vector>

using namespace std ;

vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
    int m = grid.size(), n = grid[0].size() ;
    vector<int> arr ;      
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            arr.push_back(grid[i][j]) ;
        }
    }
    // for(int e : arr)
        // cout << e << "-" ;
    int len = m * n, x = k % len ;
    int idx = len - x ;
    // cout << "\nx = " << x << ", idx = " << idx << endl ;
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(idx == len) {
                idx = 0 ;
            }
            // cout << arr[idx] << " " ;
            grid[i][j] = arr[idx++] ;
        }
    }
    return grid ;
}

int main() {
	vector<vector<int>> grid, result ;
	int m, n, e, k ;
	
	cout << endl ;
	cout << "  SHIFT 2D GRID " << endl ;
	cout << " ```````````````" << endl ;
	
	cout << endl ;
	cout << "Enter row: " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter col: " ;
	cin >> n ;
	
	cout << endl << "Enter elements of the grid...." << endl ;
	for(int i=0; i < m; i++) {
		vector<int> row ;
		for(int j = 0; j < n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
    result = shiftGrid(grid, k) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(vector<int>& res : result) {
		cout << "[ " ;
		for(int& r : res) {			
			cout << r << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}