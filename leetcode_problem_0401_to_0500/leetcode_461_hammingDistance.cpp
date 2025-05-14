
// 461. HAMMING DISTANCE

#include<iostream>

using namespace std ;

int hammingDistance(int x, int y)
{
	if(x == y)
		return 0 ;
	int t, m ;
	int c = 0 ;
	(x > y) ? (t=x) : (t=y) ;
	while(t)
	{
		m = ((x&1)^(y&1)) ;
        if(m == 1)
            ++c ;
        x >>= 1 ;	
        y >>= 1 ;
        t >>= 1 ;
	}
	return c ;
}

int main()
{
	int x, y ;
	int r ;
	
	cout << endl ;
	cout << " HAMMING DISTANCE " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter 1st number....." << endl ;
	cout << "x = " ;
	cin >> x ;
	cout << endl ;
	cout << "Enter 2nd number....." << endl ;
	cout << "y = " ;
	cin >> y ;
	
	r = hammingDistance(x, y) ;
	
	cout << endl ;
	cout << "Hamming Distance between " << x << " and " << y << " = " << r ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}