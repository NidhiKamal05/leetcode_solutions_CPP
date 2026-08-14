
// 3090. MAXIMUM LENGTH SUBSTRING WITH TWO OCCURRENCES

/** T.C. - O(N^2) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/solutions/8461141/c-solution-by-nidhi_kamal-2kpf/

/* JAVA */
// https://leetcode.com/problems/maximum-length-substring-with-two-occurrences/solutions/8461150/java-by-nidhi_kamal-fu39/

#include<iostream>
#include<vector>

using namespace std ;

int maximumLengthSubstring(string s) {
	int maxLen = 0 ;
    int n = s.length() ;
    for(int i = 0; i < n; ++i) {
        vector<int> cnt(26, 0) ;
        int j = 0 ;
        for(j = i; j < n; ++j) {
            int idx = s[j] - 'a' ;
            ++cnt[idx] ;
            if(cnt[idx] > 2) {
                break ;
            }
        }
        maxLen = max(maxLen, j - i) ;
    }
    return maxLen ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  MAXIMUM LENGTH SUBSTRING WITH TWO OCCURRENCES " << endl ;
	cout << " ===============================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	ans = maximumLengthSubstring(s) ;
	
	cout << endl ;
	cout << "Maximum length = " << ans << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}