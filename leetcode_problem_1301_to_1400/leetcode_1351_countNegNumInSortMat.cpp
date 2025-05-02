
// 1351. COUNT OF NEGATIVE NUMBERS IN A SORTED MATRIX

#include<iostream>
#include<vector>

using namespace std ;

int countNegatives(vector<vector<int>> & grid)
{
	int count = 0 ;
	for(int i=0; i<grid.size(); ++i){
		for(int j=((grid.at(i)).size())-1; j>=0; --j){
			if((grid.at(i)).at(j) < 0)
				++count ;
			else 
				break ;
		}
	}
	return count ;
}

int main()
{
	vector<vector<int>> mat ;
	int m, n, e ;
	
	cout << endl ;
	cout << "  COUNT OF NEGATIVE NUMBERS IN A SORTED MATRIX  " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ " << endl ;	
	
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
		mat.push_back(t) ;
	}
	
	system("pause") ;
	system("cls") ;
	
	cout << endl ;
	cout << "Matrix......." << endl ;
	for(int i=0; i<mat.size(); ++i){
		vector<int> t ;
		cout << "| " ;
		for(int j=0; j<(mat.at(i)).size(); ++j){
			cout << (mat.at(i)).at(j) << " " ;
		}
		cout << "|" << endl ;
	}
	
	e = countNegatives(mat) ;
	
	cout << endl ;
	cout << "Count of negative numbers = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}