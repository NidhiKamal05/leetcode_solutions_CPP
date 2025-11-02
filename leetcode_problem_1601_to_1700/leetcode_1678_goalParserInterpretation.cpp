
// 1678. GOAL PARSER INTERPRETATION

#include<iostream>

using namespace std ;

/** O(N) & O(N) **/
string interpret(string command) {
    string ans ;
    for(int i=0; i<command.length(); ++i) {
        char ch = command[i] ;
        if(ch == '(' && (i+1 < command.length()) && command[i+1] == ')') {
            ans += 'o' ;
            ++i ;
        }
        else if(ch == '(' || ch == ')') {
            continue ;
        }
        else {
            ans += ch ;
        }
    }
    return ans ;
}

/** O(N^2) & O(1) **/
/*
.................USING erase() & insert()................................
string interpret(string command) {
    for(int i=0; i<command.length(); ++i) {
        if(command[i] == '(' && (i+1 < command.length()) && command[i+1] == ')') {
            command.erase(command.begin()+i, command.begin()+i+2) ;
            command.insert(command.begin()+i, 'o') ;
            --i ;
        }
        else if(command[i] == '(' || command[i] == ')') {
            command.erase(command.begin()+i, command.begin()+i+1) ;
            --i ;
        }
    }
    return command ;
}

.................USING replace()................................
string interpret(string command) {
    for(int i=0; i<command.length(); ++i) {
        if(command[i] == '(' && (i+1 < command.length()) && command[i+1] == ')') {
            command.replace(i, 2, "o") ;
            --i ;
        }
        else if(command[i] == '(' || command[i] == ')') {
            command.replace(i, 4, "al") ;
            --i ;
        }
    }
    return command ;
}
*/

int main() {
	string command, ans ;
	
	cout << endl ;
	cout << "  GOAL PARSER INTERPRETATION " << endl ;
	cout << " ----------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string, command = " ;
	cin >> command ;
	
	ans = interpret(command) ;
	
	cout << endl ;
	cout << "After Interpretation = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}