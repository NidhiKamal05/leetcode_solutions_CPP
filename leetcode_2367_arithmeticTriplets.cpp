
// 2367. NUMBER OF ARITHMETIC TRIPLETS

#include<iostream>
#include<vector>

using namespace std ;

int arithmeticTriplets(vector<int> & nums, int diff){
	int cnt = 0 ;
	for(int i=0; i<nums.size()-2; ++i)
		for(int j=i+1; j<nums.size()-1; ++j)
			for(int k=j+1; k<nums.size(); ++k)
				if((nums[j]-nums[i] == diff)&&(nums[k]-nums[j] == diff))
					++cnt ;
	return cnt ;
}

int main()
{
	vector<int> nums{} ;
	int len, e, diff ;
	
	cout << endl ;
	cout << "  NUMBER OF ARITHMETIC TRIPLETS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array..." << endl ;
	for(int i = 0; i < len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter a positive integer : " ;
	cin >> diff ;
	
	cout << endl ;
    e = arithmeticTriplets(nums, diff) ;
	
	cout << endl ;
	cout << "No. of arithmetic triplets = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}
