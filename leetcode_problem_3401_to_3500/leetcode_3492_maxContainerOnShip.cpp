
// 3492. MAXIMUM CONTAINERS ON A SHIP

#include<iostream>

using namespace std ;

int maxContainers(int n, int w, int maxWeight) {
	return min(n * n, maxWeight / w) ;
}

int main() {
	int n, w, maxWeight, ans ;
	
	cout << endl ;
	cout << "  MAXIMUM CONTAINERS ON A SHIP " << endl ;
	cout << " ------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter an integer, w = " ;
	cin >> w ;
	
	cout << endl ;
	cout << "Enter an integer, maxWeight = " ;
	cin >> maxWeight ;
	
	cout << endl ;
    ans = maxContainers(n, w, maxWeight) ;
	
	cout << "Maximum Container = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}