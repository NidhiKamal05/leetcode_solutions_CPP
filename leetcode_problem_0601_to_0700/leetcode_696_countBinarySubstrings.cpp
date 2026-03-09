
// 696. COUNT BINARY SUBSTRINGS

/* C++ T.C. - O(N) & S.C. - O(1) */
// https://leetcode.com/problems/count-binary-substrings/solutions/7591707/c-runtime-beats-100-on-solution-by-nidhi-bgwl/

/* JAVA T.C. - O(N) & S.C. - O(N) */
// https://leetcode.com/problems/count-binary-substrings/solutions/7591720/java-solution-runtime-beats-100-on-by-ni-su6f/

#include<iostream>

using namespace std ;

int countBinarySubstrings(string s) {
    int n = s.length() ;
    int curr = 1, prev = 0, ans = 0 ;
    for(int i=1; i<n; ++i) {
        if(s[i] == s[i-1]) {
            ++curr ;
        }
        else {
            ans += min(prev, curr) ;
            prev = curr ;
            curr = 1 ;
        }
    }
    ans += min(prev, curr) ;
    return ans ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  COUNT BINARY SUBSTRINGS " << endl ;
	cout << " -------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a binary string, s = " ;
	cin >> s ;
	
	ans = countBinarySubstrings(s) ;
	
	cout << endl ;	
	cout << "No. of substrings = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}