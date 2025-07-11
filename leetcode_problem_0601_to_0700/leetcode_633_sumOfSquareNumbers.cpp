
// 633. SUM OF SQUARE NUMBERS

#include<iostream>

using namespace std ;

bool judgeSquareSum(int c) {
	for(long a=0; a*a <= c; ++a) {
        double b = sqrt(c - (a * a)) ;
        if(b == (int)b) {
            return true ;
        }
    }
    return false ;
}

// O(c) TIME LIMIT EXCEEDED
/*bool judgeSquareSum(int c) {
    for(long a=0; a*a <= c; ++a) {
        for(long b=0; b*b <= c; ++b) {
            if(a*a + b*b == c) {
                return true ;
            }
        }
    }
    return false ;
}*/

int main() {
	int c ;
	bool ans ;
	
	cout << endl ;
	cout << "  SUM OF SQUARE NUMBERS " << endl ;
	cout << " ***********************" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, c = " ;
	cin >> c ;
	
	ans = judgeSquareSum(c) ;
	
	cout << endl ;
	if(ans) cout << "TRUE...." << endl ;
	else cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}