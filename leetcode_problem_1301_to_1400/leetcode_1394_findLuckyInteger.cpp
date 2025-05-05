
// 1394. FIND LUCKY INTEGER IN AN ARRAY

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int findLucky(vector<int>& arr) {
	map<int, int, greater<int>> mp ;
	for(auto i : arr)
		mp[i]++ ;
	map<int, int> :: iterator it ;
	for(it=mp.begin(); it!=mp.end(); ++it)
		if(it->first == it->second)
			return it->first ;
	//*BOTH WORKS SAME*//
	// for(auto it : mp) {
        // if(it.first == it.second) {
            // return it.first ;
        // }
    // }
	return -1 ;
}

int main() {
	vector<int> arr ;
	int l, e ;
	
	cout << endl ;
	cout << "  FIND LUCKY INTEGER IN AN ARRAY " << endl ;
	cout << " ================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		arr.push_back(e) ;
	}
	
	e = findLucky(arr) ;
	
	cout << endl ;
	cout << "Lucky Integer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}