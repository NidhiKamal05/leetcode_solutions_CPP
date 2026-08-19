
// 3033. MODIFY THE MATRIX

/** T.C. - O(M * N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/modify-the-matrix/solutions/8470362/c-runtime-beats-100-0-ms-by-nidhi_kamal-kr6j/

/* JAVA */
// https://leetcode.com/problems/modify-the-matrix/solutions/8470364/java-easy-solution-runtime-1-ms-beats-99-91vm/

#include<iostream>
#include<vector>

using namespace std ;

vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
	int m = matrix.size(), n = matrix[0].size() ;
    vector<int> maxOfCol(n) ;
    for(int i = 0; i < n; ++i) {
        int maxEl = -1 ;
        for(int j = 0; j < m; ++j) {
            maxEl = max(matrix[j][i], maxEl) ;
        }
        maxOfCol[i] = maxEl ;
    }
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            if(matrix[j][i] == -1) {
                matrix[j][i] = maxOfCol[i] ;
            }
        }
    }
    return matrix ;
}

int main() {
	int n, m, e ;
	vector<vector<int>> matrix, result ;
	
	cout << endl ;
	cout << "  MODIFY THE MATRIX " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter no. of rows, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter no. of columns, m = " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter elements of the matrix......" << endl ;
	for(int i=0; i<n; ++i) {
		cout << "Enter elements of " << i << "th row....." << endl ;
		vector<int> v ;
		for(int j=0; j<m; ++j) {
			cin >> e ;
			v.push_back(e) ;
		}
		matrix.push_back(v) ;	
	}
	
	result = modifiedMatrix(matrix) ;
	
	cout << endl ;
	cout << "Modified Matrix....." << endl ;
	cout << "[ " ;
	for(auto& row : result) {
		cout << "[ " ;
		for(int num : row) {
			cout << num << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}