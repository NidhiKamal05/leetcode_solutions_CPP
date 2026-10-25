
// 1413. MINIMUM VALUE TO GET POSITIVE STEP BY STEP SUM

/** T.C. - O(N * M) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/solutions/8588303/c-runtime-beats-100-memory-beats-9964-by-lzrj/

/* JAVA */
// https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/solutions/8588306/java-solution-beats-9633-by-nidhi_kamal-ir82/

#include<iostream>
#include<vector>

using namespace std ;

int minStartValue(vector<int>& nums) {
	int sum = 0 ;
	for(int i = 1; i < INT_MAX; ++i) {
		sum = i ;
		for(int num : nums) {
			sum += num ;
			if(sum < 1) {
				break ;
			}
		}
		if(sum > 0) {
			return i ;
		}
	}
	return -1 ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  MINIMUM VALUE TO GET POSITIVE STEP BY STEP SUM " << endl ;
	cout << " ````````````````````````````````````````````````" << endl ;
	
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
    e = minStartValue(nums) ;
	
	cout << "Minimum Start Value = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}