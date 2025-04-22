
// 2932. MAXIMUM STRONG PAIR XOR I

#include<iostream>
#include<vector>

using namespace std ;

int maximumStrongPairXor(vector<int> & nums){
	int maximum = INT_MIN ;
	int XOR ;
	for(int i=0; i<nums.size(); ++i){
		for(int j=0; j<nums.size(); ++j){
			if(abs(nums[i]-nums[j]) <= min(nums[i],nums[j])){
				XOR = (nums[i]^nums[j]) ;
				maximum = max(maximum, XOR) ;
			}
		}
	}
	return maximum ;
}

int main(){
	vector<int> nums{} ;
	int l, e ;
	
	cout << endl ;
	cout << "  MAXIMUM STRONG PAIR XOR I " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<l; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = maximumStrongPairXor(nums) ;
	
	cout << "Maximun XOR = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}