
// 3192. MINIMUM OPERATIONS TO MAKE BINARY ARRAY ELEMENTS TO ONE II

#include<iostream>
#include<vector>

using namespace std ;

int minOperations(vector<int> & nums){
	int cnt = 0 ;
	for(int i=0; i<nums.size(); ++i){
		if(nums[i] == cnt%2){
			++cnt ;
		}
	}
	return cnt ;
}

int main(){
	vector<int> nums ;
	int len, e ;
	
	cout << endl ;
	cout << "  MINIMUM OPERATIONS TO MAKE BINARY ARRAY ELEMENTS TO ONE II " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements....." << endl ;
	for(int i=0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = minOperations(nums) ;
	
	cout << "Minimum Operation = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}