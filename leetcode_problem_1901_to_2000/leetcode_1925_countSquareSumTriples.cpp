
// 1925. COUNT SQUARE SUM TRIPLES

#include<iostream>

using namespace std ;

int countTriples(int n){
	int cnt = 0 ;
	for(int a=1; a<=n; ++a)
		for(int b=1; b<=n; ++b)
			for(int c=1; c<=n; ++c)
				if(((a*a)+(b*b)) == (c*c))
					++cnt ;
	return cnt ;
}

int main()
{
	int n, cnt ;
	
	cout << endl ;
	cout << " COUNT SQUARE SUM TRIPLES " << endl ;
	cout << "``````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "n = " ;
	cin >> n ;
	
	cnt = countTriples(n) ;
	
	cout << endl ;
	cout << "Count = " << cnt << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}