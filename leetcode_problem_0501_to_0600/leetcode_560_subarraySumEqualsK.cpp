
// 560. SUBARRAY SUM EQUALS K

/** T.C. - O(N^2) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/subarray-sum-equals-k/solutions/8531483/c-solution-beats-8806-brute-force-search-kp51/

/* JAVA */
// https://leetcode.com/problems/subarray-sum-equals-k/solutions/8531486/java-solution-tc-on2-sc-o1-by-nidhi_kama-mema/

#include<iostream>
#include<vector> 

using namespace std ;

int subarraySum(vector<int>& nums, int k) {
    int n = nums.size(), cnt = 0 ;
    for(int i = 0; i < n; ++i) {
        int sum = 0 ;
        for(int j = i; j < n; ++j) {
            sum += nums[j] ;
            if(sum == k) {
                ++cnt ;
            }
        }
    }
    return cnt ;
}

int main() {
	vector<int> nums ;
	int e, n, k ;
	
	cout << endl ;
	cout << "  SUBARRAY SUM EQUALS K " << endl ;
	cout << " ```````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	cout << endl ;
    e = subarraySum(nums, k) ;
	
	cout << "Subarray Sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*int subarraySum(vector<int>& nums, int k) {
	int n = nums.size() ;
	int sum ;
	int cnt = 0 ;
	for(int i=0; i<n; ++i) {
		sum = 0 ;
		for(int j=i; j<n; ++j) {
			sum += nums[j] ;
			if(sum == k) {
				++cnt ;
				break ;
			}
		}
	}
	return cnt ;
}*/