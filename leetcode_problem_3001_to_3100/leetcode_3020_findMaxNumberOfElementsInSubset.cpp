
// 3020. FIND THE MAXIMUM NUMBER OF ELEMENTS IN SUBSET

/** T.C. - O(N Log M) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/find-the-maximum-number-of-elements-in-subset/solutions/8361505/c-solution-by-nidhi_kamal-i5ny/

/* JAVA */
// https://leetcode.com/problems/find-the-maximum-number-of-elements-in-subset/solutions/8361864/java-solution-beats-8605-by-nidhi_kamal-6fqf/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

int maximumLength(vector<int>& nums) {
    unordered_map<long long, int> freq ;
    for(int& num : nums) {
        freq[num]++ ;
    }
    int ans = 0 ;
	ans += freq[1] % 2 ? freq[1] : freq[1] - 1 ;
	freq.erase(1) ;
	for(auto& f : freq) {
		int len = 0 ;
		long long x = f.first ;
		while(freq.count(x) && freq[x] >= 2) {
			x *= x ;
			len += 2 ;
		}
		ans = max(ans, len + (freq.count(x) ? 1 : -1)) ;
	}
	return ans ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  FIND THE MAXIMUM NUMBER OF ELEMENTS IN SUBSET " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = maximumLength(nums) ;
	
	cout << endl ;
	cout << "Maximum number of elements = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}
