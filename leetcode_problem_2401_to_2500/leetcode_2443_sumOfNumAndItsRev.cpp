
// 2443. SUM OF NUMBER AND ITS REVERSE

#include<iostream>

using namespace std ;

bool sumOfNumberAndReverse(int num) {
	int rev = 0, x = 0 ;
    for(int n=0; n<=num; ++n) {
        rev = 0 ;
        x = n ;
        while(x) {
            rev = ((rev * 10) + (x % 10)) ;
            x /= 10 ;
        }
        if(n + rev == num) {
            return true ;
        }
    }
    return false ;
}

int main() {
	int num ;
	bool ans ;
	
	cout << endl ;
	cout << "  SUM OF NUMBER AND ITS REVERSE " << endl ;
	cout << " ===============================" << endl ;
	
	cout << endl ;	
	cout << "Enter a number...." << endl ;
	cin >> num ;
	
	ans = sumOfNumberAndReverse(num) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}