
// 2033. MINIMUM OPERATIONS TO MAKE UNI-VALUE GRID

/** T.C. - O(M * N * log(M * N)) & S.C. - O(M * N) **/

/* C++ */
// https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/solutions/8108615/c-greedy-solution-using-median-strategy-ol5h1/

/* JAVA */
// https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/solutions/8108646/java-solution-by-nidhi_kamal-rr8u/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int minOperations(vector<vector<int>>& grid, int x) {
    vector<int> nums ;
    for(vector<int>& row : grid) {
        for(int& num: row) {
            nums.push_back(num) ;
        }
    }
    sort(nums.begin(), nums.end()) ;
    int median = nums[nums.size() / 2] ;
    int minOp = 0 ;
    for(int& num : nums) {
        if(num % x != median % x) {
            return -1 ;
        }
        minOp += abs(num - median) / x ;
    }
    return minOp ;
}

int main() {
	vector<vector<int>> grid ;
	int m, n, x, ans ;
	
	cout << endl ;
	cout << "  MINIMUM OPERATIONS TO MAKE UNI-VALUE GRID " << endl ;
	cout << " ```````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter row: " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter col: " ;
	cin >> n ;
	
	cout << endl << "Enter elements of the gridrix : " << endl ;
	for(int i = 0; i < m; i++) {
		vector<int> row ;
		for(int j = 0; j < n; ++j) {
			cin >> x ;
			row.push_back(x) ;
		}
		grid.push_back(row) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, x = " ;
	cin >> x ;
	
    ans = minOperations(grid, x) ;
	
	cout << endl ;
	cout << "Minimum operation = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}