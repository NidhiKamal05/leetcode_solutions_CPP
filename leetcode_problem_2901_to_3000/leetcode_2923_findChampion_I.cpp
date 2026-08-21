
// 2923. FIND CHAMPION I

/** T.C. - O(N^2) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/find-champion-i/solutions/8473824/c-solution-by-nidhi_kamal-dadg/

/* JAVA */
// https://leetcode.com/problems/find-champion-i/solutions/8473828/java-1-ms-solution-beats-8194-by-nidhi_k-4w08/

#include<iostream>
#include<vector>

using namespace std ;

int findChampion(vector<vector<int>>& grid) {
    int team = 0, maxStrength = 0, n = grid.size() ;
    for(int i = 0; i < n; ++i) {
        int strength = 0 ;
        for(int j = 0; j < n; ++j) {
            if(grid[i][j]) {
                ++strength ;
            }
        }
        if(strength > maxStrength) {
            maxStrength = strength ;
            team = i ;
        }
    }
    return team ;
}

int main() {
	vector<vector<int>> grid ;
	int n, e ;
	
	cout << endl ;
	cout << "  FIND CHAMPION I " << endl ;
	cout << " `````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the grid, n = " ;
	cin >> n ;
	
	cout << endl << "Enter elements of the grid......" << endl ;
	for(int i = 0; i < n; i++) {
		vector<int> row ;
		for(int j = 0; j < n; ++j) {
			cin >> e ;
			row.push_back(e) ;
		}
		grid.push_back(row) ;
	}
	
    e = findChampion(grid) ;
	
	cout << endl ;
	cout << "Champion of the tournament is Team " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}