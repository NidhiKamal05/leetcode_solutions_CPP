
// 2475. NUMBER OF UNEQUAL TRIPLETS IN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

int unequalTriplets(vector<int> & nums){
	int cnt = 0 ;
	for(int i=0; i<nums.size()-2; ++i)
		for(int j=i+1; j<nums.size()-1; ++j)
			for(int k=j+1; k<nums.size(); ++k)
				if(nums[i] != nums[j])
					if(nums[i] != nums[k])
						if(nums[j] != nums[k])
							++cnt ;
	return cnt ;
}

int main()
{
	vector<int> nums{} ;
	int len, e ;
	
	cout << endl ;
	cout << "  NUMBER OF UNEQUAL TRIPLETS IN ARRAY " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array..." << endl ;
	for(int i = 0; i < len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    e = unequalTriplets(nums) ;
	
	cout << endl ;
	cout << "No. of unequal triplets = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}
