
// 2177. FIND THREE COSECUTIVE INTEGERS THAT SUM TO A GIVEN NUMBER

#include<iostream>
#include<vector> 

using namespace std ;

/*
According to problem, 
the three consecutive number whose sum is num be
*(x - 1)*, *x* and *(x + 1)*

That means, 
*(x-1) + x + (x+1) = num*
*x + x + x - 1 + 1 = num*
*3x = num*
*x = num/3*

Thus, the three consecutive numbers are :
(i) *(num / 3) - 1*
(ii) *num / 3*
(iii) *(num / 3) + 1*
*/

vector<long long> sumOfThree(long long num) {
	if(num%3 != 0) {
        return {} ;
    }
    long long n = num/3 ;
    return {n-1, n, n+1} ;
}

int main() {
	vector<long long> ans ;
	long long num ;
	
	cout << endl ;
	cout << "  FIND THREE COSECUTIVE INTEGERS THAT SUM TO A GIVEN NUMBER " << endl ;
	cout << " -----------------------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter an integer,\n num = " ;
	cin >> num ;
	
	ans = sumOfThree(num) ;
	
	cout << endl ;
	cout << "Resultant array......."  << endl ;
	for(int i : ans) {
		cout << " " << i << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}

//***** TIME LIMIT EXCEEDED
/*vector<long long> sumOfThree(long long num) {
	long long n = num/3 ;
	vector<long long> ans ;
	for(long long x=0; x<=n; ++x) {
		if(3*x == num) {
			ans.push_back(x-1) ;
			ans.push_back(x) ;
			ans.push_back(x+1) ;
		}
	}
	return ans ;
}*/