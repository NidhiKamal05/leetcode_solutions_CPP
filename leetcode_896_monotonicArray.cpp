
// 896. MONOTONIC ARRAY

#include<iostream>
#include<vector>

using namespace std ;

bool isMonotonic(vector<int> & nums){
	bool isIncreasing = false ;
	bool isDecreasing = false ;
	for(int i=1; i<nums.size(); ++i){
		if(nums.at(i)>nums.at(i-1))
			isIncreasing = true ;
		if(nums.at(i)<nums.at(i-1))
			isDecreasing = true ;
		if(isIncreasing==true && isDecreasing==true)
			return false ;
	}
	return true ;
}

// bool isMonotonic(vector<int> & nums){
	// if(nums.at(1)>=nums.at(0))
		// for(int i=1; i<nums.size(); ++i)
			// if((nums.at(i)<nums.at(i-1))&&(nums.at(i)!=nums.at(i-1)))
				// return false ;
	// if(nums.at(1)<=nums.at(0))
		// for(int i=1; i<nums.size(); ++i)
			// if((nums.at(i)>nums.at(i-1))&&(nums.at(i)!=nums.at(i-1)))
				// return false ;
	// return true ;
// }

// [1,1,0]
// ans : true ;

int main(){
	vector<int> nums{} ;
	int l, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  MONOTONIC ARRAY " << endl ;
	cout << " =================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array......." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;	
	}
	
	ans = isMonotonic(nums) ;
	
	cout << endl ;
	if(ans == 1)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}