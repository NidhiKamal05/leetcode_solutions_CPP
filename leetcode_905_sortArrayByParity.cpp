
// 905. SORT ARRAY BY PARITY

#include<iostream>
#include<vector>

using namespace std ;

vector<int> sortArrayByParity(vector<int> & nums){
	vector<int> odds{} ;
	for(int i=0; i<nums.size(); ++i){
		if((nums.at(i)%2) != 0){
			odds.push_back(nums.at(i)) ;
			nums.erase(nums.begin()+i, nums.begin()+i+1) ;
			--i ;
		}
	}
	for(int i=0; i<odds.size(); ++i)
		nums.push_back(odds.at(i)) ;
	return nums ;
}

/*vector<int> sortArrayByParity(vector<int> & nums){
	int size = nums.size() ;
	for(int i=0; i<size; ++i){
		if((nums.at(i)%2) != 0){
			nums.push_back(nums.at(i)) ;
			nums.erase(nums.begin()+i, nums.begin()+i+1) ;
			--i ;
		}
	}
	return nums ;
}*/

int main()
{
	vector<int> nums;
	vector<int> result;
	int l, e ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  SORT ARRAY BY PARITY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elemrnts of the array......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	result = sortArrayByParity(nums) ;
	
	cout << endl ;
	cout << "After Sorting....." << endl ;
	cout << "[" ;
	for(it=result.begin(); it<result.end()-1; ++it)
	{
		cout << *it << ", " ;
	}
	cout << *it << "]" << endl ;
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}