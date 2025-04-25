
// 3248. SNAKE IN MATRIX

#include<iostream>
#include<vector>

using namespace std ;

int finalPositionOfSnake(int n, vector<string> & commands){
	int i = 0, j = 0 ;
	for(int k=0; k<commands.size(); ++k){
		if(commands.at(k) == "UP")
			--i ; 
		else if(commands.at(k) == "RIGHT")
			++j ; 
		else if(commands.at(k) == "DOWN")
			++i ; 
		else
			--j ;
	}
	return ((i*n)+j) ;
}

int main(){
	string command ;
	vector<string> commands{} ;
	int n ;
	
	cout << endl ;
	cout << "  SNAKE IN MATRIX " << endl ;
	cout << " `````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; i++){
		cin >> command ;
		commands.push_back(command) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	cout << endl ;
    n = finalPositionOfSnake(n, commands) ;
	
	cout << "Position of snake = " << n << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}