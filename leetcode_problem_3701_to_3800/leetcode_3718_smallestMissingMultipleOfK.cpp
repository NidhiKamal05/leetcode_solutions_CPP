
// 3718. SMALLEST MISSING MULTIPLE OF K

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/smallest-missing-multiple-of-k/solutions/8481638/c-solution-0-ms-runtime-beats-100-by-nid-7wcg/

/* JAVA */
// https://leetcode.com/problems/smallest-missing-multiple-of-k/description/

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>

using namespace std ;

/*int missingMultiple(vector<int>& nums, int k) {
    for(int i = 1; ; ++i) {
        if(find(nums.begin(), nums.end(), k * i) == nums.end()) {
            return k * i ;
        }
    }
    return k ;
}*/

int missingMultiple(vector<int>& nums, int k) {
    unordered_set<int> numbers(nums.begin(), nums.end()) ;
    for(int i = 1; ; ++i) {
        if(numbers.find(k * i) == numbers.end()) {
            return k * i ;
        }
    }
    return k ;
}

int main() {
	int n, e, k ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  SMALLEST MISSING MULTIPLE OF K " << endl ;
	cout << " --------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter integers in the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	e = missingMultiple(nums, k) ;
	
	cout << endl ;
	cout << "Smallest missing multiple of k = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}