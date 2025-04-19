
// 1720. DECODED XORed ARRAY

#include<iostream>
#include<vector>

using namespace std ;

vector<int> decode(vector<int> & encoded, int first){
	vector<int> decoded{} ;
	decoded.push_back(first) ;
	for(int i=0; i<encoded.size(); ++i)
		decoded.push_back((decoded.at(i))^(encoded.at(i))) ;
	return decoded ;
}

int main(){
	vector<int> encoded ;
	vector<int> decoded ;
	int l, e, first ;
	
	cout << endl ;
	cout << "  DECODED XORed ARRAY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		encoded.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, first = " ;
	cin >> first ;
	
	decoded = decode(encoded, first) ;
	
	cout << endl ;
	cout << "Decoded array....." << endl ;
	for(int i=0; i<decoded.size(); ++i){
		cout << " " << decoded.at(i) << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}