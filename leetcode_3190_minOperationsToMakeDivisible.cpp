
// 3190. FIND MINIMUM OPERATIONS TO MAKE ALL ELEMENTS DIVISIBLE BY THREE

#include<iostream>
#include<vector>

using namespace std ;

int minimumOperations(vector<int> & nums) {
	int cnt = 0 ;
	for(int i=0; i<nums.size(); ++i)
		if(nums.at(i)%3 != 0)
			++cnt ;
	return cnt ;
}

int main(){
	vector<int> nums{} ;
	int l, e ;
	
	cout << endl ;
	cout << "  FIND MINIMUM OPERATIONS TO MAKE ALL ELEMENTS DIVISIBLE BY THREE " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = minimumOperations(nums) ;
	
	cout << endl ;
	cout << "Minimum Operations = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}