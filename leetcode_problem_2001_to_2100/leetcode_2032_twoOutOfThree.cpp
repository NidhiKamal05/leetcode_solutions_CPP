
// 2032. TWO OUT OF THREE

#include<iostream>
#include<vector>
#include<unordered_set>
#include<unordered_set>
// #include<algorithm>

using namespace std ;

vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    vector<int> ans ;
    unordered_set<int> st ;
    unordered_map<int, int> freq1, freq2, freq3 ;
    for(int& num : nums1) {
        st.insert(num) ;
        freq1[num]++ ;
    }
    for(int& num : nums2) {
        st.insert(num) ;
        freq2[num]++ ;
    }
    for(int& num : nums3) {
        st.insert(num) ;
        freq3[num]++ ;
    }
    for(auto& s : st) {
        if((freq1[s] && freq2[s]) || (freq2[s] && freq3[s]) || (freq3[s] && freq1[s])) {
            ans.push_back(s) ;
        }
    }
    // for(auto& s : st) {
    //     auto it1 = find(nums1.begin(), nums1.end(), s) ;
    //     auto it2 = find(nums2.begin(), nums2.end(), s) ;
    //     auto it3 = find(nums3.begin(), nums3.end(), s) ;
    //     if(
    //         it1 != nums1.end() && it2 != nums2.end()
    //         || it2 != nums2.end() && it3 != nums3.end()
    //         || it1 != nums1.end() && it3 != nums3.end()
    //     ) {
    //         ans.push_back(s) ;
    //     }
    // }
    return ans ;
}

int main() {
	int n, e ;
	vector<int> nums1, nums2, nums3, ans ;
	
	cout << endl ;
	cout << "  TWO OUT OF THREE " << endl ;
	cout << " ******************" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array1, n1 = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array1......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter length of the array2, n2 = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array2......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums2.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter length of the array3, n3 = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array3......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums3.push_back(e) ;
	}
	
	ans = twoOutOfThree(nums1, nums2, nums3) ;
	
	cout << endl ;
	cout << "Answer....." << endl ;
	cout << "[" ;
	for(int& num : ans) {
		cout << " " << num ;
	}
	cout << " ]" << endl  ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}