
// 1752. CHECK IF ARRAY IS SORTED AND ROTATED

#include<iostream>
#include<vector>

using namespace std ;

bool check(vector<int>& nums) {
	int cnt = 0 ;
	int len = nums.size() ;
	for(int i=1; i<len; ++i) {
		if(cnt > 1) {
			return false ;
		}
		if(nums[i-1] > nums[i]) {
			++cnt ;
		}
	}
	if((cnt > 1) || (cnt == 1) && (nums[0] < nums[len-1])) {
		return false ;
	}
	return true ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF ARRAY IS SORTED AND ROTATED  " << endl ;
	cout << " ```````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    ans = check(nums) ;
	
	cout << endl ;
	if(ans) {
		cout << "TRUE....." << endl ;
	}
	else {
		cout << "FALSE....." << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}