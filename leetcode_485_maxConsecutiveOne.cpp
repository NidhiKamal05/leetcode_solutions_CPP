
// 485. MAX CONSECUTIVE ONES

#include<iostream>
#include<vector>

using namespace std ;

int findMaxConsecutiveOnes(vector<int> & nums){
	int maxOne = 0 ;
	int cnt = 0 ;
	for(int i=0; i<nums.size(); ++i){
		if(nums.at(i) == 1)
			++cnt ;
		else{
			maxOne = max(cnt, maxOne) ;
			cnt = 0 ;
		}
	}
	maxOne = max(cnt, maxOne) ;
	return maxOne ;
}

int main()
{
	int l, e;
	vector<int> nums{} ;
	
	cout << endl ;
	cout << "  MAX CONSECUTIVE ONES " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = findMaxConsecutiveOnes(nums) ;	
	
	cout << "Max consecutive ones = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}