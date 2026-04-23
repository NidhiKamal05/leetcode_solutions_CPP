
// 2937. MAKE THREE STRINGS EQUAL

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/make-three-strings-equal/solutions/8080691/c-0-ms-runtime-beats-100-on-time-by-nidh-vt5q/

/* JAVA */
// https://leetcode.com/problems/make-three-strings-equal/solutions/8080875/java-solution-beats-100-runtime-0-ms-by-optm1/

#include<iostream>

using namespace std ;

int findMinimumOperations(string s1, string s2, string s3) {
    int len = min(s1.length(), min(s2.length(), s3.length())) ;
    int minOp = s1.length() + s2.length() + s3.length() ;
    if(s1[0] != s2[0] || s2[0] != s3[0] || s3[0] != s1[0]) {
        return -1 ;
    }
    for(int i = 0; i < len; ++i) {
        if(s1[i] == s2[i] && s2[i] == s3[i]) {
            minOp -= 3 ;
        }
        else {
            break ;
        }
    }
    return minOp ;
}

int main() {
	int ans ;
	string s1, s2, s3 ;
	
	cout << endl ;
	cout << "  MAKE THREE STRINGS EQUAL " << endl ;
	cout << " ==========================" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s1 = " ;
	cin >> s1 ;
	
	cout << endl ;
	cout << "Enter a string, s2 = " ;
	cin >> s2 ;
	
	cout << endl ;
	cout << "Enter a string, s3 = " ;
	cin >> s3 ;
	
	ans = findMinimumOperations(s1, s2, s3) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




/*int findMinimumOperations(string s1, string s2, string s3) {
	int len1 = s1.length(), len2 = s2.length(), len3 = s3.length() ;
	string prefix = len1 < len2 ? (len1 < len3 ? s1 : s3) : (len2 < len3 ? s2 : s3) ;
	int prefLen = prefix.length() ;
	/** c++ 20 and above **/
	// if(s1.starts_with(prefix) && s2.starts_with(prefix) && s3.starts_with(prefix)) {
	if(s1.find(prefix) == 0 && s2.find(prefix) == 0 && s3.find(prefix) == 0) {
		return ((len1 - prefLen) + (len2 - prefLen) + (len3 - prefLen)) ;
	}
	return -1 ;
}*/