
// 3871. COUNT COMMAS IN RANGE II

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/count-commas-in-range-ii/solutions/8511798/c-o1-solution-0-ms-runtime-beats-100-by-gtax3/

/* JAVA */
// https://leetcode.com/problems/count-commas-in-range-ii/solutions/8511807/java-runtime-beats-9936-1-ms-by-nidhi_ka-ncbn/

#include<iostream>

using namespace std ;

long long countCommas(long long n) {
    long long commas = 0 ;
    if(n <= 999) {
        commas = 0 ;
    }
    else if(n <= 999999) {
        commas = (n - 999) * 1 ;
    }
    else if(n <= 999999999) {
        commas = ((999999 - 999) * 1)
                + ((n - 999999) * 2) ;
    }
    else if(n <= 999999999999) {
        commas = ((999999 - 999) * 1)
                + ((999999999 - 999999) * 2)
                + ((n - 999999999) * 3) ;
    }
    else if(n <= 999999999999999) {
        commas = ((999999 - 999) * 1)
                + ((999999999 - 999999) * 2)
                + ((999999999999 - 999999999) * 3)
                + ((n - 999999999999) * 4) ;
    }
    else {
        commas = ((999999 - 999) * 1)
                + ((999999999 - 999999) * 2)
                + ((999999999999 - 999999999) * 3)
                + ((999999999999999 - 999999999999) * 4)
                // + ((n - 999999999999999) * 5) ;
                + 5 ;
    }
    return commas ;
}


int main() {
	long long n, commas ;
	
	cout << endl ;
	cout << "  COUNT COMMAS IN RANGE II " << endl ;
	cout << " ``````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
    commas = countCommas(n) ;
	
	cout << endl ;
	cout << "Total commas = " << commas << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*long long countCommas(long long n) {
    long long commas = 0 ;
	if(n <= 999) {
        commas = 0 ;
    }
    else if(n > 999 && n <= 999999) {
        commas = (n - 999) * 1 ;
    }
    else if(n > 999999 && n <= 999999999) {
        commas = (n - 99999) * 2 ;
    }
    else if(n > 999999999 && n <= 999999999999) {
        commas = (n - 99999999) * 3 ;
    }
    else if(n > 999999999999 && n <= 999999999999999) {
        commas = (n - 99999999999) * 4 ;
    }
    else {
        commas = 5 ;
    }
    return commas ;
}*/


// WRONG
/*long long countCommas(long long n) {
	long long commas = 0 ;
    if(n == 1000000000000000) {
        commas = 5 ;
    }
    else if(n < 1000000000000000 && n > 99999999999) {
        commas = (n - 99999999999) * 4 ;
    }
    else if(n < 100000000000 && n > 99999999) {
        commas = (n - 99999999) * 3 ;
    }
    else if(n < 100000000 && n > 99999) {
        commas = (n - 99999) * 2 ;
    }
    else if(n < 100000 && n > 999) {
        commas = (n - 999) * 1 ;
    }
    else {
        commas = 0 ;
    }
    return commas ;
}*/