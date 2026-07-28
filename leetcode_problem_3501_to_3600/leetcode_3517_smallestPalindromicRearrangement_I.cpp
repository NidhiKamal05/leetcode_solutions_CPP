
// 3517. SMALLEST PALINDROMIC REARRANGEMENT I

/** T.C. - O(N log N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/smallest-palindromic-rearrangement-i/solutions/8426373/c-solution-using-hash-map-by-nidhi_kamal-7t5e/

/* JAVA */
// https://leetcode.com/problems/smallest-palindromic-rearrangement-i/solutions/8426465/java-by-nidhi_kamal-cfm2/

#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std ;

string smallestPalindrome(string s) {
    map<char, int> freq ;
    for(char& c : s) {
        freq[c]++ ;
    }
    string left, right, mid ;
    for(auto& f : freq) {
        left.append(f.second / 2, f.first) ;
        if(f.second % 2 != 0) {
            mid = f.first ;
        }
    }
    right = left ;
    reverse(right.begin(), right.end()) ;
    return mid != "\0" ? left + mid + right : left + right ;
}

int main() {
	string s, palindrome ;
	
	cout << endl ;
	cout << "  FRIENDS OF APPROPRIATE AGES " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a palindromic string, s = " ;
	cin >> s ;
	
	palindrome = smallestPalindrome(s) ;
	
	cout << endl ;
	cout << "Smallest palindrome = " << palindrome << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}