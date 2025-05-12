
// 1299. REPLACE ELEMENTS WITH GREATEST ELEMENT ON RIGHT SIDE

#include<iostream>
#include<vector>

using namespace std ;

vector<int> replaceElements(vector<int>& arr) {
	int n = arr.size() ;
	for(int i=0; i<n-1; ++i) {
		int maximum = 0 ;
		for(int j=i+1; j<n; ++j) {
			maximum = max(maximum, arr[j]) ;
		}
		arr[i] = maximum ;
	}
	arr[n-1] = -1 ;
	return arr ;
}

int main() {
	vector<int> arr, result ;
	int l, e ;
	
	cout << endl ;
	cout << "  REPLACE ELEMENTS WITH GREATEST ELEMENT ON RIGHT SIDE " << endl ;
	cout << " ``````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array..... " << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		arr.push_back(e) ;
	}
	
    result = replaceElements(arr) ;
	
	cout << endl ;
	cout << "Array after replacing..... " << endl ;
	for(int i=0; i<l; ++i){
		cout << " " << result.at(i) << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}