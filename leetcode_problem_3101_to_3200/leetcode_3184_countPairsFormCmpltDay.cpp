
// 3184. COUNT PAIRS THAT FORM A COMPLETE DAY I

#include<iostream>
#include<vector>

using namespace std ;

int countCompleteDayPairs(vector<int> & hours){
	int cnt = 0 ;
	for(int i=0; i<hours.size()-1; ++i)
		for(int j=i+1; j<hours.size(); ++j)
			if((hours.at(i)+hours.at(j))%24 == 0)
				++cnt ;
	return cnt ;
}

int main(){
	vector<int> hours{} ;
	int l, e ;
	
	cout << endl ;
	cout << "  COUNT PAIRS THAT FORM A COMPLETE DAY I " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter hours....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		hours.push_back(e) ;
	}
	
	e = countCompleteDayPairs(hours) ;
	
	cout << endl ;
	cout << "Count of pairs that form a complete day = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}