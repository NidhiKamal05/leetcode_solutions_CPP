
// 2210. COUNT HILLS AND VALLEYS IN AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

/** T.C. - O(N) **/
int countHillValley(vector<int>& nums) {
    int n = nums.size(), cnt = 0, left = 0 ;
    for(int i=1; i<n-1; ++i) {
        if(nums[i] == nums[i+1]) {
            continue ;
        }
        if((nums[left] < nums[i] && nums[i] > nums[i+1]) || (nums[left] > nums[i] && nums[i] < nums[i+1])) {
            ++cnt ;
        }
        left = i ;
    }
    return cnt ;
}

/** T.C. - O(N^2) **/
/*int countHillValley(vector<int>& nums) {
    int n = nums.size(), cnt = 0 ;
    for(int i=1; i<n-1; ++i) {
        if(nums[i-1] == nums[i]) {
            continue ;
        }
        int left = 0 ;
        for(int j=i-1; j>=0; --j) {
            if(nums[j] < nums[i]) {
                left = 1 ;
                break ;
            }
            if(nums[j] > nums[i]) {
                left = -1 ;
                break ;
            }
        }
        int right = 0 ;
        for(int j=i+1; j<n; ++j) {
            if(nums[j] < nums[i]) {
                right = 1 ;
                break ;
            }
            if(nums[j] > nums[i]) {
                right = -1 ;
                break ;
            }
        }
        if(left == right && left != 0) {
            ++cnt ;
        }
    }
    return cnt ;
}*/

int main() {
	int n, e ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  COUNT HILLS AND VALLEYS IN AN ARRAY " << endl ;
	cout << " *************************************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = countHillValley(nums) ;
	
	cout << endl ;
	cout << "Number of hils and valleys = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}