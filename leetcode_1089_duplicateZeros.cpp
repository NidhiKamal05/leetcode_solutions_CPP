
// 1089. DUPLICATE ZEROS

#include<iostream>
#include<vector>

using namespace std ;

void duplicateZeros(vector<int> & arr){
	vector<int> :: iterator itr ;
	for(int i=0; i<arr.size(); ++i){
		if(arr.at(i) == 0){
			itr = arr.begin()+i ;
 			arr.insert(itr,1,0) ;
			arr.pop_back() ;
			++i ;
		}
	}
}

int main(){
	int len, e ;
	vector<int> arr{} ;
	
	cout << endl ;
	cout << " DUPLICATE ZEROS " << endl ;
	cout << "~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter length of the array...." << endl ;
	cin >> len ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<len; ++i){
		cin >> e ;
		arr.push_back(e) ;
	}
	
	duplicateZeros(arr) ;
	
	cout << endl ;
	for(int i=0; i<arr.size(); ++i)
		cout << arr.at(i) << "  " ;
	
	cout << endl << endl ;
	system("pause") ;
	
	return 0 ;
}