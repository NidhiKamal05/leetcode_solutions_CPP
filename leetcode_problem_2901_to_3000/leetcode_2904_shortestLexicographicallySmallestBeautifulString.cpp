
// 2904. SHORTEST AND LEXICOGRAPHICALLY SMALLEST BEAUTIFUL STRING

/** T.C. - O(N^2) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/shortest-and-lexicographically-smallest-beautiful-string/solutions/8484344/c-by-nidhi_kamal-93sf/

/* JAVA */
// https://leetcode.com/problems/shortest-and-lexicographically-smallest-beautiful-string/solutions/8484340/java-solution-by-nidhi_kamal-p97m/

#include<iostream>

using namespace std ;

string shortestBeautifulSubstring(string s, int k) {
    int n = s.length() ;
    string ans = "" ;
    for(int i = 0; i < n; ++i) {
        int oneCnt = 0 ;
        string curr = "" ;
        for(int j = i; j < n; ++j) {
            curr += s[j] ;
            if(s[j] == '1') {
                ++oneCnt ;
            }
            if(oneCnt == k) {
                if(ans == "" || curr.length() < ans.length() || (curr.length() == ans.length() && curr < ans)) {
                    ans = curr ;
                }
            }
            else if(oneCnt > k) {
                break ;
            }
            else {
                continue ;
            }
        }
    }
    return ans ;
}

int main() {
	string s, ans ;
	int k ;
	
	cout << endl ;
	cout << "  SHORTEST AND LEXICOGRAPHICALLY SMALLEST BEAUTIFUL STRING " << endl ;
	cout << " ``````````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
    ans = shortestBeautifulSubstring(s, k) ;
	
	cout << endl ;
	cout << "Substring = \"" << ans << "\"" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}