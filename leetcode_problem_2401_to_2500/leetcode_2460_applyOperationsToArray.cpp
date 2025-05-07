
// 2460. APPLY OPERATIONS TO AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

//** JAVA SOLUTION **//
/*class Solution {
    public int[] applyOperations(int[] nums) {
        int n = nums.length ;
        int[] result = new int[n] ;
        int cnt = 0 ;
        for(int i=0; i<n-1; ++i) {
            if((nums[i] != 0) && (nums[i] == nums[i+1])){
                nums[i] *= 2 ;
                nums[i+1] = 0 ;
            }
        }
        for(int num : nums) {
            if(num != 0) {
                result[cnt++] = num ;
            }
        }
        while(cnt < n) {
            nums[cnt++] = 0 ;
        }
        return result ;
    }
}*/

vector<int> applyOperations(vector<int> & nums){
	int cnt = 0 ;
	for(int i=0; i<nums.size()-1; ++i){
		if(nums.at(i) == nums.at(i+1)){
			nums.at(i) *= 2 ;
			nums.at(i+1) = 0 ;
		}
	}
	for(int i=0; i<nums.size(); ++i){
		if(nums.at(i) == 0){
			nums.erase(nums.begin()+i, nums.begin()+i+1) ;
			++cnt ;
			--i ;
		}
	}
	for(int i=0; i<cnt; ++i)
		nums.push_back(0) ;
	return nums ;
}

int main(){
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  APPLY OPERATIONS TO AN ARRAY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	applyOperations(nums) ;
	
	cout << endl ;
	cout << "Resulting Array....." << endl ;
	for(int i=0; i<nums.size(); ++i)
		cout << " " << nums.at(i) << " " ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}