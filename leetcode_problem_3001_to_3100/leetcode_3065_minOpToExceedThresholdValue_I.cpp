
// 3065. MINIMUM OPERATIONS TO EXCEED THRESHOLD VALUE I

#include<iostream>
#include<vector>

using namespace std ;

int minOperations(vector<int>& nums, int k) {
    int minOp = 0 ;
    for(int& num : nums) {
        if(num < k) {
            ++minOp ;
        }
    }
    return minOp ;
}

int main() {
	vector<int> nums ;
	int e, n, k ;
	
	cout << endl ;
	cout << "  MINIMUM OPERATIONS TO EXCEED THRESHOLD VALUE I " << endl ;
	cout << " ===============================================" << endl ;
	
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
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	cout << endl ;
    e = minOperations(nums, k) ;
	
	cout << "Min Operation = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}