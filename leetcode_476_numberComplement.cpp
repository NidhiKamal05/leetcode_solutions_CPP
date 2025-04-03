
// 476. NUMBER COMPLEMENT

#include<iostream>

using namespace std ;

int findComplement(int num)
{
    if(num == 0)
		return 1 ;
	int t = num ;
	int x = 0 ;
	while(t)
	{
		x <<= 1 ;
		x |= 1 ;
		t >>= 1 ;
	}
	return (x - num) ;
	// return ((~num)&x) ;
}

int main()
{
	int num ;
	int r ;
	
	cout << endl ;
	cout << " NUMBER COMPLEMENT " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> num ;
	
	r = findComplement(num) ;
	
	cout << endl ;
	cout << "Complement of " << num << " = " << r ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}