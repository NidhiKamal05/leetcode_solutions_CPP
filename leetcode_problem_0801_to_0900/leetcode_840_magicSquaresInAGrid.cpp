
// 840. MAGIC SQUARES IN A GRID

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    private boolean isMagicSquare(int m, int n, int[][] grid) {
        Set<Integer> seen = new HashSet<>() ;
        for(int i=m; i<m+3; ++i) {
            for(int j=n; j<n+3; ++j) {
                int num = grid[i][j] ;
                if(num < 1 || num > 9 || seen.contains(num)) {
                    return false ;
                }
                seen.add(num) ;
            }
        }
        int diagonal1 = grid[m][n] + grid[m+1][n+1] + grid[m+2][n+2] ;
        int diagonal2 = grid[m][n+2] + grid[m+1][n+1] + grid[m+2][n] ;
        if(diagonal1 != diagonal2) {
            return false ;
        }
        int row1 = grid[m][n] + grid[m][n+1] + grid[m][n+2] ;
        int row2 = grid[m+1][n] + grid[m+1][n+1] + grid[m+1][n+2] ;
        int row3 = grid[m+2][n] + grid[m+2][n+1] + grid[m+2][n+2] ;
        if(row1 != diagonal1 || row2 != diagonal1 || row3 != diagonal1) {
            return false ;
        }
        int col1 = grid[m][n] + grid[m+1][n] + grid[m+2][n] ;
        int col2 = grid[m][n+1] + grid[m+1][n+1] + grid[m+2][n+1] ;
        int col3 = grid[m][n+2] + grid[m+1][n+2] + grid[m+2][n+2] ;	
        if(col1 != diagonal1 || col2 != diagonal1 || col3 != diagonal1) {
            return false ;
        }
        return true ;
    }

    public int numMagicSquaresInside(int[][] grid) {
        int cnt = 0 ;
        int m = grid.length, n = grid[0].length ;
        for(int i=0; i<m-2; ++i) {
            for(int j=0; j<n-2; ++j) {
                if(isMagicSquare(i, j, grid)) {
                    ++cnt ;
                }
            }
        }
        return cnt ;
    }
}*/

bool isMagicSquare(int m, int n, vector<vector<int>>& grid) {
    unordered_set<int> seen ;
    for(int i=m; i<m+3; ++i) {
        for(int j=n; j<n+3; ++j) {
            int num = grid[i][j] ;
            if(num < 1 || num > 9 || seen.count(num)) {
                return false ;
            }
            seen.insert(num) ;
        }
    }
    int diagonal1 = grid[m][n] + grid[m+1][n+1] + grid[m+2][n+2] ;
    int diagonal2 = grid[m][n+2] + grid[m+1][n+1] + grid[m+2][n] ;
    if(diagonal1 != diagonal2) {
        return false ;
    }
    int row1 = grid[m][n] + grid[m][n+1] + grid[m][n+2] ;
    int row2 = grid[m+1][n] + grid[m+1][n+1] + grid[m+1][n+2] ;
    int row3 = grid[m+2][n] + grid[m+2][n+1] + grid[m+2][n+2] ;
    if(row1 != diagonal1 || row2 != diagonal1 || row3 != diagonal1) {
        return false ;
    }
    int col1 = grid[m][n] + grid[m+1][n] + grid[m+2][n] ;
    int col2 = grid[m][n+1] + grid[m+1][n+1] + grid[m+2][n+1] ;
    int col3 = grid[m][n+2] + grid[m+1][n+2] + grid[m+2][n+2] ;	
    if(col1 != diagonal1 || col2 != diagonal1 || col3 != diagonal1) {
        return false ;
    }
    return true ;
}

int numMagicSquaresInside(vector<vector<int>>& grid) {
	int cnt = 0 ;
	int m = grid.size(), n = grid[0].size() ;
	for(int i=0; i<m-2; ++i) {
		for(int j=0; j<n-2; ++j) {
			if(isMagicSquare(i, j, grid)) {
				++cnt ;
			}
		}
	}
	return cnt ;
}

int main() {
	vector<vector<int>> grid ;
	int rows, cols, e ;
	
	cout << endl ;
	cout << "  MAGIC SQUARES IN A GRID " << endl ;
	cout << " `````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter no. of rows, rows = " ;
	cin >> rows ;
	
	cout << endl ;
	cout << "Enter no. of columns, cols = " ;
	cin >> cols ;
	
	cout << endl ;
	cout << "Enter elements in a " << rows << "X" << cols << " grid....." << endl ;
	for(int i=0; i<rows; ++i) {
		cout << endl ;
		cout << "Enter elements in a " << i << "th" << " row....." << endl ;
		vector<int> row ;
		for(int j=0; j<cols; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
	e = numMagicSquaresInside(grid) ;
	
	cout << endl ;
	cout << "No. of magic squares = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}