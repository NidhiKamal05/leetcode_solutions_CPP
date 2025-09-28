
// 976. LARGEST PERIMETER TRIANGLE

#include<iostream>
#include<vector>

using namespace std ;

int largestPerimeter(vector<int>& nums) {
    sort(nums.begin(), nums.end()) ;
    int n = nums.size() ;
    for(int i=n-3; i>=0; --i) {
        if(nums[i] + nums[i+1] > nums[i+2]) {
            return nums[i] + nums[i+1] + nums[i+2] ;
        }
    }
    return 0 ;
}

int main(){
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  LARGEST PERIMETER TRIANGLE " << endl ;
	cout << " ============================" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = largestPerimeter(nums) ;
	
	cout << endl ;
	cout << "Largest Perimeter = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}