
// 378. Kth SMALLEST ELEMENT IN A SORTED MATRIX

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	int t ;
	for(int i=0; i<v.size()-1; ++i)	{
		for(int j=v.size()-1; j>i; --j){
			if(v.at(j) < v.at(j-1)){
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
}

int kthSmallest(vector<vector<int>> & matrix, int k){
	vector<int> temp{} ;
	for(int i=0; i<matrix.size(); ++i){
		for(int j=0; j<((matrix.at(i)).size()); ++j){
			temp.push_back((matrix.at(i)).at(j)) ;
		}
	}
	// sort(temp.begin(), temp.end()) ;
	Sort(temp) ;
	int i = k-1 ;	
	return temp.at(i) ;	
}

int main()
{
	vector<vector<int>> matrix ;
	int n, e, k ;
	
	cout << endl ;
	cout << "  Kth SMALLEST ELEMENT IN A SORTED MATRIX " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;	
	
	cout << endl ;
	cout << "Enter row/column of matrix...." << endl ; 
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of matrix " << n << "X" << n << "......" << endl ;
	for(int i=0; i<n; ++i){
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
	
	cout << endl ;
	cout << "k = " ;
	cin >> k ;
	
	e = kthSmallest(matrix, k) ;
	
	cout << endl ;
	cout << k << "th smallest element = " << e ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}