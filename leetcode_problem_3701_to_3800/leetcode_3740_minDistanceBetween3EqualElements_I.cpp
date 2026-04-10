
// 3740. MINIMUM DISTANCE BETWEEN THREE EQUAL ELEMENTS I

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/solutions/7858033/c-by-nidhi_kamal-6ng2/

/* JAVA */
// https://leetcode.com/problems/minimum-distance-between-three-equal-elements-i/solutions/7858228/java-by-nidhi_kamal-36di/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

/**
*	|a - b| = b - a = a - b
*
*	ans = |i - j| + |j - k| + |k - i|
*		= (j - i) + (k - j) + (k - i)
*		= j - i + k - j + k - i
*		= 2k - 2i
*		= 2 * (k - i)
**/

int minimumDistance(vector<int>& nums) {
	int n = nums.size() ;
	unordered_map<int, vector<int>> mp ;
	for(int i = 0; i < n; ++i) {
		mp[nums[i]].push_back(i) ;
	}
	int minDist = INT_MAX ;
	for(auto& it : mp) {
		vector<int> indices = it.second ;
		if(indices.size() >= 3) {
			for(int i = 0; i < indices.size()-2; ++i) {
				// int dist = abs(indices[i] - indices[i+1]) + abs(indices[i+1] - indices[i+2]) + abs(indices[i+2] - indices[i]) ;
				int dist = 2 * (indices[i + 2] - indices[i]) ;
				minDist = min(minDist, dist) ;
			}
		}
	}
	return minDist == INT_MAX ? -1 : minDist ;
}

/** O(N^3) & O(1) **/
/*int minimumDistance(vector<int>& nums) {
	int minDist = INT_MAX ;
	int n = nums.size() ;
	// if(n < 3) {
		// return -1 ;
	// }
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(nums[i] == nums[j]) {
				for(int k = j + 1; k < n; ++k) {
					if(nums[j] == nums[k]) {
						int dist = abs(i - j) + abs(j - k) + abs(k - i) ;
						minDist = min(minDist, dist) ;
					}
				}
			}
		}
	}
	return minDist == INT_MAX ? -1 : minDist ;
}*/

int main() {
	vector<int> nums ;
	int len, e ;
	
	cout << endl ;
	cout << "  MINIMUM DISTANCE BETWEEN THREE EQUAL ELEMENTS I " << endl ;
	cout << " `````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = minimumDistance(nums) ;
	
	cout << endl ;
	cout << "Minimum distance = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}