
// 3736. MINIMUM MOVES TO EQUAL ARRAY ELEMENTS III

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/solutions/8600488/c-on-solution-beats-9472-by-nidhi_kamal-m4ij/

/* JAVA */
// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-iii/solutions/8600497/java-by-nidhi_kamal-6fou/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int minMoves(vector<int>& nums) {
    int moves = 0 ;
    int maxVal = *max_element(nums.begin(), nums.end()) ;
    for(int& num : nums) {
        moves += (maxVal - num) ;
    }
    return moves ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  MINIMUM MOVES TO EQUAL ARRAY ELEMENTS III " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
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