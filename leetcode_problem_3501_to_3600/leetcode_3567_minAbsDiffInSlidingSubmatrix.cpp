
// 3567. MINIMUM ABSOLUTE DIFFRENCE IN SLIDING SUBMATRIX

/** T.C. - O(M * N * K^2 * log(K)) & S.C. - O(K^2) **/

/* C++ */
// https://leetcode.com/problems/minimum-absolute-difference-in-sliding-submatrix/solutions/7674597/c-solution-beats-8519-brute-force-sortin-o5tf/

/* JAVA */
// https://leetcode.com/problems/minimum-absolute-difference-in-sliding-submatrix/solutions/7674748/java-solution-beats-100-by-nidhi_kamal-fwn7/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

vector<vector<int>> minAbsDiff(vector<vector<int>>& grid, int k) {
    int m = grid.size(), n = grid[0].size() ;
    vector<vector<int>> ans(m - k + 1, vector<int>(n - k + 1)) ;
    for(int i = 0; i < m - k + 1; ++i) {
        for(int j = 0; j < n - k + 1; ++j) {
            vector<int> arr ;
            for(int x = i; x < i + k; ++x) {
                for(int y = j; y < j + k; ++y) {
                    arr.push_back(grid[x][y]) ;
                }
            }
            sort(arr.begin(), arr.end()) ;
            int minDiff = INT_MAX ;
            for(int idx = 0; idx < arr.size() - 1; ++idx) {
                if(arr[idx + 1] != arr[idx]) {
                    minDiff = min(minDiff, arr[idx + 1] - arr[idx]) ;
                }
            }
            ans[i][j] = minDiff == INT_MAX ? 0 : minDiff ;
        }
    }
    return ans ;        
}

int main() {
	vector<vector<int>> grid, result ;
	int m, n, e, k ;
	
	cout << endl ;
	cout << "  COUNT THE NUMBER OF FAIR PAIRS " << endl ;
	cout << " ````````````````````````````````" << endl ;	
	
	cout << endl ;
	cout << "Enter row: " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter col: " ;
	cin >> n ;
	
	cout << endl << "Enter elements of the matrix : " << endl ;
	for(int i=0; i<m; i++) {
		vector<int> row ;
		for(int j=0; j<n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
    result = minAbsDiff(grid, k) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(vector<int>& res : result) {
		cout << "[ " ;
		for(int& r : res) {			
			cout << r << " " ;
		}
		cout << "] " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}