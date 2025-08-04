
// 1047. REMOVE ALL ADJACENT DUPLICATES IN STRING

#include<iostream>
#include<stack>

using namespace std ;

string removeDuplicates(string s) {
    int n = s.length() ;
    string str1 = "", str2 = "" ;
    for(int i=n-1; i>=0; --i) {
        str1 += s[i] ;
    }
    str2 += str1.back() ;
    str1.pop_back() ;
    while(!str1.empty()) {
        if(str2.empty() || str1.back() != str2.back()) {
            str2 += str1.back() ;
        }
        else {
            str2.pop_back() ;
        }
        str1.pop_back() ;
    }
    return str2 ;
}

//** USING STACK **//
/*string removeDuplicates(string s) {	
	int n = s.length() ;
    stack<char> st1 ;
    stack<char> st2 ;
    for(int i=0; i<n; ++i) {
        st1.push(s[i]) ;
    }
    st2.push(st1.top()) ;
    st1.pop() ;
    while(!st1.empty()) {
        if(st2.empty() || st1.top() != st2.top()) {
            st2.push(st1.top()) ;
        }
        else {
            st2.pop() ;
        }

        st1.pop() ;
    }
    string res ;
    while(!st2.empty()) {
        res += st2.top() ;
        st2.pop() ;
    }
    return res ;
}*/

int main() {
	string s, ans ;
	
	cout << endl ;
	cout << "  REMOVE ALL ADJACENT DUPLICATES IN STRING " << endl ;
	cout << " ******************************************" << endl ;
	
	cout << endl ;
	cout << "Enter a string...." << endl ;
	cin >> s ;
	
	ans = removeDuplicates(s) ;
	
	cout << endl ;
	cout << "Final string.... " << endl ;
	cout << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*string removeDuplicates(string s) {	
	int n = s.length() ;
	stack<char> st1 ;
	stack<char> st2 ;
	for(int i=0; i<n; ++i) {
		st1.push(s[i]) ;
	}
	while(!st1.empty()) { //cout << "\ni = " << i << endl ;
		char top = st1.top() ;  cout << "top = " << top << endl ;
		st1.pop() ;
		if(st1.empty()) {
			st2.push(top) ;
			break ;
		}
		if(top != st1.top()) {
			st2.push(top) ;
		}
		else {
			st1.pop() ;
			st1.push(st2.top()) ;
			st2.pop() ;
		}  cout << "st1.top = " << st1.top() << endl ;  cout << "st2.top = " << st2.top() << endl ;
	}
	string res ;
	while(!st2.empty()) {
		res += st2.top() ;
		st2.pop() ;
	}
	return res ;
}*/



	// cout << endl << "st1 = " ;
	// for(int i=0; i<st1.size(); ++i) {
		// cout << "--" << st1.top() ;
		// st1.pop() ;
	// }
	// cout << endl << "st2 = " ;
	// for(int i=0; i<st2.size(); ++i) {
		// cout << "--" << st2.top() ;
		// st2.pop() ;
	// }

/*string removeDuplicates(string s) {
	int n = s.length() ;
	for(int i=0; i<n-1; ++i) {
		if(s[i] == s[i+1]) {
			s.erase(i,i+1) ;
			// s.erase(i,2) ;
			cout << "s = " << s << endl ;
			--i ;
		}
	}
	return s ;
}*/