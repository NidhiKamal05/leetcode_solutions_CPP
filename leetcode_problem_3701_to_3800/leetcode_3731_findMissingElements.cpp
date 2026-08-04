
// 3731. FIND MISSING ELEMENTS

/** T.C. - O(N + M) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/find-missing-elements/solutions/8441309/c-by-nidhi_kamal-t2o5/

/* JAVA */
// https://leetcode.com/problems/find-missing-elements/solutions/8441332/java-solution-by-nidhi_kamal-b16e/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

/** BRUTE FORCE T.C - O(N * M), S.C. - O(1)**/
/*vector<int> findMissingElements(vector<int>& nums) {
    int mini = *min_element(nums.begin(), nums.end()) ;
    int maxi = *max_element(nums.begin(), nums.end()) ;
    vector<int> ans ;
    for(int num = mini + 1 ; num < maxi; ++num) {
        if(find(nums.begin(), nums.end(), num) == nums.end()) {
            ans.push_back(num) ;
        }
    }
    return ans ;
}*/

vector<int> findMissingElements(vector<int>& nums) {
    int mini = ranges::min(nums) ;
    int maxi = ranges::max(nums) ;
    unordered_set<int> st(nums.begin(), nums.end()) ;
    vector<int> ans ;
    for(int num = mini + 1 ; num < maxi; ++num) {
        if(!st.contains(num)) {
            ans.push_back(num) ;
        }
    }
    return ans ;
}

int main() {
	vector<int> nums, res ;
	int n, e ;
	
	cout << endl ;
	cout << "  FIND MISSING ELEMENTS " << endl ;
	cout << " ```````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    res = findMissingElements(nums) ;
	
	cout << endl ;
	cout << "Result...." << endl ;
	cout << "[ " ;
	for(int& r : res) {
		cout << r << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}