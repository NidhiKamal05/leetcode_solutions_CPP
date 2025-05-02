
// 1572. MATRIX DIAGONAL SUM

#include<iostream>
#include<vector>

using namespace std ;

int diagoanlSum(vector<vector<int>> & mat){
	int sum = 0 ;
	int n = mat.size() ;
	for(int i=0; i<n; ++i)
		for(int j=0; j<(mat.at(i)).size(); ++j)
			if((i == j)||(i == n-1-j))
				sum += ((mat.at(i)).at(j)) ;
	return sum ;
}

int main(){
	int l, e ;
	vector<vector<int>> mat{} ;
	
	cout << endl ;
	cout << "  MATRIX DIAGONAL SUM " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
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
		mat.push_back(row) ;
	}
	
	cout << endl ;
	
	system("pause") ;
	system("cls") ;
	
	cout << endl << "Matrix....." << endl ;
	for(int i=0; i<mat.size(); ++i){
		cout << "| " ;
		for(int j=0; j<(mat.at(i)).size(); ++j){
			cout << (mat.at(i)).at(j) << " " ;
		}
		cout << "|" << endl ;
	}
	
	l = diagoanlSum(mat) ;
	
	cout << endl ;
	cout << "Diagonal Sum = " << l << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}