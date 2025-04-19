
// 2733. NEITHER MINIMUM NOR MAXIMUM

#include<iostream>
#include<vector>

using namespace std ;

int findNonMinOrMax(vector<int> & nums){
	if(nums.size() < 3)
		return -1 ;
	// sort(nums.begin(), nums.end()) ;
	return nums.at(1) ;
}

int main() {
	vector<int> nums{} ;
	int l, e ;
	
	cout << endl ;
	cout << "  NEITHER MINIMUM NOR MAXIMUM " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = findNonMinOrMax(nums) ;
	
	cout << endl ;
	cout << "Neither minimum nor maximum value in the array = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}