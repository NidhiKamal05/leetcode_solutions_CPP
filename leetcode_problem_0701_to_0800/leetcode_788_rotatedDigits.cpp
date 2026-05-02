
// 788. ROTATED DIGITS

/** T.C. - O(NlogN) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/rotated-digits/solutions/8130911/c-runtime-0-ms-beats-100-brute-force-by-2ew74/

/* JAVA */
// https://leetcode.com/problems/rotated-digits/solutions/8130917/java-solution-brute-force-approach-by-ni-8e0q/

#include<iostream>
#include<vector>

using namespace std ;

int rotatedDigits(int n) {
    int goodInts = 0 ;
    for(int i = 1; i <= n; ++i) {
        int num = i ;
        bool valid = true ;
        bool changed = false ;
        while(num && valid) {
            int digit = num % 10 ;
            if(digit == 3 || digit == 4 || digit == 7) {
                valid = false ;
                break ;
            }
            if(digit == 2 || digit == 5 || digit == 6 || digit == 9) {
                changed = true ;
            }
            num /= 10;
        }
        if(valid && changed) {
            ++goodInts ;
        }
    }
    return goodInts ;
}

int main() {
	int n, ans ;
	
	cout << endl ;
	cout << "  ROTATED DIGITS " << endl ;
	cout << " ````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
    ans = rotatedDigits(n) ;
	
	cout << endl ;
	cout << "Number of good integers = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}