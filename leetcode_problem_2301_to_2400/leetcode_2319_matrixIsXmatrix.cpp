
// 2319. CHECK IF MATRIX IS X-MATRIX

#include<iostream>
#include<vector>

using namespace std ;			

bool checkMatrix(vector<vector<int>> & grid){
	int n = grid.size() ;
	for(int i=0; i<n; ++i){
		for(int j=0; j<(grid.at(i)).size(); ++j){
			if((i == j)||(i == n-1-j)){
				if(((grid.at(i)).at(j)) < 1)
					return false ;
				else
					continue ;
			}
			else{
				if(((grid.at(i)).at(j)) > 0)
					return false ;
				else
					continue ;
			}
		}
	}
	return true ;
}

int main(){
	int l, e ;
	vector<vector<int>> grid{} ;
	bool res ;
	
	cout << endl ;
	cout << "  CHECK IF MATRIX IS X-MATRIX " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the square matrix : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of matrix...." << endl ;
	for(int i=0; i<l; ++i){
		vector<int> row{} ;
		for(int j=0; j<l; ++j){
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
	cout << endl ;
	
	system("pause") ;
	system("cls") ;
	
	cout << endl << "Grid....." << endl ;
	for(int i=0; i<grid.size(); ++i){
		cout << "| " ;
		for(int j=0; j<(grid.at(i)).size(); ++j){
			cout << (grid.at(i)).at(j) << " " ;
		}
		cout << "|" << endl ;
	}
	
	res = checkMatrix(grid) ;
	
	cout << endl ;
	if(res == 1)
		cout << "Grid is an X-Matrix....." << endl ;
	else
		cout << "Grid is not an X-Matrix....." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}