
// 3142. CHECK IF GRID SATISFIES CONDITIONS

#include<iostream>
#include<vector>

using namespace std ;

bool satisfiesConditions(vector<vector<int>> & grid){
	int row = grid.size() ;
	int col = (grid.at(0)).size() ;
	for(int i=0; i<row; ++i){
		for(int j=0; j<col; ++j){
			if((i+1 < row)&&(grid[i][j] != grid[i+1][j]))
				return false ;
			if((j+1 < col)&&(grid[i][j] == grid[i][j+1]))
				return false ;
		}
	}
	return true ;
}

int main()
{
	vector<vector<int>> grid ;
	int m, n, e ;
	bool result ;
	
	cout << endl ;
	cout << "  CHECK IF GRID SATISFIES CONDITIONS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;	
	
	cout << endl ;
	cout << "Grid of m X n...." << endl ;
	cout << "m = " ;
	cin >> m ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of grid " << m << "X" << n << "......" << endl ;
	for(int i=0; i<m; ++i){
		vector<int> t ;
		for(int j=0; j<n; ++j){
			cin >> e ;
			t.push_back(e) ;
		}
		grid.push_back(t) ;
	}
	
	system("pause") ;
	system("cls") ;
	
	cout << endl ;
	cout << "Matrix......." << endl ;
	for(int i=0; i<grid.size(); ++i){
		cout << "| " ;
		for(int j=0; j<(grid.at(i)).size(); ++j){
			cout << (grid.at(i)).at(j) << " " ;
		}
		cout << "|" << endl ;
	}
	
	result = satisfiesConditions(grid) ;
	
	cout << endl ;
	if(result == 1)
		cout << "TRUE....." << endl ;
	else
		cout << "FALSE....." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}