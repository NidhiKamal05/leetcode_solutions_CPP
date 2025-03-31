
// 69. Sqrt(x)

#include<iostream>

using namespace std ;

int mySqrt(int x)
{
	if(x == 0)
		return x ;
	if(x == 1)
		return x ;
	int start, mid, end ;
	start = 0 ;
	end = x ;
	while(1)
	{
		mid = ((start+end)/2) ;
		if((start>=end)||(mid==start)||(mid==end))
			break ;
		// if((mid*mid) == x)                       (mid*mid),RUNTIME ERROR
		if(mid == (x/mid))
			break ;
		    // return mid ;
		// else if((mid*mid) < x)                   (mid*mid),RUNTIME ERROR
		else if(mid < (x/mid))
			start = mid ;
		else
			end = mid ;
	}
	return mid ;
}

int main()
{
	int x, y ;
	
	cout << endl ;
	cout << "  SQRT  " << endl ;
	cout << " --**-- " << endl ;	
	
	cout << "x = " ;
	cin >> x ;
	
	y = mySqrt(x) ;
	
	cout << "Square root of " << x << " : " << y << endl ;
	
	system("pause") ;
	
	return 0 ;
}

// mid = (start+((end-start)/2)) ;

	// return end ;