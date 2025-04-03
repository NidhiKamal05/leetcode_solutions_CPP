
// 1009. COMPLEMENT OF BASE 10 INTEGER

#include<iostream>

using namespace std ;

int bitwiseComplement(int n)
{
	if(n == 0)
		return 1 ;
	int t = n ;
	int c = 0 ;
	int r = INT_MAX ;
	while(t > 0)
	{
		t >>= 1 ; 
		++c ;   
	}
	for(int i=1; i<32-c; ++i)
	{
		r >>= 1 ; 
	}
	r -= n ; 
	return r ;
}

int main()
{
	int n ;
	int r ;
	
	cout << endl ;
	cout << " COMPLEMENT OF BASE 10 INTEGER " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> n ;
	
	r = bitwiseComplement(n) ;
	
	cout << endl ;
	cout << "Complement of " << n << " = " << r ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}