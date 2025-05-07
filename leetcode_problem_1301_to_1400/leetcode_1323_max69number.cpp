
// 1323. MAXIMUM 69 NUMBER

#include<iostream>
#include<vector>
#include<cmath>

using namespace std ;

int maximum69Number(int num) {
	vector<int> numbers ;
    while(num){
        numbers.push_back(num%10) ;
        num /= 10 ;
    }
    for(int i=numbers.size()-1; i>=0; --i){
        if(numbers[i] == 6){
            numbers[i] = 9 ;
            break ;
        }
    }
    int maxNum = 0 ;
    for(int i=numbers.size()-1; i>=0; --i) {
        maxNum += ((numbers[i])*(pow(10, i))) ;
    }
    return maxNum ;
}

int main(){
	int num, maxNum;
	
	cout << endl ;
	cout << "  MAXIMUM 69 NUMBER " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter a positive integer :  " ;
	cin >> num ;	
	
    maxNum = maximum69Number(num) ;
	
	cout << "Maximim Number = " << maxNum << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}