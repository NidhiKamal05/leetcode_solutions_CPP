
// 1015. SMALLEST INTEGER DIVISIBLE BY K

#include<iostream>

using namespace std ;

int smallestRepunitDivByK(int k) {
	if(k == 1) {
		return 1 ;
	}
	if(k % 2 == 0 || k % 5 == 0) {
		return -1 ;
	}
	int len = 0, mod = 0 ;
	while(len <= k) {
		mod = (mod * 10 + 1) % k ;
		++len ;
		if(mod == 0) {
			return len ;
		}
	}
	return -1 ;
}

int main() {
	int k, ans ;
	
	cout << endl ;
	cout << "  SMALLEST INTEGER DIVISIBLE BY K " << endl ;
	cout << " `````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = smallestRepunitDivByK(k) ;
	
	cout << endl ;
	cout << "Answer = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}