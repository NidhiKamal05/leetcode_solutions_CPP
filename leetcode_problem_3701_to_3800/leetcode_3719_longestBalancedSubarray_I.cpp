
// 3719. LONGEST BALANCED SUBARRAY I

/* C++ */
// https://leetcode.com/problems/longest-balanced-subarray-i/solutions/7568724/c-solution-very-simple-and-easy-by-nidhi-9bet/

/* JAVA */
// https://leetcode.com/problems/longest-balanced-subarray-i/solutions/7568747/java-solution-hash-set-by-nidhi_kamal-sz8n/

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

int longestBalanced(vector<int>& nums) {
    int n = nums.size(), ans = 0 ;
    for(int i=0; i<n; ++i) {
        unordered_set<int> odd, even ;
        for(int j=i; j<n; ++j) {
            if(nums[j] % 2 == 0) {
                even.insert(nums[j]) ;
            }
            else {
                odd.insert(nums[j]) ;
            }
            if(odd.size() == even.size()) {
                ans = max(ans, j - i + 1) ;
            }
        }
    }
    return ans ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  LONGEST BALANCED SUBARRAY I " << endl ;
	cout << " -----------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of array..... " << endl ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<n; ++i) {
	    cin >> e ;
	    nums.push_back(e) ;
	}
	
	e = longestBalanced(nums) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}