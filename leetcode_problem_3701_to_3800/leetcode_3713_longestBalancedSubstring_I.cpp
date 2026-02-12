
// 3713. LONGEST BALANCED SUBSTRING I

// # Complexity
// - Time complexity: O(N^2 * K)

// - Space complexity: O(K)

/* C++ */
// https://leetcode.com/problems/longest-balanced-substring-i/solutions/7574123/c-solution-by-nidhi_kamal-tt56/

#include<iostream>
#include<unordered_map>

using namespace std ;

int longestBalanced(string s) {
    int n = s.size(), ans = 0 ;
    for(int i=0; i<n; ++i) {
        unordered_map<char, int> freq ;
        for(int j=i; j<n; ++j) {
            bool FLAG = true ;
            char ch = s[j] ;
            freq[ch]++ ;
            for(auto& f : freq) {
                if(f.second > 0 && f.second != freq[ch]) {
                    FLAG = false ;
                    break ;
                }
            }
            if(FLAG) {
                ans = max(ans, j - i + 1) ;
            }
        }
    }
    return ans ;
}

int main() {
	string s ;
	int ans ;
	
	cout << endl ;
	cout << "  LONGEST BALANCED SUBSTRING I " << endl ;
	cout << " ==============================" << endl ;
	
	cout << endl ;
	cout << "Enter a string..." << endl ;
	cin >> s ;
	
	ans = longestBalanced(s) ;
	
	cout << endl ;
	cout << "Length = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}