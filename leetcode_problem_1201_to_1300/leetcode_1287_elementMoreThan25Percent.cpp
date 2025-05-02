
// 1287. ELEMENT APPEARING MORE THAN 25% IN SORTED ARRAY

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int findSpecialInteger(vector<int> & arr) {
	int percent25 = arr.size()/4 ;
	map<int, int> mp ;
	for(int i : arr)
		mp[i]++ ;
	map<int, int> :: iterator it ;
	for(it=mp.begin(); it!=mp.end(); ++it)
		if(it->second > percent25)
			break ;
	return it->first ;
}

int main() {
	vector<int> arr ;
	int l, e ;
	int result ;
	
	cout << endl ;
	cout << "  ELEMENT APPEARING MORE THAN 25% IN SORTED ARRAY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elemrnts of the array......."  << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		arr.push_back(e) ;
	}
	
	result = findSpecialInteger(arr) ;
	
	cout << endl ;
	cout << "Element appears more than 25% = " << result << endl ;
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}