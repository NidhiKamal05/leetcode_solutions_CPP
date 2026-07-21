
// 2414. LENGTH OF THE LONGEST ALPHABETICAL CONTINUOUS SUBSTRING

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/solutions/8411335/c-solution-by-nidhi_kamal-19rh/

/* JAVA */
// https://leetcode.com/problems/length-of-the-longest-alphabetical-continuous-substring/description/

#include<iostream>

using namespace std ;

int longestContinuousSubstring(string s) {
    int n = s.length(), maxLen = 0 ;
    for(int i = 0; i < n; ++i) {
        int len = 1 ;
        for(int j = i+1; j < i+26; ++j) {
            if(s[j-1] + 1 == s[j]) {
                ++len ;
            }
            else {
                break ;
            }
        }
        maxLen = max(maxLen, len) ;
        if(maxLen == n) {
            break ;
        }
    }
    return maxLen ;
}

/** S.C. - O(N) **/
/*int longestContinuousSubstring(string s) {
    int n = s.length(), maxLen = 0 ;
    for(int i = 0; i < n; ++i) {
        string str ;
        str += s[i] ;
        for(int j = i+1; j < i+26; ++j) {
            if(s[j-1] + 1 == s[j]) {
                str += s[j] ;
            }
            else {
                break ;
            }
        }
        maxLen = max(maxLen, (int)str.length()) ;
        if(maxLen == n) {
            break ;
        }
    }
    return maxLen ;
}*/

int main() {
	int ans ;
	string s ;
	
	cout << endl ;
	cout << "  LENGTH OF THE LONGEST ALPHABETICAL CONTINUOUS SUBSTRING " << endl ;
	cout << " =========================================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	cin >> s ;
	
	ans = longestContinuousSubstring(s) ;
	
	cout << endl ;
	cout << "Length = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*
int longestContinuousSubstring(string s) {
	int n = s.length() ;
	int maxLen = 0 ;
	for(int i=0; i<n; ++i) {
		int len = 0 ;
		string str ;
		str += s[i] ;
		for(int j=i+1; j<i+26; ++j) {
			// cout << endl << s[j-1] << ", " << s[j] ;
			if(s[j-1]+1 == s[j]) {
				str += s[j] ;
			}
			else {
				len = str.length() ;
				break ;
			}
		}
		// cout << endl << str << " = " << len ;
		maxLen = max(len, maxLen) ;
		if(maxLen == n) {
			break ;
		}
	}
	return maxLen ;
}
*/