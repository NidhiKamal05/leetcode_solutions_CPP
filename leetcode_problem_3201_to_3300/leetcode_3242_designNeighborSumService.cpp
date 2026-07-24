
// 3242. DESIGN NEIGHBOR SUM SERVICE

/** T.C. - O(m * n) & S.C. - O(n) **/

/* C++ */
// https://leetcode.com/problems/design-neighbor-sum-service/solutions/8417315/c-solution-design-by-nidhi_kamal-zdyu/

/* JAVA */
// https://leetcode.com/problems/design-neighbor-sum-service/solutions/8417530/java-easy-solution-hash-map-design-by-ni-tsy5/

#include<iostream>
#include<vector>

using namespace std ;

class NeighborSum {
private:
	vector<vector<int>> matrix ;
	int m, n ;

public:
	NeighborSum(vector<vector<int>>& grid) {
		matrix = grid ;
		m = matrix.size() ;
		n = matrix[0].size() ;
	}
	
	pair<int, int> findCoordinatesOfValue(int val) {
		for(int i=0; i<m; ++i) {
			for (int j=0; j<n; ++j) {
				if(matrix[i][j] == val) {
					return {i, j} ;
				}
			}
		}
		return {-1, -1} ;
	}
	
	int adjacentSum(int value) {
		auto [i, j] = findCoordinatesOfValue(value) ;
		int sum = 0 ;
		if(i-1 >= 0) {
			sum += matrix[i-1][j] ;
		}
		if(i+1 <= m-1) {
			sum += matrix[i+1][j] ;
		}
		if(j-1 >= 0) {
			sum += matrix[i][j-1] ;
		}
		if(j+1 <= n-1) {
			sum += matrix[i][j+1] ;
		}
		return sum ;
	}
	
	int diagonalSum(int value) {
		auto [i, j] = findCoordinatesOfValue(value) ;
		int sum = 0 ;
		if(i-1 >= 0 && j-1 >= 0) {
			sum += matrix[i-1][j-1] ;
		}
		if(i-1 >= 0 && j+1 <= n-1) {
			sum += matrix[i-1][j+1] ;
		}
		if(i+1 <= m-1 && j-1 >= 0) {
			sum += matrix[i+1][j-1] ;
		}
		if(i+1 <= m-1 && j+1 <= n-1) {
			sum += matrix[i+1][j+1] ;
		}
		return sum ;
	}
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */