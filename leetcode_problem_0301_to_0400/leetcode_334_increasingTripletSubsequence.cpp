
// 334. INCREASING TRIPLETS SUBSEQUENCE

#include<iostream>
#include<vector>

using namespace std ;

bool increasingTriplet(vector<int>& nums) {
	int firstMin = INT_MAX, secondMin = INT_MAX ;
    for(int& num : nums) {
        if(num <= firstMin) {
            firstMin = num ;
        }
        else if(num <= secondMin) {
            secondMin = num ;
        }
        else {
            return true ;
        }
    }
    return false ;
}

int main(){
	vector<int> nums ;
	int l, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  INCREASING TRIPLETS SUBSEQUENCE " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = increasingTriplet(nums) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE....." << endl ;
	else
		cout << "FALSE....." << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}