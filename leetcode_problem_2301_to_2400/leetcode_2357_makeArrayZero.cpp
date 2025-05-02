
// 2357. MAKE ARRAY ZERO BY SUBTRACTING EQUAL AMOUNTS

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int minimumOperations(vector<int> & nums){
	map<int, int> mp ;
	for(int num : nums)
		if(num != 0)
			mp[num]++ ;
	return mp.size() ;
}

/*int minimumOperations(vector<int> & nums){
	map<int, int> mp ;
	for(int num : nums)
		if(num != 0)
			mp[num]++ ;
	int cnt = 0 ;
	for(auto & i : mp)
		++cnt ;
	return cnt ;
}*/

int main(){
	vector<int> nums{} ;
	int len, e, minOp ;
	
	cout << endl ;
	cout << "  MAKE ARRAY ZERO BY SUBTRACTING EQUAL AMOUNTS " << endl ;
	cout << " ``````````````````````````````````````````````" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    minOp = minimumOperations(nums) ;
	
	cout << "The minimum operations to make every element in nums = " << minOp << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}