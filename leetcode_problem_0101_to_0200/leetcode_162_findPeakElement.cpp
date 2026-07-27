
// 162. FIND PEAK ELEMENT

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/find-peak-element/solutions/8423932/c-runtime-0-ms-beats-100-by-nidhi_kamal-pwmq/

/* JAVA */
// https://leetcode.com/problems/find-peak-element/solutions/8423944/java-0-ms-runtime-beats-100-memory-beats-tdmx/

#include<iostream>
#include<vector>

using namespace std ;

int findPeakElement(vector<int>& nums) {
    int n = nums.size() ;
    if((n == 1) || (nums[0] > nums[1])) {
        return 0 ;
    }
    if((nums[n - 1] > nums[n - 2])) {
        return n - 1 ;
    }
    int i = 1 ;
    int j = n - 2 ;
    while(i <= j) {
        if(nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
            return i ;
        }
        else if(nums[j] > nums[j - 1] && nums[j] > nums[j + 1]) {
            return j ;
        }
        else {
            ++i ;
            --j ;
        }
    }
    return 0 ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  FIND PEAK ELEMENT " << endl ;
	cout << " ```````````````````" << endl ;
	
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
    e = findPeakElement(nums) ;
	
	cout << "Index of peak element = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}