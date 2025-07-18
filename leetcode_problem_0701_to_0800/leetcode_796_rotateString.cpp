
// 796. ROTATE STRING

#include<iostream>

using namespace std ;

bool rotateString(string s, string goal) {
    if(s.length() != goal.length()) {
        return false ;
    }
    string str = s + s ;
    if(str.find(goal) != string::npos) {
        return true ;
    }
    return false ;
}

// O(N^2)
/*bool rotateString(string s, string goal) {
	if(s.length() != goal.length()) {
        return false ;
    }
	string t = s ;
	t.append(s) ;
	for(int i=0; i<goal.length(); ++i) {
		string r ;
		for(int j=i; j<(i+goal.length()); ++j) {
			r += t[j] ;
		}
		if(r == goal) {
			return true ;
		}
		r.clear() ;
	}
	return false ;
}*/

int main() {
	string s, goal ;
	bool ans ;
	
	cout << endl ;
	cout << "  ROTATE STRING " << endl ;
	cout << " ^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter a string, goal = " ;
	cin >> goal ;
	
	ans = rotateString(s, goal) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



// for(int i=0; i<goal.length(); ++i) {
		// for(int j=0; j<t.length(); ++j) {
			// if(cnt == goal.length()) {
				// return true ;
			// }
			// if(goal[i] == t[j]) {
				// ++cnt ;
				// break ;
			// }
			// else {
				// cnt = 0 ;
			// }
		// }
	// }