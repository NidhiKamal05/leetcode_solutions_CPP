
// 3963. CREATE GRID WITH EXACTLY ONE PATH

/** T.C. - O(M * N) & S.C. - O(M * N) **/

/* C++ */
// https://leetcode.com/problems/create-grid-with-exactly-one-path/solutions/8591581/c-solution-matrix-by-nidhi_kamal-6jnz/

/* JAVA */
// https://leetcode.com/problems/create-grid-with-exactly-one-path/solutions/8591587/java-solution-beats-9922-by-nidhi_kamal-tttv/

#include<iostream>
#include<vector>

using namespace std ;

vector<string> createGrid(int m, int n) {
    string obs(n, '#') ;
    vector<string> grid(m, obs) ;
    grid[0] = string(n, '.') ;
    for(int i = 1; i < m; ++i) {
        grid[i][n - 1] = '.' ;
    }
    return grid ;
}

int main() {
	int m, n ;
	vector<string> grid ;
	
	cout << endl ;
	cout << "  CREATE GRID WITH EXACTLY ONE PATH " << endl ;
	cout << " ```````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the grid...." << endl ;
	cout << "m = " ;
	cin >> m ;
	cout << "n = " ;
	cin >> n ;
	
    grid = createGrid(m, n) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(string r : grid) {
		cout << "\"" << r << "\"" << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}