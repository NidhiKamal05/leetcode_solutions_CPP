
// 2894. DIVISIBLE AND NON-DIVISIBLE SUMS DIFFERENCE

#include<iostream>

using namespace std ;

int differenceOfSums(int n, int m){
	int num1 = 0, num2 = 0 ;
	for(int i=1; i<=n; ++i){
		if(i%m == 0)
			num2 += i ;
		else
			num1 += i ;
	}
	return num1-num2 ;
}

int main(){
	int n, m, difference ;
	
	cout << endl ;
	cout << "  DIVISIBLE AND NON-DIVISIBLE SUMS DIFFERENCE " << endl ;
	cout << " =============================================" << endl ;
	
	cout << endl ;
	cout << "n = " ;
	cin >> n ;
	cout << "m = " ;
	cin >> m ;
	
	difference = differenceOfSums(n, m) ;
	
	cout << endl ;
	cout << "Difference of sums = " << difference << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}