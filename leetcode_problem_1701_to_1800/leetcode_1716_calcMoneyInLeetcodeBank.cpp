
// 1716. CALCULATE MONEY IN LEETCODE BANK

#include<iostream>

using namespace std ;

int totalMoney(int n) {
	int money = 0, week = 1 ;
	while(n > 0) {
		int days = min(n, 7) ;
		for(int i=0; i<days; ++i) {
			money += (week + i) ;
		}
		n -= days ;
		++week ;
	}
	return money ;
}

int main() {
	int n, ans ;
	
	cout << endl ;
	cout << "  CALCULATE MONEY IN LEETCODE BANK " << endl ;
	cout << " ----------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	ans = totalMoney(n) ;
	
	cout << endl ;
	cout << "Total money = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}