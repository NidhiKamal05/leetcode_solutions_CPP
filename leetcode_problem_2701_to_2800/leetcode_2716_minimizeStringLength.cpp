
// 2716. MINIMIZE STRING LENGTH

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimize-string-length/solutions/8311491/c-solution-by-nidhi_kamal-o896/

/* JAVA */
// https://leetcode.com/problems/minimize-string-length/solutions/8311498/java-very-easy-solution-hash-set-by-nidh-nqja/

#include<iostream>
#include<unordered_set>

using namespace std ;

int minimizedStringLength(string s) {
	unordered_set<char> st ;
	for(char& ch : s) {
		st.insert(ch) ;
	}
	return st.size() ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  MINIMIZE STRING LENGTH " << endl ;
	cout << " ========================" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	ans = minimizedStringLength(s) ;
	
	cout << endl ;
	cout << "Minimized Length = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}