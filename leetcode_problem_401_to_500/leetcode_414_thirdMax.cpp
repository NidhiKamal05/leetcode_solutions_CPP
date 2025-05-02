
// 414. THIRD MAXIMUM NUMBER

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int thirdMax(vector<int> & nums) {
	map<int, int, greater<int>> mp ;
    for(int i : nums)
    mp[i]++ ;
    map<int, int> :: iterator itr = mp.begin() ;
    if(mp.size() < 3)
        return itr->first ;
    advance(itr, 2) ;          // store position of 2th element in itr from beginning
    return itr->first ;
}

int main(){
	vector<int> nums{} ;
	int l, e ;
	
	cout << endl ;
	cout << "  THIRD MAXIMUM NUMBER " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = thirdMax(nums) ;
	
	cout << endl ;
	cout << "Third Maximum Number = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

// int thirdMax(vector<int> & nums){
	// sort(nums.begin(), nums.end()) ;
	// if(nums.size() < 3)
		// return nums.at(nums.size()-1) ;
	// int cnt = 0 ;
	// int third ;
	// for(int i=nums.size()-1; i>0; --i){
		// if(nums.at(i) != nums.at(i-1))
			// ++cnt ;
		// if(cnt == 2){
			// third = nums.at(i-1) ;
			// break ;
		// }
	// }
	// return third ;
// }