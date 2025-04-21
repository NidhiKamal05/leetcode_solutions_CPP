
// 2427. NUMBER OF COMMON FACTORS

#include<iostream>

using namespace std ;

int commonFactors(int a, int b){
	int low = ((a<b)?a:b) ;
	int cnt = 0 ;
	for(int i=1; i<=low; ++i)
		if((a%i == 0)&&(b%i == 0))
			++cnt ;
	return cnt ;
}

int main(){
	int a, b, ans ;
	
	cout << endl ;
	cout << "  NUMBER OF COMMON FACTORS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;	
	cout << "Enter two positive integers...." << endl ;
	cout << "a = " ;
	cin >> a ;
	cout << "b = " ;
	cin >> b ;
	
	ans = commonFactors(a, b) ;
	
	cout << endl ;
	cout << "Number of common factors = " << ans << endl ;
	
	cout << endl ;
	system("pause") ;
	
	return 0 ;
}
