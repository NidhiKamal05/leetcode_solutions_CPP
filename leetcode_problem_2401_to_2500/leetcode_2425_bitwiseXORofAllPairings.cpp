
// 2425. BITWISE XOR OF ALL PAIRINGS

#include<iostream>
#include<vector>

using namespace std ;

int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
	int ex_or = 0 ;
    int n1 = nums1.size() ;
    int n2 = nums2.size() ;
    if((n1%2 == 0)&&(n2%2 != 0)) {
        for(int num : nums1) {
            ex_or ^= num ;
        }
    }
    else if((n2%2 == 0)&&(n1%2 != 0)) {
        for(int num : nums2) {
            ex_or ^= num ;
        }
    }
    else if((n1%2 != 0)&&(n2%2 != 0)) {
        for(int num : nums1) {
            ex_or ^= num ;
        }
        for(int num : nums2) {
            ex_or ^= num ;
        }
    }
    else {
        return ex_or ;
    }
    return ex_or ; 
}

int main(){
	vector<int> nums1, nums2 ;
	int l, e ;
	
	cout << endl ;
	cout << "  BITWISE XOR OF ALL PAIRINGS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array1 : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array1....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter length of the array2 : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array2....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums2.push_back(e) ;
	}
	
	e = xorAllNums(nums1, nums2) ;
	
	cout << endl ;
	cout << "Bitwise xor of all pairings = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}