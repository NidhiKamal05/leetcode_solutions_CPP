
// 3314. CONSTRUCT THE MINIMUM BITWISE ARRAY I

#include<iostream>
#include<vector>

using namespace std ;

/*vector<int> minBitwiseArray(vector<int>& nums) {
	int n = nums.size() ;
	vector<int> ans(n,-1) ;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<nums[i]; ++j) {
			if((j | (j+1)) == nums[i]) {
				ans[i] = j ;
				break ;
			}
		}
	}
	return ans ;
}*/

vector<int> minBitwiseArray(vector<int>& nums) {
    vector<int> ans ;
    for(int i=0; i<nums.size(); ++i) {
        for(int j=1; j<nums[i]; ++j) {
            if((j | (j + 1)) == nums[i]) {
                ans.push_back(j) ;
                break ;
            }
        }
        if(ans.size() == i) {
            ans.push_back(-1) ;
        }
    }
    return ans ;
}

int main() {
	vector<int> nums ;
	vector<int> ans ;
	int l, e ;
	
	cout << endl ;
	cout << "  CONSTRUCT THE MINIMUM BITWISE ARRAY I " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = minBitwiseArray(nums) ;
	
	cout << endl ;
	cout << "Elements of the array ans..... " << endl ;
	for(int i=0; i<l; ++i)
		cout << " " << ans.at(i) << " " ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}