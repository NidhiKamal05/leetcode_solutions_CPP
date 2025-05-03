
// 125. VALID PALINDROME

#include<iostream>
#include<cctype>

using namespace std ;

bool isPalindrome(string s) {
	int i = 0 ;
	int j = s.length()-1 ;
	while(i <= j) {
		if(!(iswalnum(s[i]))) {
			++i ;
			continue ;
		}
		if(!(iswalnum(s[j]))) {
			--j ;
			continue ;
		}
		if(tolower(s[i]) != tolower(s[j])) {
			return false ;
		}
		else {
			++i ;
			--j ;
		}
	}
	return true ;
}

// JAVA SOLUTION
/*class Solution {
    public boolean isPalindrome(String s) {
        int i = 0 ;
        int j = s.length()-1 ;
        while(i <= j) {
            if(!Character.isLetterOrDigit(s.charAt(i))) {
                ++i ;
            }
            if(!Character.isLetterOrDigit(s.charAt(j))) {
                --j ;
            }
            if(Character.toLowerCase(s.charAt(i)) != Character.toLowerCase(s.charAt(j))) {
                return false ;
            }
            else {
                ++i ;
                --j ;
            }
        }
        return true ;
    }
}*/

int main() {
	string s ;
	bool ans ;
	
	cout << endl ;
	cout << "  VALID PALINDROME " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string..... " << endl ;
	cin >> s ;
	
	ans = isPalindrome(s) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}