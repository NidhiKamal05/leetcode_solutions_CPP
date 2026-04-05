
// 657. ROBOT RETURN TO ORIGIN

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/robot-return-to-origin/solutions/7787409/c-solution-0-ms-runtime-beats-100-by-nid-2cu8/

/* JAVA */
// https://leetcode.com/problems/robot-return-to-origin/solutions/7787442/java-runtime-beats-9905-easy-solution-by-vtsr/

#include<iostream>

using namespace std ;

/*bool judgeCircle(string moves) {
	int u = 0, d = 0, l = 0, r = 0 ;
	for(char c : moves) {
		if(c == 'U') {
			++u ;
		}
		else if(c == 'D') {
			++d ;
		}
		else if(c == 'R') {
			++r ;
		}
		else {
			++l ;
		}
	}
	return u == d && l == r ;
}*/

bool judgeCircle(string moves) {
	int x = 0, y = 0 ;
	for(char c : moves) {
		if(c == 'U') {
			++y ;
		}
		else if(c == 'D') {
			--y ;
		}
		else if(c == 'R') {
			++x ;
		}
		else {
			--x ;
		}
	}
	return x == 0 && y == 0 ;
}

int main() {
	string moves ;
	bool ans ;
	
	cout << endl ;
	cout << "  ROBOT RETURN TO ORIGIN " << endl ;
	cout << " ------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string containing only 'U', 'D', 'L' and 'R'......" << endl ;
	cout << "moves = " ;
	cin >> moves ;
	
    ans = judgeCircle(moves) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}