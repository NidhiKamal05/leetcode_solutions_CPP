
// 73. SET MATRIX ZEROES

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public void setZeroes(int[][] matrix) {
        int m = matrix.length, n = matrix[0].length ;
        Set<Integer> row = new HashSet<>() ;
        Set<Integer> col = new HashSet<>() ;
        for(int i=0; i<m; ++i) {
            for(int j=0; j<n; ++j) {
                if(matrix[i][j] == 0) {
                    row.add(i) ;
                    col.add(j) ;
                }
            }
        }
        for(int i=0; i<m; ++i) {
            if(row.contains(i)) {
                for(int j=0; j<n; ++j) {
                    if(matrix[i][j] != 0) {
                        matrix[i][j] = 0 ;
                    }
                }
            }
        }
        for(int j=0; j<n; ++j) {
            if(col.contains(j)) {
                for(int i=0; i<m; ++i) {
                    if(matrix[i][j] != 0) {
                        matrix[i][j] = 0 ;
                    }
                }
            }
        }
    }
}*/

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size() ;
    unordered_set<int> row, col ;
    for(int i=0; i<m; ++i) {
        for(int j=0; j<n; ++j) {
            if(matrix[i][j] == 0) {
                row.insert(i) ;
                col.insert(j) ;
            }
        }
    }
    for(int i=0; i<m; ++i) {
        if(row.find(i) != row.end()) {
            for(int j=0; j<n; ++j) {
                if(matrix[i][j] != 0) {
                    matrix[i][j] = 0 ;
                }
            }
        }
    }
    for(int j=0; j<n; ++j) {
        if(col.find(j) != col.end()) {
            for(int i=0; i<m; ++i) {
                if(matrix[i][j] != 0) {
                    matrix[i][j] = 0 ;
                }
            }
        }
    }
}

int main() {
	vector<vector<int>> matrix ;
	int m, n, e ;
	
	cout << endl ;
	cout << "  SET MATRIX ZEROES " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^"<< endl ;
	
	cout << "Enter no. of rows : " ;
	cin >> m ;
	
	cout << "Enter no. of columns : " ;
	cin >> n ;
	
	cout << endl << "Enter elements of 2D array......." << endl ;
	for(int i=0; i<m; ++i) {
		vector<int> v ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			v.push_back(e) ;
		}
		matrix.push_back(v) ;
	}
	
	cout << endl ;
	cout << "Before...." << endl ;
	for(int i=0; i<m; ++i) {
		cout << "| " ;
		for(int j=0; j<n; ++j) {
			cout << matrix[i][j] << " " ;
		}
		cout << "|"  << endl ;
	}
	
	setZeroes(matrix) ;
	
	cout << endl ;
	cout << "Set Zeroes...." << endl ;
	for(int i=0; i<m; ++i) {
		cout << "| " ;
		for(int j=0; j<n; ++j) {
			cout << matrix[i][j] << " " ;
		}
		cout << "|"  << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}