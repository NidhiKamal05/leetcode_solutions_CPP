
// 1835. FIND XOR SUM OF ALL PAIRS BITWISE AND

#include<iostream>
#include<vector>

using namespace std ;

int getXORSum(vector<int>& arr1, vector<int>& arr2) {
	int XOR_1 = 0, XOR_2 = 0 ;
	for(int& a1 : arr1) {
		XOR_1 ^= a1 ;
	}
	for(int& a2 : arr2) {
		XOR_2 ^= a2 ;
	}
	return XOR_1 & XOR_2 ;
}

int main()
{
	vector<int> arr1, arr2 ;
	int len, e ;
	
	cout << endl ;
	cout << "  FIND XOR SUM OF ALL PAIRS BITWISE AND " << endl ;
	cout << " ```````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array1 : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array1......... " << endl ;
	for(int j=0; j<len; ++j){
		cin >> e ;
		arr1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array2 : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array2......... " << endl ;
	for(int j=0; j<len; ++j){
		cin >> e ;
		arr2.push_back(e) ;
	}
	
    e = getXORSum(arr1, arr2) ;
	
	cout << endl ;
	cout << "XOR Sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

// TIME LIMIT EXCEEDED
// int getXORSum(vector<int>& arr1, vector<int>& arr2) {
    // int XORsum = 0 ;
    // for(int& a1 : arr1) {
        // for(int& a2 : arr2) {
            // XORsum ^= (a1 & a2) ;
        // }
    // }
    // return XORsum ;
// }