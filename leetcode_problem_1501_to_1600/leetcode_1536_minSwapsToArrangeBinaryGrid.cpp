
// 1536. MINIMUM SWAPS TO ARRANGE A BINARY GRID

/** T.C. - O(N^2) & S.C. - O(N) */

/* C++ */
// https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/solutions/7619486/c-solution-runtime-beats-100-matrix-by-n-8ytf/

/* JAVA */
// https://leetcode.com/problems/minimum-swaps-to-arrange-a-binary-grid/solutions/7619607/java-solution-beats-9623-by-nidhi_kamal-0juw/

#include<iostream>
#include<vector>

using namespace std ;

int minSwaps(vector<vector<int>>& grid) {
    int n = grid.size() ;
    vector<int> trailingZeros(n) ;
    for(int i=0; i<n; ++i) {
        int cnt = 0 ;
        for(int j=n-1; j>=0 && grid[i][j] == 0; --j) {
            ++cnt ;
        }
        trailingZeros[i] = cnt ;
    }
    int swaps = 0 ;
    for(int i=0; i<n; ++i) {
        int req = n - i - 1 ;
        int j = i ;
        while(j < n && trailingZeros[j] < req) {
            ++j ;
        }
        if(j == n) {
            return -1 ;
        }
        while(j > i) {
            swap(trailingZeros[j], trailingZeros[j - 1]) ;
            ++swaps ;
            --j ;
        }
    }
    return swaps ;
}

int main() {
	int n, e, ans ;
	vector<vector<int>> grid ;
	
	cout << endl ;
	cout << "  MINIMUM SWAPS TO ARRANGE A BINARY GRID " << endl ;
	cout << " ----------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the matrix, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the matrix...." << endl ;
	for(int i=0; i<n; ++i) {
		vector<int> row ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
	ans = minSwaps(grid) ;
	
	cout << endl ;	
	cout << "Minimum swaps = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}