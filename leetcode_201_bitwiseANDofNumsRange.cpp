
// 201. BITWISE AND OF NUMBERS RANGE

#include<iostream>

using namespace std ;

int rangeBitwiseAnd(int left, int right)
{
	int n=0 ;
	if(left == right)
	{
		n = left ;
	}
	else
	{
		int count = 0 ;
		while(left != right)
		{
			left >>= 1 ;
			right >>= 1 ;
			++count ;
		}
		n = left<<count ;
	}
	return n ;
}

// int rangeBitwiseAnd(int left, int right)
// {
	// int n=0 ;
	// if(left == right)
	// {
		// // n = left&right ;
		// n = left ;
		// return n ;
	// }
	// if((left == 1)||(left == 0))
	// {
		// n = 0 ;
		// return n ;
	// }
	// int i ;
	// n|=left ;
	// for(i=left+1; i<right; ++i)
	// {
		// n&=i ;
	// }
	// n&=i ;
	// return n ;
// }

int main()
{
	int left, right, n ;
	
	cout << endl ;
	cout << " 'BITWISE AND' OF NUMBERS RANGE " << endl ;
	cout << "------********************------" << endl ;
	
	cout << endl ;
	cout << "Enter numbers range....." << endl ;
	cout << "left = " ;
	cin >> left ;
	cout << "right = " ;
	cin >> right ;
	
	n = rangeBitwiseAnd(left, right) ;
	
	cout << endl ;
	cout << "Bitwise AND of Numbers Range, [" << left << "," << right << "] = " << n ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}