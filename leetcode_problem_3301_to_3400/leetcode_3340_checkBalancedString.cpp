
// 3340. CHECK BALANCED STRING

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/check-balanced-string/solutions/8295144/c-runtime-0-ms-solution-beats-100-by-nid-j83n/

/* JAVA */
// https://leetcode.com/problems/check-balanced-string/solutions/8295155/java-easy-solution-runtime-beats-9865-me-11zj/

#include<iostream>

using namespace std ;

bool isBalanced(string num) {
	int oddSum = 0, evenSum = 0 ;
	for(int i = 0; i < num.length(); ++i) {
		if(i % 2 == 0) {
			evenSum += num[i] - '0' ;
		}
		else {
			oddSum += num[i] - '0' ;
		}
	}
	return oddSum == evenSum ;
}

int main() {
	string num ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK BALANCED STRING " << endl ;
	cout << " -----------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string consisting only digits...." << endl ;
	cin >> num ;
	
	ans = isBalanced(num) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}