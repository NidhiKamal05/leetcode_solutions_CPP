
// 3863. MINIMUM OPERATIONS TO SORT A STRING

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-operations-to-sort-a-string/solutions/8582800/c-solution-beats-9336-by-nidhi_kamal-q7zs/

#include<iostream>
#include<algorithm>

using namespace std ;

int minOperations(string s) {
    if(is_sorted(s.begin(), s.end())) {
        return 0 ;
    }
    if(s.length() == 2) {
        return -1 ;
    }
    char mn = *min_element(begin(s), end(s)) ;
    char mx = *max_element(begin(s), end(s)) ;
    if(s.front() == mn || s.back() == mx) {
        return 1 ;
    }
    for(int i = 1; i < s.length() - 1; ++i) {
        if(s[i] == mx || s[i] == mn) {
            return 2 ;
        }
    }
    return 3 ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  MINIMUM OPERATIONS TO SORT A STRING " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	ans = minOperations(s) ;
	
	cout << endl ;
	cout << "Minimum operations = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}