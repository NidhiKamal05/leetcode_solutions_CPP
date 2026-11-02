
// 462. MINIMUM MOVES TO EQUAL ARRAY ELEMENTS II

/** T.C. - O(NLogN) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/solutions/8599058/c-runtime-1-ms-solution-beats-9689-by-ni-7syj/

/* JAVA */
// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/solutions/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int minMoves(vector<int>& nums) {
	sort(nums.begin(), nums.end()) ;
    int median = nums[nums.size() / 2], moves = 0 ;	
    for(int& num : nums) {
        moves += abs(num - median) ;
    }
    return moves ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  MINIMUM MOVES TO EQUAL ARRAY ELEMENTS II " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = minMoves(nums) ;
	
	cout << endl ;
	cout << "Minimum moves = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}