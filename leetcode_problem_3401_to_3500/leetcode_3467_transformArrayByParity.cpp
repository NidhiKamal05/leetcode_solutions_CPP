
// 3467. TRANSFORM ARRAY BY PARITY

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/transform-array-by-parity/solutions/8291088/c-solution-runtime-0-ms-beats-100-easy-b-9xsf/

/* JAVA */
// https://leetcode.com/problems/transform-array-by-parity/solutions/8291104/java-runtime-beats-100-1-ms-easy-solutio-oy11/

#include<iostream>
#include<vector>

using namespace std ;

vector<int> transformArray(vector<int>& nums) {
	vector<int> ans ;
    int evenCnt = 0, oddCnt = 0 ;
    for(int& num : nums) {
        if(num % 2) {
            ++oddCnt ;
        }
        else {
            ++evenCnt ;
        }
    }
    for(int i = 0; i < evenCnt; ++i) {
        ans.push_back(0) ;
    }
    for(int i = 0; i < oddCnt; ++i) {
        ans.push_back(1) ;
    }
    return ans ;
}

int main() {
	int n, e ;
	vector<int> nums, ans ;
	
	cout << endl ;
	cout << "  TRANSFORM ARRAY BY PARITY " << endl ;
	cout << " ===========================" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = transformArray(nums) ;
	
	cout << endl ;
	cout << "Parity......" << endl ;
	cout << "[" ;
	for(int& parity : ans) {
		cout << " " << parity ;
	}
	cout << " ]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}