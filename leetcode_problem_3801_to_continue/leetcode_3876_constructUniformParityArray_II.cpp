
// 3876. CONSTRUCT UNIFORM PARITY ARRAY II

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/construct-uniform-parity-array-ii/solutions/8499971/c-1-loop-solution-on-time-o1-space-by-ni-3c01/

/* JAVA */
// https://leetcode.com/problems/construct-uniform-parity-array-ii/solutions/8499981/java-solution-beats-8333-on-time-o1-spac-5toc/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

bool uniformArray(vector<int>& nums1) {
    int minEl = *min_element(nums1.begin(), nums1.end()) ;
    if(minEl % 2 == 1) {
        return true ;
    }
    bool hasOdd = false ; 
    for(int num : nums1) {
        if(num % 2 == 1) {
            hasOdd = true ;
            break ;
        }
    }
    return hasOdd ? false : true ;
}

int main() {
	vector<int> nums1 ;
	int n, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  CONSTRUCT UNIFORM PARITY ARRAY II " << endl ;
	cout << " ```````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums1.push_back(e) ;
	}
	
    ans = uniformArray(nums1) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}