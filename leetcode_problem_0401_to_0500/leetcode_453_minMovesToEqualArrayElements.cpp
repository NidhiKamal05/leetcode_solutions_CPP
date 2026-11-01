
// 453. MINIMUM MOVES TO EQUAL ARRAY ELEMENTS

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-moves-to-equal-array-elements/solutions/8597615/c-runtime-beats-100-memory-beats-8393-by-7vqd/

/* JAVA */
// https://leetcode.com/problems/minimum-moves-to-equal-array-elements/solutions/8597624/java-solution-on-time-o1-space-by-nidhi_-urou/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int minMoves(vector<int>& nums) {
    int moves = 0 ;
    int minVal = *min_element(nums.begin(), nums.end()) ;
    for(int num : nums) {
        moves += (num - minVal) ;
    }
    return moves ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  MINIMUM MOVES TO EQUAL ARRAY ELEMENTS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
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