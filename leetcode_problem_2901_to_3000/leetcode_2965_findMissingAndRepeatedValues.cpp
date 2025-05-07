
// 2965. FIND MISSING AND REPEATED VALUES

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
	int n = grid.size() ;
	vector<bool> checkMissing(n*n, false) ;
	map<int, int> checkRepeated ;
	vector<int> ans(2) ;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			checkMissing[grid[i][j]-1] = true ;
			checkRepeated[grid[i][j]]++ ;
		}
	}
	for(const auto& mp : checkRepeated) {
		if(mp.second == 2) {
			ans[0] = mp.first ;
			break ;
		}
	}
	for(int i=0; i<(n*n); ++i) {
		if(checkMissing[i] == false) {
			ans[1] = i+1 ;
			break ;
		}
	}
	return ans ;
}

//** JAVA SOLUTION **//
/*class Solution {
    public int[] findMissingAndRepeatedValues(int[][] grid) {
        int n = grid.length ;
        HashMap<Integer, Integer> frequency = new HashMap<>() ;
        int repeated = 0, missing = 0 ;
        for(int[] row : grid) {
            for(int num : row) {
                if(frequency.containsKey(num)) {
                    frequency.put(num, frequency.get(num)+1) ;
                }
                else {
                    frequency.put(num, 1) ;
                }
            }
        }
        for(int num=1; num<=(n*n); ++num) {
            if(!frequency.containsKey(num)) {
                missing = num ;
            }
            else if(frequency.get(num) == 2) {
                repeated = num ;
            }
            else {
                continue ;
            }
        }
        return new int[] {repeated, missing} ;
    }
}*/

int main() {
	vector<vector<int>> grid ;
	vector<int> ans ;
	int size, e ;
	
	cout << endl ;
	cout << "  FIND MISSING AND REPEATED VALUES " << endl ;
	cout << " ==================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the grid...." << endl ;
	cin >> size ;
	
	cout << endl ;
	cout << "Enter values in grid...." << endl ;
	for(int i=0; i<size; ++i) {
		vector<int> v ;
		for(int j=0; j<size; ++j) {
			cin >> e ;
			v.push_back(e) ;
		}
		grid.push_back(v) ;
	}
	
	ans = findMissingAndRepeatedValues(grid) ;
	
	cout << endl ;
	cout << "Missing and repeated values....." << endl ;
	cout << "[" << ans[0] << "," << ans[1] << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


	// for(const auto& row : grid) {
		// cout << "For-0....\n" ;
		// for(const auto& e : row) {
			// cout << "For-0.1....\n" ;
			// checkRepeated[e]++ ;
		// }
	// }