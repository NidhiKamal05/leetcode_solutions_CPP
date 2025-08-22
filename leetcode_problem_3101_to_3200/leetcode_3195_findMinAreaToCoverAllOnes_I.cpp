
// 3195. FIND THE MINIMUM AREA TO COVER ALL ONES I

#include<iostream>
#include<vector>

using namespace std ;

int minimumArea(vector<vector<int>>& grid) {
	int m = grid.size(), n = grid[0].size() ;
	int max_i = 0, min_i = m-1, max_j = 0, min_j = n-1 ;
	for(int i=0; i<m; ++i) {
		for(int j=0; j<n; ++j) {
			if(grid[i][j] == 1) {
				max_i = max(max_i, i) ;
				min_i = min(min_i, i) ;
				max_j = max(max_j, j) ;
				min_j = min(min_j, j) ;
			}
		}
	}
	return ((max_i - min_i + 1) * (max_j - min_j + 1)) ;
}

int main() {
	int m, n, e ;
	vector<vector<int>> grid ;
	
	cout << endl ;
	cout << "  FIND THE MINIMUM AREA TO COVER ALL ONES I " << endl ;
	cout << " *******************************************" << endl ;
	
	cout << endl ;
	cout << "Enter number of rows, m = " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter number of columns, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the 2-D array......" << endl ;
	for(int i=0; i<m; ++i) {
		vector<int> v ;
		cout << "Enter elements(0 or 1) in " << i << "th row..." << endl ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			v.push_back(e) ;
		}
		grid.push_back(v) ;
	}
	
	e = minimumArea(grid) ;
	
	cout << endl ;
	cout << "Minimum area = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}