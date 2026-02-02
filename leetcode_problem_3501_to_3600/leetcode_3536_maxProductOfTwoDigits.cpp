
// 3536. MAXIMUM PRODUCT OF TWO DIGITS

#include<iostream>
#include<utility>

using namespace std ;

int maxProduct(int n) {
    int max1 = 0, max2 = 0 ;
    while(n) {
        int digit = n % 10 ;
        if(digit >= max1) {
            max2 = exchange(max1, digit) ;   /** max2 <- max1 <- digit **/ 
        }
        else if(digit >= max2) {
            max2 = digit ;
        }
        n /= 10 ;
    }
    return max1 * max2 ;
}

int main() {
	int n, maximumProduct ;
	
	cout << endl ;
	cout << "  MAXIMUM PRODUCT OF TWO DIGITS " << endl ;
	cout << " ```````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	maximumProduct = maxProduct(n) ;
	
	cout << endl ;
	cout << "Maximum Product = " << maximumProduct << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}