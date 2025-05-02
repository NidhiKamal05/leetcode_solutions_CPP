
// 867. TRANSPOSE MATRIX

#include<iostream>
#include<vector>

using namespace std ;

vector<vector<int>> transpose(vector<vector<int>> & matrix)
{	
	vector<vector<int>> trans ;
	for(int j=0; j<(matrix.at(0)).size(); ++j)
	{
		vector<int> temp{} ;
		for(int i=0; i<matrix.size(); ++i)
		{
			temp.push_back((matrix.at(i)).at(j)) ;
		}
		trans.push_back(temp) ;
	}
	return trans ;
}

int main()
{
	vector<vector<int>> mat ;
	vector<vector<int>> trans ;
	int m, n, e ;
	
	cout << endl ;
	cout << "  TRANSPOSE MATRIX  " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^ " << endl ;	
	
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
	
	trans = transpose(mat) ;
	
	cout << endl ;
	cout << "Transpose Matrix......." << endl ;
	for(int i=0; i<trans.size(); ++i){
		vector<int> t ;
		cout << "| " ;
		for(int j=0; j<(trans.at(i)).size(); ++j){
			cout << (trans.at(i)).at(j) << " " ;
		}
		cout << "|" << endl ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}

	// vector<vector<int>> trans ;
	// for(int i=0; i<matrix.size(); ++i)
		// for(int j=0; j<(matrix.at(i)).size(); ++j)
			// (trans.at(j)).at(i) = (matrix.at(i)).at(j) ;
	// return trans ;