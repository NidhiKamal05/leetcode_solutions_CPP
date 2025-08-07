
// 982. TRIPLES WITH BITWISE AND EQUAL TO ZERO

#include<iostream>
#include<vector>

using namespace std ;

int countTriplets(vector<int>& nums) {
    int cnt = 0 ;
    unordered_map<int, int> tuples ;
    for(int& a : nums) {
        for(int& b : nums) {
            tuples[a & b]++ ;
        }
    }
    for(int& num : nums) {
        for(auto t : tuples) {
            if((t.first & num) == 0) {
                cnt += t.second ;
            }
        }
    }
    return cnt ;
}

/** TIME LIMIT EXCEEDED **/
// int countTriplets(vector<int>& nums) {
	// int n = nums.size() ;
	// int cnt = 0 ;
	// for(int i=0; i<n; ++i) {
		// for(int j=0; j<n; ++j) {
			// for(int k=0; k<n; ++k) {
				// if((nums[i]&nums[j]&nums[k]) == 0) {
					// ++cnt ;
				// }
			// }
		// }
	// }
	// return cnt ;
// }

int main() {
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  TRIPLES WITH BITWISE AND EQUAL TO ZERO " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = countTriplets(nums) ;
	
	cout << endl ;
	cout << "Count = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}