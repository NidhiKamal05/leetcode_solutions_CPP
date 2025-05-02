
// 2413. SMALLEST EVEN MULTIPLE

#include<iostream>

using namespace std ;

int smallestEvenMultiple(int n){
	int s ;
	for(int i=1; i<=INT_MAX; ++i){
		if((i%n == 0)&&(i%2 == 0)){
			s = i ;
			break ;
		}
	}
	return s ;
}

int smallestEvenMultiple(int n) {
    if(n%2 == 0)
        return n ;
    return 2*n ;
}

int main()
{
	int n, s;
	
	cout << endl ;
	cout << "  SMALLEST EVEN MULTIPLE " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << "Enter a positive integer.... " << endl ;
	cout << "n = " ;
	cin >> n ;
	
    s = smallestEvenMultiple(n) ;	
	
	cout << "Smallest Even Multiple = " << s << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}