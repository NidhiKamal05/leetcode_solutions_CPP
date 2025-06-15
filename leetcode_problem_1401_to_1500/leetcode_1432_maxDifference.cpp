
// 1432. MAX DIFFERENCE YOU CAN GET FROM CHANGING AN INTEGER

#include<iostream>
#include<algorithm>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int maxDiff(int num) {
        String s1 = String.valueOf(num) ;
        String s2 = s1 ;
        for(char ch : s1.toCharArray()) {
            if(ch != '9') {
                s1 = s1.replace(ch, '9') ;
                break ;
            }
        }
        char ch = s2.charAt(0) ;
        char c = '1' ;
        if(ch == '1') {
            for(int i=1; i<s2.length(); ++i) {
                if(s2.charAt(i) != '0' && s2.charAt(i) != ch) {
                    ch = s2.charAt(i) ;
                    c = '0' ;
                    break ;
                }
            }
        }
        s2 = s2.replace(ch, c) ;
        return Integer.valueOf(s1) - Integer.valueOf(s2) ;
    }
}*/

int maxDiff(int num) {
    string s1 = to_string(num) ;
    string s2 = s1 ;
    for(char ch : s1) {
        if(ch != '9') {
            replace(s1.begin(), s1.end(), ch, '9') ;
            break ;
        }
    }
    char ch = s2[0] ;
    char c = '1' ;
    if(ch == '1') {
        for(int i=1; i<s2.length(); ++i) {
            if(s2[i] != '0' && s2[i] != ch) {
                ch = s2[i] ;
                c = '0' ;
                break ;
            }
        }
    }	
    replace(s2.begin(), s2.end(), ch, c) ;
    return stoi(s1) - stoi(s2) ;
}

int main() {
	int num, diff ;
	
	cout << endl ;
	cout << "  MAX DIFFERENCE YOU CAN GET FROM CHANGING AN INTEGER " << endl ;
	cout << " =====================================================" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, num = " ;
	cin >> num ;
	
	diff = maxDiff(num) ;
	
	cout << endl ;
	cout << "Max difference = " << diff << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}