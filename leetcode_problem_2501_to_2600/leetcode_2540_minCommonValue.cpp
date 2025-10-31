
// 2540. MINIMUM COMMON VALUE

#include<iostream>
#include<vector>
#include<set>

using namespace std ;

int getCommon(vector<int>& nums1, vector<int>& nums2) {
    set<int> st1 ;
    set<int> st2 ;
    for(int num : nums1) {
        st1.insert(num) ;
    }
    for(int num : nums2) {
        st2.insert(num) ;
    }
    for(auto& num : st1) {
        if(st2.find(num) != st2.end()) {
            return num ;
        }
    }
    return -1 ;
}

int main() {
	vector<int> nums1, nums2 ;
	int l, e ;
	
	cout << endl ;
	cout << " MINIMUM COMMON VALUE " << endl ;
	cout << "**********************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array 1...." << endl ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array 1...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array 2...." << endl ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array 2...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums2.push_back(e) ;
	}
	
	e = getCommon(nums1, nums2) ;
	
	cout << endl ;
	cout << "Minimum common value = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/** INCORRECT **/
/*int getCommon(vector<int>& nums1, vector<int>& nums2) {
	int minVal = INT_MAX ;
	unordered_map<int, int> mp1 ;
	unordered_map<int, int> mp2 ;
	for(int num : nums1) {
		if(!mp1[num]) {
			mp1[num]++ ;
		}
	}
	for(int num : nums2) {
		if(!mp2[num]) {
			mp2[num]++ ;
		}
	}
	for(int num : nums1) {
		if(mp1[num] == mp2[num]) {
			minVal = min(minVal, num) ;
		}
	}
	return minVal ;
}*/