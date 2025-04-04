
// 693. BINARY NUMBER WITH ALTERNATING BITS

#include<iostream>

using namespace std ;

bool hasAlternatingBits(int n)
{
	int x, y ;
	bool FLAG = 0 ;
	while(n)
	{
		x = n&1 ;
		n >>= 1 ;
		y = n&1 ;
		// if(x != y)
		if(x^y != 0)
		{
			FLAG = 1 ;
			continue ;
		}
		else 
		{
			FLAG = 0 ;
			break ;
		}
	}
	if(FLAG == 1)
		return true ;
	else 
		return false ;
}

// if((n&1) != ((n>>=1)&1))

int main()
{
	int n ;
	bool r ;
	
	cout << endl ;
	cout << " BINARY NUMBER WITH ALTERNATING BITS " << endl ;
	cout << "--------*********************--------" << endl ;
	
	cout << endl << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> n ;
	
	r = hasAlternatingBits(n) ;
	
	cout << endl ;
	if(r == 1)
	{
		cout << n << " has alternating bits..." ;
	}
	else
	{
		cout << n << " has not alternating bits..." ;
	}
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}