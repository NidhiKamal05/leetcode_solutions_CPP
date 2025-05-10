
// 2928. DISTRIBUTE CANDIES AMONG CHILDREN I

#include<iostream>
#include<vector>

using namespace std ;

int distributeCandies(int n, int limit) {
	int cnt = 0 ;
	for(int i=0; i<=limit; ++i)
		for(int j=0; j<=limit; ++j)
			for(int k=0; k<=limit; ++k)
				if(i+j+k == n)
					++cnt ;
	return cnt ;
}

int main() {
	int n, limit, e ;
	
	cout << endl ;
	cout << "  DISTRIBUTE CANDIES AMONG CHILDREN I " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter an integer, limit = " ;
	cin >> limit ;
	
    e = distributeCandies(n, limit) ;
	
	cout << endl ;
	cout << "Total no. of ways to distribute " << n << " candies among 3 children = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}