
// 1848. MINIMUM DISTANCE TO THE TARGET ELEMENT

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-distance-to-the-target-element/solutions/7896008/c-runtime-0-ms-solution-beats-100-by-nid-6va5/

/* JAVA */
// https://leetcode.com/problems/minimum-distance-to-the-target-element/solutions/7896209/java-solution-by-nidhi_kamal-43v6/

#include<iostream>
#include<vector>

using namespace std ;

int getMinDistance(vector<int>& nums, int target, int start) {
	int n = nums.size(), ans = n - 1 ;
	for(int i = 0; i < n; ++i) {
		if(nums[i] == target) {
			ans = min(ans, abs(i - start)) ;
		}
	}
	return ans ;
}

int main() {
	vector<int> nums ;
	int n, e, target, start ;
	
	cout << endl ;
	cout << "  MINIMUM DISTANCE TO THE TARGET ELEMENT " << endl ;
	cout << " ````````````````````````````````````````" << endl ;
	
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
	cout << "Enter target = " ;
	cin >> target ;
	
	cout << endl ;
	cout << "Enter start = " ;
	cin >> start ;
	
    e = getMinDistance(nums, target, start) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}