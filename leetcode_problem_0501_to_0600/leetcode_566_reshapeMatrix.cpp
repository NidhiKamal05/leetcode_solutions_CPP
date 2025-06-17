
// 566. RESHAPE THE MATRIX

#include<iostream>
#include<vector>

using namespace std ;

vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

    // initialize the resultant reshaped matrix
    vector<vector<int>> reshaped(r, vector<int>(c)) ;
    
    int m = mat.size() ;
    int n = mat[0].size() ;

    // check reshaping is possible or not
    // if not then return mat
    if((m*n != r*c) || ((m==r)&&(n==c))) {
        return mat ;
    }

    // pointers to set the position to fill the reshaped matrix
    int x = 0, y = 0 ;

    // fill the reshaped matrix
    for(int i=0; i<m; ++i) {

        for(int j=0; j<n; ++j) {

            reshaped[x][y++] = mat[i][j] ;

            // if current row is filled move to the next
            if(y == c) {
                y = 0 ;
                ++x ;
            }

        }

    }

    // return reshaped matrix
    return reshaped ;

}

int main(){
	vector<int> row ;
	vector<vector<int>> mat ;
	vector<vector<int>> reshaped ;
	int e, m, n, r, c ;
	
	cout << endl ;
	cout << "  RESHAPE THE MATRIX " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the matrix..... " << endl ;
	cout << "m = " ;
	cin >> m ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl << "Enter elements of the matrix...." << endl ;
	for(int i=0; i<m; ++i){
		for(int j=0; j<n; ++j){
			cin >> e ;
			row.push_back(e) ;
		}
		mat.push_back(row) ;
	}
	
	cout << endl ;
	cout << "Enter no. of rows and colums of reshape matrix....\n" ;
	cout << "r = " ;
	cin >> r ;
	cout << "c = " ;
	cin >> c ;
	
    reshaped = matrixReshape(mat, r, c) ;
	
	cout << endl << "Reshaped matrix...." << endl ;
    for(int i=0; i<reshaped.size(); ++i){
		for(int j=0; j<reshaped[i].size(); ++j){
			cout << " " << reshaped[i][j] << " " ;
		}
		cout << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}