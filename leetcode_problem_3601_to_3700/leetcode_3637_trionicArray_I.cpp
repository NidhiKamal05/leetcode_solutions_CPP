
/** C++ **/
// https://leetcode.com/problems/trionic-array-i/solutions/7548827/c-runtime-beats-100-0-ms-on-by-nidhi_kam-xlq5/

/** JAVA **/
// https://leetcode.com/problems/trionic-array-i/solutions/7548843/java-solution-1-ms-easy-on-by-nidhi_kama-ncqa/

// 3637. TRIONIC ARRAY I

#include<iostream>
#include<vector>

using namespace std ;

bool isTrionic(vector<int>& nums) {
	int n = nums.size(), i = 1 ;
	while(i < n && nums[i-1] < nums[i]) {
		++i ;
	}
	int p = i - 1 ;
	while(i < n && nums[i-1] > nums[i]) {
		++i ;
	}
	int q = i - 1 ;
	while(i < n && nums[i-1] < nums[i]) {
		++i ;
	}
	int r = i - 1 ;
    if((0 < p) && (p < q) && (q < n-1) && (r == n-1)) {
		return true ;
	}
	return false ;
	// return ((p != 0) && (p != q) && (q != r) && (r == n-1)) ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  TRIONIC ARRAY I " << endl ;
	cout << " -----------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = isTrionic(nums) ;
	
	cout << endl ;
	if(ans) {
		cout << "TRUE...." << endl ;
	}
	else {
		cout << "FALSE...." << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*bool isTrionic(vector<int>& nums) {
	int n = nums.size(), i = 1 ;
	while(i < n) {
		if(nums[i-1] < nums[i]) {
			++i ;
		}
		else {
			break ;
		}
	}
	int p = i - 1 ;
	while(i < n) {
		if(nums[i-1] > nums[i]) {
			++i ;
		}
		else {
			break ;
		}
	}
	int q = i - 1 ;
	while(i < n) {
		if(nums[i-1] < nums[i]) {
			++i ;
		}
		else {
			break ;
		}
	}
	int r = i - 1 ;
	if((0 < p) && (p < q) && (q < n-1) && (r <= n-1)) {
		return true ;
	}
	return false ;
}*/