
// 3392. COUNT SUBARRAYS OF LENGTH 3 WITH A CONDITION

#include<iostream>
#include<vector>

using namespace std ;

int countSubarrays(vector<int>& nums) {
    int n = nums.size(), cnt = 0 ;
    for(int i=0; i<n-2; ++i) {
        if((nums[i]+nums[i+2])*2 == nums[i+1]) {
            ++cnt ;
        }
    }
    return cnt ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  COUNT SUBARRAYS OF LENGTH 3 WITH A CONDITION " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = countSubarrays(nums) ;
	
	cout << endl ;
	cout << "Count of subarrays = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}