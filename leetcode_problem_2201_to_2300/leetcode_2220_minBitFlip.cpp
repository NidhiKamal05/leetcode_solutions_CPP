
// 2220. MINIMUM BIT FLIPS TO CONVERT NUMBER

#include<iostream>
#include<vector>

using namespace std ;

int minBitFlips(int start, int goal){
	int num = (start>goal ? start : goal) ;
	int cnt = 0 ;
	while(num){
		int s = start & 1 ;
		int g = goal & 1 ;
		if(s != g)
			++cnt ;
		start >>= 1 ;
		goal >>= 1 ;
		num >>= 1 ;
	}
	return cnt ;
}

int main(){
	int start, goal, minFlip ;
	
	cout << endl ;
	cout << "  MINIMUM BIT FLIPS TO CONVERT NUMBER " << endl ;
	cout << " `````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter values....... " << endl ;
	cout << "start = " ;
	cin >> start ;
	cout << "goal = " ;
	cin >> goal ;
	
    minFlip = minBitFlips(start, goal) ;
	
	cout << "Minimum flips = " << minFlip << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}