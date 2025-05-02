
// 2011. FINAL VALUE OF VARIABLE AFTER PERFORMING OPERATIONS

#include<iostream>
#include<vector>
#include<cstring>

using namespace std ;

/*int finalValueAfterOperations(vector<string> & operations){
	int x = 0 ;
	for(int i=0; i<operations.size(); ++i){
		if((operations.at(i)).at(1) == '+' )
			++x ;
		if((operations.at(i)).at(1) == '-' )
			--x ;
	}
	return x ;
}*/

int finalValueAfterOperations(vector<string> & operations) {
	int x = 0 ;
    for(int i=0; i<operations.size(); ++i)
        (operations[i][1] == '+') ? ++x : --x ;
    return x ;
}

int main(){
	string operation ;
	vector<string> operations ;
	int l ;
	
	cout << endl ;
	cout << "  FINAL VALUE OF VARIABLE AFTER PERFORMING OPERATIONS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter operations....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> operation ;
		operations.push_back(operation) ;
	}
	
	l = finalValueAfterOperations(operations) ;
	
	cout << endl ;
	cout << "Final Value = " << l << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}