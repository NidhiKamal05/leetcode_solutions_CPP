
// 190. REVERSE BITS

#include<iostream>
#include<cmath>

using namespace std ;

uint32_t reverseBits(uint32_t n) {
	uint32_t rev = 0 ;
	
	// int bit = 31 ;
	// while(n) {
		// int x = n&1 ;
		// if(x == 1) {
			// rev += pow(2, bit) ;
		// }
		// --bit ;
		// n >>= 1 ;
	// }
	
	for(int i=0; i<32; ++i) {
        rev <<= 1 ;
        if(n & 1) {
            rev |= 1 ;
        }
        n >>= 1 ;
    }
	
	return rev ;
}

int main(){
	uint32_t n, rev ;
	
	cout << endl ;
	cout << "  REVERSE BITS " << endl ;
	cout << " ==============" << endl ;
	
	cout << endl ;
	cout << "Enter a 32-bits unsigned integer.....\n" ;
	cin >> n ;
	
	cout << endl ;
    rev = reverseBits(n) ;
	
	cout << "Reverse = " << rev << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}