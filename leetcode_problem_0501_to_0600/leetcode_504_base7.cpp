
// 504. BASE 7

/** T.C. - O(log N) & S.C. - O(log N) **/

/* C++ */
// https://leetcode.com/problems/base-7/solutions/8607088/c-0-ms-runtime-beats-100-olog-n-by-nidhi-xbn2/

/* JAVA */
// https://leetcode.com/problems/base-7/solutions/8607096/java-beats-9985-1-liner-solution-2-appro-uppe/

#include<iostream>

string convertToBase7(int num) {
    if(num == 0) {
        return "0" ;
    }
    string base7 ;
    int n = num >= 0 ? num : -num ;
    while(n) {
        base7 += ((n % 7) + '0') ;
        n /= 7 ;
    }
    if(num < 0) {
        base7 += '-' ;
    }
    reverse(base7.begin(), base7.end()) ;
    return base7 ;
}

int main() {
	int num ;
	string base7 ;
	
	cout << endl ;
	cout << "  BASE 7 " << endl ;
	cout << " ````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer : " ;
	cin >> num ;
	
	cout << endl ;
    base7 = convertToBase7(num) ;
	
	cout << "Base 7 = " << base7 << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*void strRev(string& str) {// cout << "\nBefore = " << str ;
	int i=0, j=str.length()-1 ;
	while(i <= j) {
		swap(str[i++], str[j--]) ;
	}// cout << "\nAfter = " << str ;
}*/