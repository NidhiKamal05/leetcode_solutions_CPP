
// 2150. FIND ALL LONELY NUMBERS IN THE ARRAY

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

vector<int> findLonely(vector<int>& nums) {
    map<int, int> mp ;
    vector<int> ans ;
    for(int & num : nums) {
        mp[num]++ ;
    }
    for(auto& m : mp) {
        int num = m.first, freq = m.second ;
        if((freq == 1) && (mp[num+1] == 0) && (mp[num-1] == 0)) {
            ans.push_back(num) ;
        }
    }
    return ans ;
}

int main() {
	
	vector<int> nums, ans ;
	int l, e ;
	
	cout << endl ;
	cout << "  FIND ALL LONELY NUMBERS IN THE ARRAY " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = findLonely(nums) ;
	
	cout << endl ;
	cout << "Lonely numbers..... " << endl ;
	for(int i=0; i<ans.size(); ++i)
		cout << " " << ans[i] << " " ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}