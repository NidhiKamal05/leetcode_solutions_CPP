
// 2579. COUNT TOTAL NUMBER OF COLORED CELLS

#include<iostream>

using namespace std ;

//** JAVA SOLUTION **//
/*class Solution {
    public long coloredCells(int n) {
        return 1 + (long)n*(n-1)*2 ;
    }
}*/

long long coloredCells(int n) {
    long long coloredCells = 1 ;
    int addCells = 4 ;
    while(--n) {
        coloredCells += addCells ;
        addCells += 4 ;
    }
    return coloredCells ;
}

int main(){
	int n, cnt ;
	
	cout << endl ;
	cout << "  COUNT TOTAL NUMBER OF COLORED CELLS " << endl ;
	cout << " =====================================" << endl ;
	
	cout << endl ;
	cout << "Enter an integer : " ;
	cin >> n ;
	
	cout << endl ;
    cnt = coloredCells(n) ;
	
	cout << "Count of colored cells = " << cnt << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}