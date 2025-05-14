
// 371. SUM OF TWO INTEGERS

#include<iostream>
#include<vector>
#include<cmath>

using namespace std ;

int getSum(int a, int b)
{
	if(b == 0)
		return a ;
	int carry, sum ;
	sum = a^b ;
	carry = (a&b)<<1 ;
	return getSum(sum, carry) ;
}

// int getSum(int a, int b)
// {
	// int carry ;
	// while(b != 0)
	// {
		// carry = a&b ;
		// a ^= b ;
		// b = carry<<1 ;
	// }
	// return a ;
// }


/*--------MEMORY LIMIT EXCEEDED--------*/
// int getSum(int a, int b)
// {
	// int result = 0 ;
	// int i = 0 ;
	// vector<int> v{} ;
	// int x, y ;
	// int sum, carry = 0;
	// while(a || b)
	// {
		// x = a&1 ;
	    // y = b&1 ;
		// sum = x^y^carry ;
		// carry = ((x&y)|(y&carry)|(x&carry)) ;
		// v.push_back(sum) ;
		// a >>= 1 ;
	    // b >>= 1 ;
	// }
	// v.push_back(carry) ;
	// for(int i=0; i<v.size(); ++i)
		// result += (pow(2,i)*v.at(i)) ;
	// return result ;
// }

int main()
{
	int a, b, r ;
	
	cout << endl ;
	cout << " SUM OF TWO INTEGERS " << endl ;
	cout << "=====================" << endl ;
	
	cout << endl << endl ;
	cout << "Enter number....." << endl << endl ;
	cout << "a = " ;
	cin >> a ;
	cout << "b = " ;
	cin >> b ;
	
	r = getSum(a, b) ;
	
	cout << endl ;
	cout << "Sum of " << a << " and " << b << " = " << r ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}