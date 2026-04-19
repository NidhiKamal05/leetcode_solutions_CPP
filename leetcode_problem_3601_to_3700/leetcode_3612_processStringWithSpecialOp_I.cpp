
// 3612. PROCESS STRING WITH SPECIAL OPERATIONS I

/** T.C. - O(2^N) & S.C. - O(2^N) **/

/* C++ */
// https://leetcode.com/problems/process-string-with-special-operations-i/solutions/7995724/c-solution-string-simulation-by-nidhi_ka-lmdp/

/* JAVA */
// https://leetcode.com/problems/process-string-with-special-operations-i/solutions/7995751/java-easy-beginner-friendly-solution-by-bmaex/

#include<iostream>
#include<algorithm>

using namespace std ;

string processStr(string s) {
    string result ;
    for(char& ch : s) {
        if(ch != '*' && ch != '#' && ch != '%') {
            result += ch ;
        }
        else if(ch == '#') {
            result += result ;
        }
        else if(ch == '%') {
            reverse(result.begin(), result.end()) ;
        }
        else {
            if(!result.empty()) {
                result.pop_back() ;
            }
        }
    }
    return result ;
}

int main() {
	string s, result ;
	
	cout << endl ;
	cout << "  PROCESS STRING WITH SPECIAL OPERATIONS I " << endl ;
	cout << " ==========================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	cin >> s ;
	
	result = processStr(s) ;
	
	cout << endl ;
	cout << "Result = " << result << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




/*void rev(string& s) {
	int i = 0, j = s.length()-1 ;
	while(i < j) {
		swap(s[i++], s[j--]) ;
	}
}

string processStr(string s) {
	string result ;
	for(char& ch : s) {
		if(ch == '*') {
			result.pop_back() ;
		}
		else if(ch == '#') {
			result += result ;
		}
		else if(ch == '%') {
			// rev(result) ;
			reverse(result.begin(), result.end()) ;
		}
		else {
			result += ch ;
		}
	}
	return result ;
}*/