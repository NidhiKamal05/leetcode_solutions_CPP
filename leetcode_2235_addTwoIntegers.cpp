
// 2235. ADD TWO INTEGERS

#include<iostream>

using namespace std ;

int addInt(int a, int b)
{
	return (a+b) ;
}

int main()
{
	int a, b, sum ;
	
	cout << endl ;
	cout << " ADD TWO INTEGERS " << endl ;
	cout << "==================" << endl ;
	
	cout << endl ;
	cout << "Enter two integers....." << endl ;
	cout << "a = " ;
	cin >> a ;
	cout << "b = " ;
	cin >> b ;
	
	sum = addInt(a, b) ;
	
	cout << endl ;
	cout << "Sum of " << a << " and " << b << " = " << sum << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}	