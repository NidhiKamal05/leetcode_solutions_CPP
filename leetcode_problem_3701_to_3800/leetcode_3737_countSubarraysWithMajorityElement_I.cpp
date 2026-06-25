
// 3737. COUNT SUBARRAYS WITH MAJORITY ELEMENT I

/** T.C. - O(N^2) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/count-subarrays-with-majority-element-i/solutions/8357939/c-solution-by-nidhi_kamal-8c2g/

/* JAVA */
// https://leetcode.com/problems/count-subarrays-with-majority-element-i/solutions/8357936/java-solution-beats-8092-brute-force-sea-l103/

#include<iostream>
#include<vector>

using namespace std ;

int countMajoritySubarrays(vector<int>& nums, int target) {
	int n = nums.size(), ans = 0 ;
	for(int i = 0; i < n; ++i) {
		int cnt = 0 ;
		for(int j = i; j < n; ++j) {
			if(nums[j] == target)
				++cnt ;
			int len = j - i + 1 ;
			if(cnt > (len / 2))
				++ans ;
		}
	}
	return ans ;
}

int main(){
	vector<int> nums ;
	int n, e, target ;
	
	cout << endl ;
	cout << "  COUNT SUBARRAYS WITH MAJORITY ELEMENT I " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter target = " ;
	cin >> target ;
	
	e = countMajoritySubarrays(nums, target) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}