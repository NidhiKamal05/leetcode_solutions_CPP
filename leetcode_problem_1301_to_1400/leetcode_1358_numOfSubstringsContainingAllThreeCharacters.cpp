
// 1358. NUMBER OF SUBSTRINGS CONTAINING ALL THREE CHARACTERS 

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/solutions/8368232/c-solution-by-nidhi_kamal-d7kg/

/* JAVA */
// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/solutions/8368238/java-runtime-beats-8452-memory-beats-786-7udc/

#include<iostream>
#include<vector>

using namespace std ;

int numberOfSubstrings(string s) {
	int ans = 0, n = s.length() ;
    vector<int> lastPositions = {-1, -1, -1} ;
    for(int pos = 0; pos < n ; ++pos) {
        lastPositions[s[pos] - 'a'] = pos ;
        // ans += (1 + min({lastPositions[0], lastPositions[1], lastPositions[2]})) ;
        ans += (1 + min(lastPositions[0], min(lastPositions[1], lastPositions[2]))) ;
    }
    return ans ;
}

int main() {
	string s ;
	int ans = 0 ;
	
	cout << endl ;
	cout << "  NUMBER OF SUBSTRINGS CONTAINING ALL THREE CHARACTERS " << endl ;
	cout << " ======================================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	ans = numberOfSubstrings(s) ;
	
	cout << endl ;
	cout << "Number of substrings = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}