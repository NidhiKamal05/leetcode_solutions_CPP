
// 2582. PASS THE PILLOW

#include<iostream>

using namespace std ;

int passThePillow(int n, int time){
	int direction = -1, i = 1 ;
	while(time != 0){
		if((i == n)||(i == 1))
			direction *= -1 ;
		if(direction == 1)
			++i ;
		if(direction == -1)
			--i ;
		--time ;
	}
	return i ;
}

int main(){
	int n, time, index ;
	
	cout << endl ;
	cout << "  PASS THE PILLOW " << endl ;
	cout << " `````````````````" << endl ;
	cout << endl ;
	
	cout << "Enter no. of people...." << endl ;
	cout << "n = " ;
	cin >> n ;
	
	cout << "Enter time : " ;
	cin >> time ;
	
	index = passThePillow(n, time) ;
	
	cout << endl ;
	
	cout << index << " is the index of the person holding the pilow after " << time << " seconds" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}