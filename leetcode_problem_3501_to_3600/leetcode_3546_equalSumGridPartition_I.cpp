
// 3546. EQUAL SUM GRID PARTITION I

/** T.C. - O(M * N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/equal-sum-grid-partition-i/solutions/7693100/c-solution-1-ms-runtime-beats-9748-memor-yaua/

/* JAVA */
// https://leetcode.com/problems/equal-sum-grid-partition-i/solutions/7693137/java-easy-solution-tc-om-n-sc-o1-by-nidh-t8gb/

#include<iostream>
#include<vector>
#include<numeric>

using namespace std ;

bool canPartitionGrid(vector<vector<int>>& grid) {
    long long totalSum = 0 ;
    for(vector<int>& row : grid) {
        totalSum += accumulate(row.begin(), row.end(), 0LL) ;
    }
    int m = grid.size(), n = grid[0].size() ;
    long long sum = 0 ;
    for(int i = 0; i < m - 1; ++i) {
        for(int j = 0; j < n; ++j) {
            sum += grid[i][j] ;
        }
        if(sum == (totalSum - sum)) {
            return true ;
        }
    }
    sum = 0 ;
    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < m; ++j) {
            sum += grid[j][i] ;
        }
        if(sum == (totalSum - sum)) {
            return true ;
        }
    }
    return false ;
}

int main() {
	vector<vector<int>> grid ;
	int m, n, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  EQUAL SUM GRID PARTITION I " << endl ;
	cout << " ````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter row: " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter col: " ;
	cin >> n ;
	
	cout << endl << "Enter elements of the grid : " << endl ;
	for(int i=0; i<m; i++) {
		vector<int> row ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
    ans = canPartitionGrid(grid) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}