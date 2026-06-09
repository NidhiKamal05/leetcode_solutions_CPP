
// 3689. MAXIMUM TOTAL SUBARRAY VALUE I

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/maximum-total-subarray-value-i/solutions/8323917/c-runtime-0-ms-beats-100-greedy-solution-3gka/

/* JAVA */
// https://leetcode.com/problems/maximum-total-subarray-value-i/solutions/8323928/java-greedy-solution-by-nidhi_kamal-yjor/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

long long maxTotalValue(vector<int>& nums, int k) {
    int maxEl = *max_element(nums.begin(), nums.end()) ;
    int minEl = *min_element(nums.begin(), nums.end()) ;
    return (long long)(maxEl - minEl) * k ;
}

int main() {
	vector<int> nums ;
	int n, e, k ;
	
	cout << endl ;
	cout << "  MAXIMUM TOTAL SUBARRAY VALUE I " << endl ;
	cout << " ````````````````````````````````" << endl ;
	
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
	
    e = maxTotalValue(nums, k) ;
	
	cout << endl ;
	cout << "Output = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}