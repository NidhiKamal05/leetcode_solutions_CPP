
// 2206. DIVIDE ARRAY INTO EQUAL PAIRS

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

//** JAVA SOLUTION USING SORTING **//
/*class Solution {
    public boolean divideArray(int[] nums) {
        Arrays.sort(nums) ;
        for(int i=0; i<nums.length; i+=2) {
            if(nums[i] != nums[i+1]) {
                return false ;
            }
        }
        return true ;
    }
}*/

bool divideArray(vector<int>& nums) {
	unordered_map<int, int> freq ;
	for(int& num : nums) {
		freq[num]++ ;
	}
	for(auto& entry : freq) {
		if((entry.second % 2) != 0) {
			return false ;
		}
	}
	return true ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	bool ans ;
	string s ;
	
	cout << endl ;
	cout << "  DIVIDE ARRAY INTO EQUAL PAIRS " << endl ;
	cout << " ```````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    ans = divideArray(nums) ;
	
	cout << endl ;
	s = ans ? "TRUE..." : "FALSE..." ;
	cout << s << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

//* 131/134  *//
	// int XOR = 0 ;
	// for(int& num : nums) {
		// XOR ^= num ;
	// }
	// return XOR==0 ? true : false ;