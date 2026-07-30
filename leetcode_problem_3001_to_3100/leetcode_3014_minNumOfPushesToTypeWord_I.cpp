
// 3014. MINIMUM NUMBER OF PUSHES TO TYPE WORD I

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/solutions/8431186/c-on-solution-brute-force-approach-hash-5ydx7/

/* JAVA */
// https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/solutions/8431166/java-solution-tc-on-sc-o1-hash-map-by-ni-5btg/

#include<iostream>
#include<unordered_map>

using namespace std ;

int minimumPushes(string word) {
    int minPushes = 0, key = 2 ;
    unordered_map<int, int> mp ;
    for(char& c : word) {
        if(key > 9) {
            key = 2 ;
        }
        mp[key]++ ;
        minPushes += mp[key] ;
        ++key ;
    }
    return minPushes ;
}

int main() {
	string word ;
	int minPushes ;
	
	cout << endl ;
	cout << "  MINIMUM NUMBER OF PUSHES TO TYPE WORD I " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "word = " ;
	cin >> word ;
	
	minPushes = minimumPushes(word) ;
	
	cout << endl ;
	cout << "Minimum pushes = " << minPushes << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}