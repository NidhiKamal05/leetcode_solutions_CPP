
// 3191. MINIMUM OPERATIONS TO MAKE BINARY ARRAY ELEMENTS TO ONE I

#include<iostream>
#include<vector>

using namespace std ;

//** JAVA SOLUTION **//
/*class Solution {
    public int minOperations(int[] nums) {
        int n = nums.length ;
        int minOp = 0 ;
        for(int i=0; i<=n-3; ++i) {
            if(nums[i] == 0) {
                ++minOp ;
                nums[i] ^= 1 ;
                nums[i+1] ^= 1 ;
                nums[i+2] ^= 1 ;
            }
        }
        int sum = 0 ;
        for(int num : nums) {
            sum += num ;
        }
        return sum==n ? minOp : -1 ;
    }
}*/

void flip(int& el) {
	el = (el==0) ? 1 : 0 ;
}

bool check(vector<int>& nums) {
	for(int num : nums) {
		if(num == 0) {
			return false ;
		}
	}
	return true ;
}

int minOperations(vector<int>& nums) {
	int n = nums.size() ;
	int minOp = 0 ;
	for(int i=0; i<=n-3; ++i) {
		if(nums[i] == 0) {
			flip(nums[i]) ;
			flip(nums[i+1]) ;
			flip(nums[i+2]) ;
			++minOp ;
		}
	}
	return check(nums) ? minOp : -1 ;
}

int main() {
	vector<int> nums ;
	int len, e ;
	
	cout << endl ;
	cout << "  MINIMUM OPERATIONS TO MAKE BINARY ARRAY ELEMENTS TO ONE I " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements....." << endl ;
	for(int i=0; i<len; i++) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = minOperations(nums) ;
	
	cout << endl ;
	cout << "Minimum Operation = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}