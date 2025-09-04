
// 3516. FIND CLOSEST PERSON

#include<iostream>

using namespace std ;

int findClosest(int x, int y, int z) {
    return abs(x - z) < abs(y - z) ? 1 : (abs(x - z) > abs(y - z) ? 2 : 0) ;
}

int main() {
	int ans, x, y, z ;
	
	cout << endl ;
	cout << "  FIND CLOSEST PERSON " << endl ;
	cout << " =====================" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, x = " ;
	cin >> x ;
	
	cout << endl ;
	cout << "Enter an integer, y = " ;
	cin >> y ;
	
	cout << endl ;
	cout << "Enter an integer, z = " ;
	cin >> z ;
	
	ans = findClosest(x, y, z) ;
	
	cout << endl ;
	cout << "Closest person = " << ans << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}