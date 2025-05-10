
// 1313. DECOMPRESS RUN-LENGTH ENCODED LIST

#include<iostream>
#include<vector>

using namespace std ;

vector<int> decompressRLElist(vector<int>& nums) {
	int n = nums.size() ;
	vector<int> ans ;
	for(int i=0; i<n-1; i+=2) {
		for(int j=0; j<nums[i]; ++j) {
			ans.push_back(nums[i+1]) ;
		}
	}
	return ans ;
}

int main() {
	vector<int> nums ;
	vector<int> ans ;
	int l, e ;
	
	cout << endl ;
	cout << "  DECOMPRESS RUN-LENGTH ENCODED LIST " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = decompressRLElist(nums) ;
	
	cout << endl ;
	cout << "Elements of the array ans..... " << endl ;
	for(int i=0; i<ans.size(); ++i)
		cout << " " << ans.at(i) << " " ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}