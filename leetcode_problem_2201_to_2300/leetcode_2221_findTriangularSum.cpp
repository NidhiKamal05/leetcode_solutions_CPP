
// 2221. FIND TRIANGULAR SUM OF AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

int triangularSum(vector<int>& nums) {
	while(nums.size() > 1) {
        for(int i=0; i<nums.size()-1; ++i) {
            nums[i] = nums[i] + nums[i+1] ;
            if(nums[i] > 9) {
                nums[i] = nums[i]%10 ;
            }
        }
        nums.pop_back() ;
    }
    return nums[0] ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  FIND TRIANGULAR SUM OF AN ARRAY " << endl ;
	cout << " `````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = triangularSum(nums) ;
	
	cout << endl ;	
	cout << "Triangular Sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}