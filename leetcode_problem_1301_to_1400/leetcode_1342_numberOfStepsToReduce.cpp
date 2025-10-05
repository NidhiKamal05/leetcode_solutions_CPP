
// 1342. NUMBER OF STEPS TO REDUCE A NUMBER TO ZERO

#include<iostream>

using namespace std ;

int numberOfSteps(int num) {
	int steps = 0 ;
	while(num) {
		if(num%2) {
			--num ;
		}
		else {
			num >>= 1 ;
		}
		++steps ;
	}
	return steps ;
}

int main() {
	int num, steps ;
	
	cout << endl ;
	cout << "  NUMBER OF STEPS TO REDUCE A NUMBER TO ZERO " << endl ;
	cout << " ````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, num = " ;
	cin >> num ;
	
	cout << endl ;
	
    steps = numberOfSteps(num) ;
	
	cout << "Number of steps = " << steps << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}