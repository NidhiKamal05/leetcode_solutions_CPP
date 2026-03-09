
// 868. BINARY GAP

/** T.C. - O(Log N) & S.C. - O(Log N) **/

/* C++ */
// https://leetcode.com/problems/binary-gap/solutions/7599570/c-solution-runtime-beats-100-olog-n-by-n-elj2/

/* JAVA */
// https://leetcode.com/problems/binary-gap/solutions/7599638/java-very-simple-and-easy-solution-olog-i4su0/

#include<iostream>
#include<vector>

using namespace std ;

int binaryGap(int n) {
    vector<int> arr ;
    int pos = -1 ;
    while(n) {
        int bit = n & 1 ;
        ++pos ;
        if(bit == 1) {
            arr.push_back(pos) ;
        }
        n >>= 1 ;
    }
    int gap = 0 ;
    for(int i=1; i<arr.size(); ++i) {
        gap = max(arr[i] - arr[i-1], gap) ;
    }
    return gap ;
}

int main() {
	int n, gap ;
	
	cout << endl ;
	cout << "  BINARY GAP " << endl ;
	cout << " ------------" << endl ;
	
	cout << endl ;
	cout << "Enter any +ve integer, n = " ;
	cin >> n ;
	
	gap = binaryGap(n) ;
	
	cout << endl ;	
	cout << "Gap = " << gap << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}