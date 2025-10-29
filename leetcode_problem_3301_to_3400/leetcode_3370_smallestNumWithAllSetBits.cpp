
// 3370. SMALLEST NUMBER WITH ALL SET BITS

#include<iostream>

using namespace std ;

int smallestNumber(int n) {
    int x = 1 ;
    while(x <= n) {
        x <<= 1 ;   // x *= 2 ;
    }
    return x - 1 ;
}

int main() {
	int e, n ;
	
	cout << endl ;
	cout << "  SMALLEST NUMBER WITH ALL SET BITS " << endl ;
	cout << " ..................................." << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	cout << endl ;
    e = smallestNumber(n) ;
	
	cout << "Smallest number greater than or equal to " << n << " = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


	
/*int smallestNumber(int n) {
	for(int i=n; i<=1024; ++i) {
		int s = i ;
		while(s%2 == 0) {
			s /= 2 ;
		}
		if(s == 1) {
			if(i == n) {
				return n ;
			}
			else {
				return i-1 ;
			}
		}
	}
	return -1 ;
}*/