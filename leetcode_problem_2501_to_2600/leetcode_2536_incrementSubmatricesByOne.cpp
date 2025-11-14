
// 2536. INCREMENT SUBMATRICES BY ONE

#include<iostream>
#include<vector>

using namespace std ;

vector<vector<int>> rangeAddqueries(int n, vector<vector<int>>& queries) {
	vector<vector<int>> mat(n, vector<int>(n, 0)) ;
	for(int i=0; i<queries.size(); ++i) {
		vector<int> v = queries[i] ;
		for(int x=v[0]; x<=v[2]; ++x) {
			for(int y=v[1]; y<=v[3]; ++y) {
				mat[x][y] += 1 ; 
			}
		}
	}
	return mat ;
}

int main() {
	vector<vector<int>> queries, mat ;
	int r, e, n ;
	
	cout << endl ;
	cout << "  INCREMENT SUBMATRICES BY ONE " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of matrix, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter no. of rows : " ;
	cin >> r ;
	
	cout << endl ;
	cout << "Enter elements of the 2D array(queries)....." << endl ;
	for(int i=0; i<r; ++i) {
		vector<int> row ;
		cout << endl << "Enter elements of " << i << "th row..." << endl ;
		for(int j=0; j<4; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		queries.push_back(row) ;
	}
	
	mat = rangeAddqueries(n, queries) ;
	
	cout << endl ;
	cout << "Result....." << endl ;
	cout << "[ " ;
	for(vector<int>& row : mat) {
		cout << "[ " ;
		for(int& num : row) {
			cout << num << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}