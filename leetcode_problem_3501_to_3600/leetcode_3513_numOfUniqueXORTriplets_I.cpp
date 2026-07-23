
// 3513. NUMBER OF UNIQUE XOR TRIPLETS I

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/number-of-unique-xor-triplets-i/solutions/8415296/c-on-solution-0-ms-runtime-beats-100-by-pxnsk/

/* JAVA */
// https://leetcode.com/problems/number-of-unique-xor-triplets-i/solutions/8415297/java-solution-by-nidhi_kamal-uylv/

#include<iostream>
#include<vector>

using namespace std ;

int uniqueXorTriplets(vector<int>& nums) {
    int n = nums.size() ;
    if(n <= 2) return n ;
    int ans = 0 ;
    for(int num : nums) {
        ans |= num ;
    }
    return ans + 1 ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  NUMBER OF UNIQUE XOR TRIPLETS I " << endl ;
	cout << " `````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = uniqueXorTriplets(nums) ;
	
	cout << endl ;
	cout << "Unique triplets = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** TIME LIMIT EXCEEDED **/
/*class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> st ;
        int n = nums.size() ;
        for(int i = 0; i < n; ++i) {
            for(int j = i; j < n; ++j) {
                for(int k = j; k < n; ++k) {
                    st.insert(nums[i] ^ nums[j] ^ nums[k]) ;
                }
            }
        }
        return st.size() ;
    }
};*/