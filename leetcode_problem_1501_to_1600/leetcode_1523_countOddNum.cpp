
// 1523. COUNT ODD NUMBERS IN AN INTERVAL

#include<iostream>

using namespace std ;

int countOdds(int low, int high) {
    int cnt = 0 ;
    for(int i=low; i<=high; ++i)
        if(i%2 != 0)
            ++cnt ;
    return cnt ;
}

/*int countOdds(int low, int high){
	if((low%2 == 0)&&(high%2 == 0)){
		++low ;
		--high ;
	}
	else if(low%2 == 0)
		++low ;
	else if(high%2 == 0)
		--high ;
	int cnt = 0 ;
	for(int i=low; i<=high; ++i)
		if(i%2 != 0)
			++cnt ;
	return cnt ;
}*/

int main(){
	int low, high, countOdd ;
	
	cout << endl ;
	cout << "  COUNT ODD NUMBERS IN AN INTERVAL " << endl ;
	cout << " ==================================" << endl ;
	
	cout << endl ;
	cout << "Enter range...." << endl ;
	cout << "low = " ;
	cin >> low ;
	cout << "high = " ;
	cin >> high ;
	
	countOdd = countOdds(low, high) ;
	
	cout << endl ;
	cout << "Count of odd numbers = " << countOdd << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}