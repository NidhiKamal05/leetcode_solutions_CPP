
// 48. ROTATE IMAGE

/** T.C. - O(N^2) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/rotate-image/solutions/8139279/c-solution-0-ms-runtime-beats-100-by-nid-pgtm/

/* JAVA */
// https://leetcode.com/problems/rotate-image/solutions/8139311/java-runtime-0-ms-beats-100-by-nidhi_kam-ak2t/

#include<iostream>
#include<vector>

using namespace std ;

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size() ;
    for(int i = 0; i < (n + 1) / 2; ++i) {
        for(int j = 0; j < n / 2; ++j) {
            int temp = matrix[i][j] ;
            matrix[i][j] = matrix[n - j - 1][i] ;
            matrix[n - j - 1][i] = matrix[n - i - 1][n - j - 1] ;
            matrix[n - i - 1][n - j - 1] = matrix[j][n - i - 1] ;
            matrix[j][n - i - 1] = temp ;
        }
    }
}

int main() {
	vector<vector<int>> matrix ;
	int n, e ;
	
	cout << endl ;
	cout << "  ROTATE IMAGE " << endl ;
	cout << " ``````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the matrix, n = " ;
	cin >> n ;
	
	cout << endl << "Enter elements of the matrix : " << endl ;
	for(int i=0; i<n; i++) {
		vector<int> row ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		matrix.push_back(row) ;
	}
	
	cout << endl ;
	cout << "Before rotation...." << endl ;
	cout << "[ " ;
	for(vector<int>& row : matrix) {
		cout << "[ " ;
		for(int& val : row) {			
			cout << val << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
    rotate(matrix) ;
	
	cout << endl ;
	cout << "After rotation...." << endl ;
	cout << "[ " ;
	for(vector<int>& row : matrix) {
		cout << "[ " ;
		for(int& val : row) {			
			cout << val << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}