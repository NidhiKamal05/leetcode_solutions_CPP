
// 3402. MINIMUM OPERATIONS TO MAKE COLUMNS STRICTLY INCREASING

#include<iostream>
#include<vector>

using namespace std ;

int minimumOperations(vector<vector<int>>& grid) {
    int m = grid.size(), n = grid[0].size(), minOp = 0 ;
    for(int i=0; i<n; ++i) {
        for(int j=1; j<m; ++j) {
            if(grid[j-1][i] >= grid[j][i]) {
                minOp += (grid[j-1][i]-grid[j][i]+1) ;
                grid[j][i] += (grid[j-1][i]-grid[j][i]+1) ;
                // grid[j][i] = grid[j-1][i] + 1 ;
            }
        }
    }
    return minOp ;
}

int main() {
	vector<vector<int>> grid ;
	int m, n, e ;
	
	cout << endl ;
	cout << "  MINIMUM OPERATIONS TO MAKE COLUMNS STRICTLY INCREASING " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of row : " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter size of col : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the 2D-array...." << endl ;
	for(int i=0; i<m; ++i) {
		vector<int> row ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
	e = minimumOperations(grid) ;
	
	cout << endl ;
	cout << "Minimum Operations = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}