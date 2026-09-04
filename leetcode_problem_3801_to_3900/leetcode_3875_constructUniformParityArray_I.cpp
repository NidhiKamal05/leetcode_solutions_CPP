
// 3875. CONSTRUCT UNIFORM PARITY ARRAY I

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/construct-uniform-parity-array-i/solutions/8497847/c-runtime-0-ms-solution-beats-100-o1-tim-t0k4/

/* JAVA */
// https://leetcode.com/problems/construct-uniform-parity-array-i/solutions/8497836/java-o1-solution-runtime-beats-100-by-ni-s6xp/

#include<iostream>
#include<vector>

using namespace std ;

bool uniformArray(vector<int>& nums1) {
	return true ;
}

int main() {
	vector<int> nums1 ;
	int n, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  CONSTRUCT UNIFORM PARITY ARRAY I " << endl ;
	cout << " ``````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		nums1.push_back(e) ;
	}
	
    ans = uniformArray(nums1) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}