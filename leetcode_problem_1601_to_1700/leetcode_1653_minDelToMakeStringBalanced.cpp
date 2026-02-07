
/** C++ **/
// https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/solutions/7560688/c-easy-solution-using-stack-on-time-by-n-s93d/

/** JAVA **/
// https://leetcode.com/problems/minimum-deletions-to-make-string-balanced/solutions/7560678/java-solution-very-easy-stack-on-by-nidh-2kbl/?envType=daily-question&envId=2026-02-07

// 1653. MINIMUM DELETIONS TO MAKE STRING BALANCED

#include<iostream>

using namespace std ;

int minimumDeletions(string s) {
    int cnt = 0 ;
    string st ;
    for(char c : s) {
        if(!st.empty() && st.back() == 'b' && c == 'a') {
            st.pop_back() ;
            ++cnt ;
        }
        else {
            st += c ;
        }
    }
    return cnt ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  MINIMUM DELETIONS TO MAKE STRING BALANCED " << endl ;
	cout << " ===========================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string(contaning only 'a' and 'b')....." << endl ;
	cin >> s ;
	
	ans = minimumDeletions(s) ;
	
	cout << endl ;
	cout << "Minimum deletion = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}