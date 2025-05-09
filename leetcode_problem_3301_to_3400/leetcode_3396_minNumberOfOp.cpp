
// 3396. MINIMUM NUMBER OF OPERATIONS TO MAKE ELEMENTS IN ARRAY DISTINCT

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

int minimumOperations(vector<int>& nums) {
	int n = nums.size() ;
    unordered_map<int, int> seen ;
    for(int i=n-1; i>=0; --i) {
        if(seen.find(nums[i]) != seen.end()) {
            return (i/3)+1 ;
        }
        seen[nums[i]]++ ;
    }
    return 0 ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  MINIMUM NUMBER OF OPERATIONS TO MAKE ELEMENTS IN ARRAY DISTINCT " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = minimumOperations(nums) ;
	
	cout << endl ;
	cout << "Minimum Operations = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}