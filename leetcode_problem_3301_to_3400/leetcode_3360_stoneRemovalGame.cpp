
// 3360. STONE REMOVAL GAME

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/stone-removal-game/solutions/8625721/c-0-ms-o1-solution-runtime-beats-100-by-eyhkr/

/* JAVA */
// https://leetcode.com/problems/stone-removal-game/solutions/8625722/java-solution-runtime-100-o1-time-o1-spa-e9cg/

#include<iostream>

using namespace std ;

bool canAliceWin(int n) {
	int remove = 10 ;
    bool isAliceTurn = true ;
    while(n >= remove) {
        n -= remove ;
        --remove ;
        // isAliceTurn = isAliceTurn ? false : true ;
        isAliceTurn = !isAliceTurn ;
    }
    return !isAliceTurn ;
}

int main() {
	int n ;
	bool ans ;
	
	cout << endl ;
	cout << "  STONE REMOVAL GAME " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	ans = canAliceWin(n) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}