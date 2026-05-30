
// 2180. COUNT INTEGERS WITH EVEN DIGIT SUM

/** T.C. - O(N Log N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/count-integers-with-even-digit-sum/solutions/8302766/c-easy-solution-runtime-0-ms-beats-100-b-epun/

/* JAVA */
// https://leetcode.com/problems/count-integers-with-even-digit-sum/solutions/8302780/java-solution-by-nidhi_kamal-vfuk/

#include<iostream>

using namespace std ;

int countEven(int num) {
	int cnt = 0 ;
	for(int i = 1; i <= num; ++i) {
		int n = i ;
		int sum = 0 ;
		while(n) {
			sum += (n % 10) ;
			n /= 10 ;
		}
		if(sum % 2 == 0) {
			++cnt ;
		}
	}
	return cnt ;
}

int main() {
	int num, cnt ;
	
	cout << endl ;
	cout << "  COUNT INTEGERS WITH EVEN DIGIT SUM " << endl ;
	cout << " ````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> num ;
	
    cnt = countEven(num) ;
	
	cout << endl ;
	cout << "Count = " << cnt << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}