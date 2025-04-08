
// 509. FIBONACCI NUMBER

#include<iostream>

using namespace std ;

int fib(int n)
{
	if(n == 0)
		return 0 ;
	else if(n == 1)
		return 1 ;
	else
		return (fib(n-2)+fib(n-1)) ;
}

int main()
{
	int n, r ;
	
	cout << endl ;
	cout << "  FIBONACCI NUMBER " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> n ;
	
	r = fib(n) ;
	
	cout << endl << "fib(" << n << ") = " << r ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}