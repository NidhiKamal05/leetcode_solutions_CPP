
// 1437. CHECK IF ALL 1'S ARE AT LEAST LENGTH K PLACES AWAY

#include<iostream>
#include<vector>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public boolean kLengthApart(int[] nums, int k) {
        int n = nums.length ;
		for(int i=0; i<n; ++i) {
			if(nums[i] == 1 && i < n-1) {
                ++i ;
				int cnt = 0 ;		
				while(i < n && nums[i] == 0) {
					++cnt ;
					++i ;
				}
				if(cnt < k && (i < n && nums[i] == 1)) {
					return false ;
				}
				--i ;
			}
		}
		return true ;
    }
}*/

bool kLengthApart(vector<int>& nums, int k) {
    int n = nums.size() ;
    for(int i=0; i<n; ++i) {
        if(nums[i] == 1 && i < n-1) {
            ++i ;
            int cnt = 0 ;		
            while(i < n && nums[i] == 0) {
                ++cnt ;
                ++i ;
            }
            if(cnt < k && (i < n && nums[i] == 1)) {
                return false ;
            }
            --i ;
        }
    }
    return true ;
}

int main() {
	vector<int> nums ;
	int l, e, k ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF ALL 1'S ARE AT LEAST LENGTH K PLACES AWAY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	ans = kLengthApart(nums, k) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}