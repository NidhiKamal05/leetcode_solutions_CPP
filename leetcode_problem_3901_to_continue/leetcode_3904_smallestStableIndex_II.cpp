
// 3904. SMALLEST STABLE INDEX II

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/smallest-stable-index-ii/solutions/8503458/c-solution-beats-9672-prefix-sum-by-nidh-2pv3/

/* JAVA */
// https://leetcode.com/problems/smallest-stable-index-ii/solutions/8503464/java-prefix-sum-runtime-beats-100-on-tim-otj2/

#include<iostream>
#include<vector>

using namespace std ;

int firstStableIndex(vector<int>& nums, int k) {
    int n = nums.size() ;
    vector<int> suffMinval(n) ;
    suffMinval[n - 1] = nums[n - 1] ;
	for(int i = n - 2; i >= 0; --i) {
		suffMinval[i] = min(suffMinval[i + 1], nums[i]) ;
	}
	int prefMaxVal = 0 ;
    for(int i = 0; i < n; ++i) {
        prefMaxVal = max(prefMaxVal, nums[i]) ;
        if(prefMaxVal - suffMinval[i] <= k) {
            return i ;
        }
    }
    return -1 ;
}
	
int main() {
	vector<int> nums ;
	int n, k, e ;
	
	cout << endl ;
	cout << "  SMALLEST STABLE INDEX II " << endl ;
	cout << " **************************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
    e = firstStableIndex(nums, k) ;
	
	cout << endl ;
	cout << "Smallest stable index = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}