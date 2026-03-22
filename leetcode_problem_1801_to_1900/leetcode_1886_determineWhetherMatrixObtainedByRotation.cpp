
// 1886. DETERMINE WHETHER MATRIX OBTAINED BY ROTATION

/** T.C. - O(N^2) & S.C. - O(N^2) **/

/* C++ */
// https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/solutions/7680723/c-solution-0-ms-runtime-beats-100-matrix-boua/

/* JAVA */
// https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/solutions/7680749/java-0-ms-runtime-beats-100-memory-beats-vbcv/

#include<iostream>
#include<vector>

using namespace std ;

bool isEqual(vector<vector<int>>& mat, vector<vector<int>>& target) {
    return mat == target ;
}

vector<vector<int>> rotate_90(vector<vector<int>>& mat) {
    int n = mat.size() ;
    vector<vector<int>> res(n, vector<int>(n)) ;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            res[i][j] = mat[n - j - 1][i] ;
        }
    }
    return res ;
}

bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    for(int k = 0; k < 4; ++k) {
        if(isEqual(mat, target)) {
            return true ;
        }
        mat = rotate_90(mat) ;
    }
    return false ;
}

int main() {	
	vector<vector<int>> mat, target ;
	int n, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  DETERMINE WHETHER MATRIX OBTAINED BY ROTATION " << endl ;
	cout << " ```````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the matrix, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the matrix : " << endl ;
	for(int i=0; i<n; i++) {
		vector<int> row ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		mat.push_back(row) ;
	}
	
	cout << endl ;
	cout << "Enter elements of the target matrix : " << endl ;
	for(int i=0; i<n; i++) {
		vector<int> row ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		target.push_back(row) ;
	}
	
    ans = findRotation(mat, target) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    int n = mat.size() ;
    if(isEqual(mat, target)) {
        return true ;
    }
    vector<vector<int>> mat_90(n, vector<int>(n)) ;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            mat_90[i][j] = mat[n - j - 1][i] ;
        }
    }
    if(isEqual(mat_90, target)) {
        return true ;
    }
    vector<vector<int>> mat_180(n, vector<int>(n)) ;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            mat_180[i][j] = mat_90[n - j - 1][i] ;
        }
    }
    if(isEqual(mat_180, target)) {
        return true ;
    }
    vector<vector<int>> mat_270(n, vector<int>(n)) ;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            mat_270[i][j] = mat_180[n - j - 1][i] ;
        }
    }
    if(isEqual(mat_270, target)) {
        return true ;
    }
    return false ;
}*/



            // mat_180[i][j] = mat_90[j][i] ;
            // mat_270[i][j] = mat[j][n - i - 1] ;