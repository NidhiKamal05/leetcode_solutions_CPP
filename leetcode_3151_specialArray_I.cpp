
// 3151.SPECIAL ARRAY I

#include<iostream>
#include<vector>

using namespace std ;

bool isArraySpecial(vector<int>& nums) {
	for(int i=1; i<nums.size(); ++i)
		if(((nums[i-1]%2 == 0)&&(nums[i]%2 == 0)) || ((nums[i-1]%2 != 0)&&(nums[i]%2 != 0)))
			return false ;
	return true ;
}

int main() {
	vector<int> nums ;
	int l, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  SPECIAL ARRAY I " << endl ;
	cout << " `````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array..... " << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    ans = isArraySpecial(nums) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}