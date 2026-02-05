
// 3379. TRANSFORMED ARRAY

#include<iostream>
#include<vector>

using namespace std ;

vector<int> constructTransformedArray(vector<int>& nums) {
    int n = nums.size() ;
    vector<int> result(n) ;
    for(int i=0; i<n; ++i) {
        int val = 0 ;
        if(nums[i] > 0) {
            val = nums[(i + nums[i]) % n] ;
        }
        else if(nums[i] < 0) {
            val = nums[((i + nums[i]) % n + n) % n] ;
        }
        else {
            val = nums[i] ;
        }
        result[i] = val ;
    }
    return result ;
}

int main() {
	vector<int> nums, result ;
	int n, e ;
	
	cout << endl ;
	cout << "  TRANSFORMED ARRAY " << endl ;
	cout << " -------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of array..... " << endl ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<n; ++i) {
	    cin >> e ;
	    nums.push_back(e) ;
	}
	
	result = constructTransformedArray(nums) ;
	
	cout << endl ;
	cout << "[ " ;
	for(int num : result) {
		cout << num << " " ;
	}
	cout << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}