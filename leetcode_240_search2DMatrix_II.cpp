
// 240. SEARCH A 2D MATRIX II

#include<iostream>
#include<vector>

using namespace std ;

bool searchMatrix(vector<vector<int>>& matrix, int target) {	
	int m = matrix.size() ;
	int n = matrix[0].size() ;
	int i = 0 ;
	int j = n-1 ;
	while(i<m && j>=0) {
		if(target < matrix[i][j])
			--j ;
		else if(target > matrix[i][j])
			++i ;
		else
			return true ;
	}
	return false ;
}

/* bool searchMatrix(vector<vector<int>>& matrix, int target) {
	int m = matrix.size() ;
	int n = matrix[0].size() ;
	if((target < matrix[0][0])||(matrix[m][n] < target))
		return false ;
	for(int i=0; i<m; ++i) {
		int start = 0, end = n-1 ;
		while(start <= end) {
			int mid = start+(end-start)/2 ;
			if(target < matrix[i][mid])
				end = mid-1 ;
			else if(target > matrix[i][mid])
				start = mid+1 ;
			else
				return true ;
		}
	}
	return false ;
}*/

int main() {
	vector<vector<int>> matrix ;
	int m, n, e, target ;
	bool ans ;
	
	cout << endl ;
	cout << "  SEARCH A 2D MATRIX II " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the matrix...." << endl ;
	cout << "m = " ;
	cin >> m ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the matrix " << m << "X" << n << "....." << endl ;
	for(int i=0; i<m; ++i) {
		vector<int> row ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		matrix.push_back(row) ;
	}
	
	cout << endl ;
	cout << "Enter target : " ;
	cin >> target ;
	
	ans = searchMatrix(matrix, target) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}