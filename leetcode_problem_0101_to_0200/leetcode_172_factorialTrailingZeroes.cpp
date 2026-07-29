
// 172. FACTORIAL TRAILING ZEROES

/** T.C. - O(log N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/factorial-trailing-zeroes/solutions/8428793/c-0-ms-runtime-beats-100-olog-n-time-by-q6rrg/

/* JAVA */
// https://leetcode.com/problems/factorial-trailing-zeroes/solutions/8428806/java-beats-100-runtime-0-ms-count-factor-wkmd/

#include<iostream>

using namespace std ;

/** No. of 5's = No. of trailing zeroes in factorial
  * E.G. :- 125! -> (125/5 = 25) -> (25/5 = 5) -> (5/5 = 1)
			125! -> 25 + 5 + 1 = 31 (total 31 5's means 31 0's)
**/

/** Count factors of 5 in n! to determine trailing zeroes. **/

int trailingZeroes(int n) {
	int zeroes = 0 ;
    while(n >= 5) {
        zeroes += (n /= 5) ;
    }
    return zeroes ;
}

int main() {
	int n, z ;
	
	cout << endl ;
	cout << "  FACTORIAL TRAILING ZEROES  " << endl ;
	cout << " ------***************------ " << endl ;
	
	cout << endl ;
	cout << "Enter a number...." << endl ;
	cout << "n = " ;
	cin >> n ;
	
	z = trailingZeroes(n) ;
	
	cout << endl ;
	cout << "Factorial trailing zeroes = " << z << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*int trailingZeroes(int n)
{
	int count = 0 ;
	if((0<=n)&&(n<=4))
	{
		count = 0 ;
		return count ;
	}
	if(n>4){
		int fact = 1 ;
	    for(int i=n; i>0; --i)
	    {
	    	fact*=i ;
	    }
		cout << "Fact... = " << fact << endl ;
	    if(fact%10 == 0)
	    {
			do
			{
	    	    ++count ;
			    fact/=10 ;
			}
			while(fact%10 == 0) ;
	    }
	    return count ;
	}
	return count ;
}*/