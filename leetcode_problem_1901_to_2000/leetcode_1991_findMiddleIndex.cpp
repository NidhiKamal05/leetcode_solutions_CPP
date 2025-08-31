
// 1991. FIND THE MIDDLE INDEX IN ARRAY

#include<iostream>
#include<vector>
#include<numeric>

using namespace std ;

int findMiddleIndex(vector<int>& nums) {
	int n = nums.size() ;
    int totalSum = accumulate(nums.begin(), nums.end(), 0) ;
    int leftSum = 0 ;
    for(int i=0; i<n; ++i) {
        int rightSum = totalSum - leftSum - nums[i] ;
        if(leftSum == rightSum) {
            return i ;
        }
        leftSum += nums[i] ;
    }
    return -1 ;
}

int main(){
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  FIND THE MIDDLE INDEX IN ARRAY " << endl ;
	cout << " ````````````````````````````````" << endl ;
	
	cout << endl ;	
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;	
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = findMiddleIndex(nums) ;
	
	cout << endl ;
	cout << "Middle Index = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}