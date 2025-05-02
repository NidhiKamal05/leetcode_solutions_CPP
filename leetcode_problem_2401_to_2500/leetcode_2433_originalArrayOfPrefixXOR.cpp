
// 2433. FIND THE ORIGINAL ARRAY OF PREFIX XOR

#include<iostream>
#include<vector>

using namespace std ;

vector<int> findArray(vector<int> & pref){
	vector<int> arr{} ;
	arr.push_back(pref.at(0)) ;
	for(int i=1; i<pref.size(); ++i)
			arr.push_back(pref.at(i-1)^pref.at(i)) ;
	return arr ;
}

int main(){
	vector<int> pref ;
	vector<int> arr ;
	int l, e ;
	
	cout << endl ;
	cout << "  FIND THE ORIGINAL ARRAY OF PREFIX XOR " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		pref.push_back(e) ;
	}
	
	arr = findArray(pref) ;
	
	cout << endl ;
	cout << "Original Array....." << endl ;
	for(int i=0; i<arr.size(); ++i){
		cout << " " << arr.at(i) << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}