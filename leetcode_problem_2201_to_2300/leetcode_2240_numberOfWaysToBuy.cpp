
// 2240. NUMBER OF WAYS TO BUY PENS AND PENCILS

#include<iostream>

using namespace std ;

long long wayToBuyPensPencils(int total, int cost1, int cost2) {
	long long ans = 0 ;
	for(int i=0; i<=total/cost1; ++i) {
		int t = total-(cost1*i) ;
		ans += ((t/cost2)+1) ;
	}
	return ans ;
}

int main() {
	int total, cost1, cost2 ;
	long long ans ;
	
	cout << endl ;
	cout << "  NUMBER OF WAYS TO BUY PENS AND PENCILS " << endl ;
	cout << " ----------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter total : " ;
	cin >> total ;
	
	cout << endl ;
	cout << "Enter cost1 : " ;
	cin >> cost1 ;
	
	cout << endl ;
	cout << "Enter cost2 : " ;
	cin >> cost2 ;
	
	ans = wayToBuyPensPencils(total, cost1, cost2) ;
	
	cout << endl ;
	cout << "Number of ways to buy pens and pencils = " << ans << endl ;
	
	cout <<  endl ;
	
	system("pause") ;
	
	return 0 ;
}