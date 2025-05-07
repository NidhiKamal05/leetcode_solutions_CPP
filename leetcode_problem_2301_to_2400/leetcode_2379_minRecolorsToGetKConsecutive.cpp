
// 2379. MINIMUM RECOLORS TO GET K CONSECUTIVE BLACK BLOCKS

#include<iostream>

using namespace std ;

int minimumRecolors(string blocks, int k) {
	int n = blocks.length() ;
	int minOp = 101 ;
	for(int i=0; i<=n-k; ++i) {
		int white = 0 ;
		for(int j=i; j<i+k; ++j) {
			if(blocks[j] == 'W') {
				++white ;
			}
		}
		minOp = min(white, minOp) ;
	}
	return minOp ;
}

int main() {
	string blocks ;
	int k, minOp ;
	
	cout << endl ;
	cout << "  MINIMUM RECOLORS TO GET K CONSECUTIVE BLACK BLOCKS " << endl ;
	cout << " ````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string, blocks(W and B)....\n" ;
	cin >> blocks ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	cout << endl ;
    minOp = minimumRecolors(blocks, k) ;
	
	cout << "Minimum Recolors = " << minOp << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}