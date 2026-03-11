
// 1404. NUMBER OF STEPS TO REDUCE A NUMBER IN BINARY REPRESENTATION TO ONE

/** T.C. - O(N^2) S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/solutions/7610636/c-solution-runtime-beats-100-o1-space-by-a9iw/

/* JAVA */
// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-in-binary-representation-to-one/solutions/7610680/java-solution-by-nidhi_kamal-bxtu/

#include<iostream>

using namespace std ;

int numSteps(string s) {
    int steps = 0 ;
    while(s.size() > 1) {
        int n = s.size() ;
        if(s[n - 1] == '0') {
            s.pop_back() ;
        }
        else {
            --n ;
            while(n >= 0 && s[n] != '0') {
                s[n] = '0' ;
                --n ;
            }
            if(n < 0) {
                s = '1' + s ;
            }
            else {
                s[n] = '1' ;
            }
        }
        ++steps ;
    }
    return steps ;
}

int main() {
	string s ;
	int steps ;
	
	cout << endl ;
	cout << "  NUMBER OF STEPS TO REDUCE A NUMBER IN BINARY REPRESENTATION TO ONE " << endl ;
	cout << " --------------------------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string, s = " ;
	cin >> s ;
	
	steps = numSteps(s) ;
	
	cout << endl ;	
	cout << "Steps = " << steps << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** RUNTIME ERROR **/
// class Solution {
// public:
    // int numSteps(string s) {
        // int num = 0, n = 0 ;
        // for(int i=s.size()-1; i>=0; --i) {
            // num += pow(2, n++) * (s[i] - '0') ;
        // }
        // cout << num ;
        // int steps = 0 ;
        // while(num > 1) {
            // if(num % 2) {
                // ++num ;
            // }
            // else {
                // num /= 2 ;
            // }
            // ++steps ;
        // }
        // return steps ;
    // }
// };