
// 3783. MIRROR DISTANCE OF AN INTEGER

/** T.C. - O(logN) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/mirror-distance-of-an-integer/solutions/7985481/c-runtime-0-ms-solution-beats-100-by-nid-t0oh/

/* JAVA */
// https://leetcode.com/problems/mirror-distance-of-an-integer/solutions/7985543/java-runtime-beats-100-memory-beats-9060-2hzr/

#include<iostream>
#include<vector>

using namespace std ;

int rev(int n) {
    int num = 0 ;
    while(n) {
        num = (num * 10) + (n % 10) ;
        n /= 10 ;
    }
    return num ;
}

int mirrorDistance(int n) {
    return abs(n - rev(n)) ;
}
	
int main() {
	int n, d ;
	
	cout << endl ;
	cout << "  MIRROR DISTANCE OF AN INTEGER " << endl ;
	cout << " ```````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
    d = mirrorDistance(n) ;
	
	cout << endl ;
	cout << "Mirror Distance = " << d << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}