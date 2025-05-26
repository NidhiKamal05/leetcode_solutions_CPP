
// 766. TOEPLITZ MATRIX

#include<iostream>
#include<vector>

using namespace std ;

bool isToeplitzMatrix(vector<vector<int>> & matrix){
	int row = matrix.size() ;
    int col = (matrix[0]).size() ;
    for(int i=0; i<row-1; ++i) {
        for(int j=0; j<col-1; ++j) {
            if(matrix[i][j] != matrix[i+1][j+1]) {
                return false ;
            }
        }
    }
    return true ;
}

int main()
{
	vector<vector<int>> matrix ;
	int m, n, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  TOEPLITZ MATRIX " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^" << endl ;	
	
	cout << endl ;
	cout << "Matrix of m X n...." << endl ;
	cout << "m = " ;
	cin >> m ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of matrix " << m << "X" << n << "......" << endl ;
	for(int i=0; i<m; ++i){
		vector<int> t ;
		for(int j=0; j<n; ++j){
			cin >> e ;
			t.push_back(e) ;
		}
		matrix.push_back(t) ;
	}
	
	system("pause") ;
	system("cls") ;
	
	cout << endl ;
	cout << "Matrix......." << endl ;
	for(int i=0; i<matrix.size(); ++i){
		cout << "| " ;
		for(int j=0; j<(matrix.at(i)).size(); ++j){
			cout << (matrix.at(i)).at(j) << " " ;
		}
		cout << "|" << endl ;
	}
	
	ans = isToeplitzMatrix(matrix) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE....." << endl ;
	else
		cout << "FALSE....." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}