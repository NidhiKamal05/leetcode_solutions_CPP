
// 1995. COUNT SPECIAL QUADRUPLETS

#include<iostream>
#include<vector>

using namespace std ;

int countQuadruplets(vector<int> & nums){
	int cnt = 0 ;
    for(int i=0; i<nums.size()-3; ++i) {
        for(int j=i+1; j<nums.size()-2; ++j) {
            for(int k=j+1; k<nums.size()-1; ++k) {
                for(int l=k+1; l<nums.size(); ++l) {
                    if(nums[i]+nums[j]+nums[k] == nums[l]) {
                        ++cnt ;
                    }
                }
            }
        }
    }
    return cnt ;
}

int main()
{
	vector<int> nums{} ;
	int len, e ;
	
	cout << endl ;
	cout << "  COUNT SPECIAL QUADRUPLETS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array..." << endl ;
	for(int i = 0; i < len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    e = countQuadruplets(nums) ;
	
	cout << endl ;
	cout << "No. of special quadruplets = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}
