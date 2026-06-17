
// 3614. PROCESS STRING WITH SPECIAL OPERATIONS II

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/process-string-with-special-operations-ii/solutions/8340218/c-solution-tc-on-sc-o1-by-nidhi_kamal-0za3/

/* JAVA */
// https://leetcode.com/problems/process-string-with-special-operations-ii/solutions/8340223/java-solution-reverse-simulation-by-nidh-yk3r/

#include<iostream>

using namespace std ;

char processStr(string s, long long k) {
    long long n = 0 ;
    for(char& ch : s) {
        switch(ch) {
            case '*':
                if(n > 0) {
                    --n ;
                }
                break ;
            case '#':
                n *= 2 ;
                break ;
            case '%':
                break ;
            default:
                ++n ;
                break ;
        }
    }
    if(k > n - 1) {
        return '.' ;
    }
    for(int i = s.length() - 1; i >= 0; --i) {
        char c = s[i] ;
        switch(c) {
            case '*':
                ++n ;
                break ;
            case '#':
                n /= 2 ;
                if(k >= n) {
                    k -= n ;
                }
                break ;
            case '%':
                k = n - 1 - k ;
                break ;
            default:
                if(k == n - 1)
                    return c ;
                --n ;
                break ;
        }
    }
    return '.' ;
}

int main() {
	long long k ;
	string s ;
	char ch ;
	
	cout << endl ;
	cout << "  PROCESS STRING WITH SPECIAL OPERATIONS II " << endl ;
	cout << " ===========================================" << endl ;
	
	cout << endl ;
	cout << "Enter a string....." << endl ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ch = processStr(s, k) ;
	
	cout << endl ;
	cout << "Kth character = " << ch << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




/*string processStr(string s, long long k) {
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
	if(k > result.length()-1 || result.empty()) {
		return '.' ;
	}
    return result[k] ;
}*/


/*void rev(string& s) {
	int i=0, j=s.length()-1 ;
	while(i < j) {
		swap(s[i++], s[j--]) ;
	}
}

char processStr(string s, long long k) {
	string result ;
	for(char& ch : s) {
		if(ch == '*') {
			result.pop_back() ;
		}
		else if(ch == '#') {
			result += result ;
		}
		else if(ch == '%') {
			rev(result) ;
			// reverse(result.begin(), result.end()) ;
		}
		else {
			result += ch ;
		}
	}
	if(k > result.length()-1 || result.empty()) {
		return '.' ;
	}
	return result[k] ;
}*/