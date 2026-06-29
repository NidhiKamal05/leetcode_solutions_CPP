
// 1967. NUMBER OF STRINGS THAT APPEAR AS SUBSTRINGS IN WORD

/** T.C. - O(N * M * K) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/solutions/8365812/c-0-ms-runtime-beats-100-easy-solution-b-za3y/

/* JAVA */
// https://leetcode.com/problems/number-of-strings-that-appear-as-substrings-in-word/solutions/8365824/java-solution-using-contains-string-matc-cnjh/

#include<iostream>
#include<vector>

using namespace std ;

int numOfStrings(vector<string>& patterns, string word) {
    int cnt = 0 ;
    for(string& pattern : patterns) {
        if(word.find(pattern) != string::npos) {
            ++cnt ;
        }
    }
    return cnt ;
}

int main() {
	vector<string> patterns ;
	string s, word ;
	int ans, n ;
	
	cout << endl ;
	cout << "  NUMBER OF STRINGS THAT APPEAR AS SUBSTRINGS IN WORD " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter patterns....." << endl ;
	for(int i = 0; i < n; ++i) {
		cin >> s ;
		patterns.push_back(s) ;
	}
	
	cout << endl ;
	cout << "Enter word....." << endl ;
	cin >> word ;
	
	ans = numOfStrings(patterns, word) ;
	
	cout << endl ;
	cout << "Number of substrings = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}