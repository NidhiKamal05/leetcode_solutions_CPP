
// 2856. MINIMUM ARRAY LENGTH AFTER PAIR REMOVALS

#include<iostream>
#include<vector>

using namespace std ;

int minLengthAfterRemovals(vector<int>& nums) {
    int n = nums.size(), ans = 0 ;
    int i = 0, j = (n + 1) / 2 ;
	// int i = 0, j = n / 2 ;
    // j = (n % 2) ? (j + 1) : j ;      // BOTH ARE SAME
    while((i < n/2) && (j < n)) {
        if(nums[i++] < nums[j++]) {
            ans += 2 ;
        }
    }
    return n - ans ;
}

int main(){
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  MINIMUM ARRAY LENGTH AFTER PAIR REMOVALS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = minLengthAfterRemovals(nums) ;
	
	cout << endl ;
	cout << "Minimum length = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}