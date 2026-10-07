
// 2278. PERCENTAGE OF LETTER IN STRING

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/percentage-of-letter-in-string/solutions/8560586/c-runtime-beats-100-memory-beats-9071-by-spcs/

/* JAVA */
// https://leetcode.com/problems/percentage-of-letter-in-string/solutions/8560591/java-solution-0-ms-runtime-beats-100-by-9fwwk/

#include<iostream>
// #include<unordered_map>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int percentageLetter(String s, char letter) {
        int cnt = 0 ;
        for(char c : s.toCharArray()) {
            if(c == letter) {
                ++cnt ;
            }
        }
        return (cnt * 100) / s.length() ;
    }
}*/

int percentageLetter(string s, char letter) {
    int cnt = 0 ;
    for(char c : s) {
        if(c == letter) {
            ++cnt ;
        }
    }
    return (cnt * 100) / s.length() ;
}

/*int percentageLetter(string s, char letter) {
    unordered_map<char, int> mp ;
    for(char c : s) {
        mp[c]++ ;
    }
    if(mp.contains(letter)) {
        return (mp[letter] * 100) / s.length() ;
    }
    return 0 ;
}*/

int main(){
	string s ;
	char letter ;
	int percent ;
	
	cout << endl ;
	cout << "  PERCENTAGE OF LETTER IN STRING " << endl ;
	cout << " ````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string....\n" ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter letter....\n" ;
	cin >> letter ;

    percent = percentageLetter(s, letter) ;
	
	cout << endl ;
	cout << "Percentage = " << percent << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*int percentageLetter(string s, char letter) {
	int n = s.length() ;
	map<char, int> mp ;
	for(char c : s) {
		mp[c]++ ;
	}
	for(auto& m : mp) {
		if(m.first == letter) {
			return ((float)(m.second) / n) * 100 ;
		}
	}
	return 0 ;
}*/