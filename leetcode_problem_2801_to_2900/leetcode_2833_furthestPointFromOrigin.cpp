
// 2833. FURTHEST POINT FROM ORIGIN

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/furthest-point-from-origin/solutions/8095111/c-0-ms-runtime-beats-100-tc-on-sc-o1-by-xqv24/

/* JAVA */
// https://leetcode.com/problems/furthest-point-from-origin/solutions/8095123/java-solution-runtime-beats-100-on-time-wx9fv/

#include<iostream>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int l = 0, r = 0, b = 0 ;
        int dist = 0 ;
        for(char c : moves.toCharArray()) {
            if(c == 'R') {
                ++r ;
            }
            else if(c == 'L') {
                ++l ;
            }
            else {
                ++b ;
            }
        }
        dist += (r - l) ;
        dist += (r >= l) ? b : -b ;
        return Math.abs(dist) ;
    }
}*/

int furthestDistanceFromOrigin(string moves) {
	int l = 0, r = 0, b = 0 ;
	int dist = 0 ;
	for(char c : moves) {
		if(c == 'R') {
			++r ;
		}
		else if(c == 'L') {
			++l ;
		}
		else {
			++b ;
		}
	}
	// dist += r ; 
	// dist -= l ;
	dist += (r - l) ;
	dist += r >= l ? b : -b ;
	return abs(dist) ;
}

int main() {
	string moves ;
	int ans ;
	
	cout << endl ;
	cout << "  FURTHEST POINT FROM ORIGIN " << endl ;
	cout << " ----------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string containing only 'L', 'R' and '_'......" << endl ;
	cout << "moves = " ;
	cin >> moves ;
	
    ans = furthestDistanceFromOrigin(moves) ;
	
	cout << endl ;
	cout << "Furthest Distance = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}