
// 3178. FIND THE CHILD WHO HAS THE BALL AFTER K SECONDS

#include<iostream>

using namespace std ;

int numberOfChild(int n, int k){
	int direction = -1, i = 0 ;
	while(k != 0){
		if((i == n-1)||(i == 0))
			direction *= -1 ;
		if(direction == 1)
			++i ;
		if(direction == -1)
			--i ;
		--k ;
	}
	return i ;
}

int main(){
	int n, k, index ;
	
	cout << endl ;
	cout << "  FIND THE CHILD WHO HAS THE BALL AFTER K SECONDS " << endl ;
	cout << " `````````````````````````````````````````````````" << endl ;
	cout << endl ;
	
	cout << "Enter no. of childrens...." << endl ;
	cout << "n = " ;
	cin >> n ;
	
	cout << "Enter seconds : " ;
	cin >> k ;
	
	index = numberOfChild(n, k) ;
	
	cout << endl ;
	
	cout << "Children at index " << index << " receives the ball after " << k << " seconds" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}