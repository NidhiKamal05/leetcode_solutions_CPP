
// 2293. MIN MAX GAME

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/min-max-game/solutions/8184347/c-min-max-game-runtime-beats-100-0-ms-by-n7xb/

/* JAVA */
// https://leetcode.com/problems/min-max-game/solutions/8184408/java-solution-0-ms-runtime-beats-100-by-2rygb/

#include<iostream>
#include<vector>
#include<cmath>

using namespace std ;

vector<int> helper(vector<int>& nums, vector<int>& newNums) {
	for(int i = 0; i < newNums.size(); ++i) {
		if(i % 2) {
			newNums[i] = max(nums[2 * i], nums[2 * i + 1]) ;
		}
		else {
			newNums[i] = min(nums[2 * i], nums[2 * i + 1]) ;
		}
	}
	return newNums ;
}

int minMaxGame(vector<int>& nums) {
	int n = log2(nums.size()) ;                  // 2^n = x then n = log2(x)
	while(n--) {
		vector<int> newNums(nums.size()/2) ;
		nums = helper(nums, newNums) ;
	}
	return nums[0] ;
}

int main() {
	int n, e ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  MIN MAX GAME " << endl ;
	cout << " **************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = minMaxGame(nums) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}