
// 1929. CONCATENATION OF ARRAY

#include<iostream>
#include<vector>

using namespace std ;

vector<int> getConcatenation(vector<int> & nums){
	vector<int> ans ;
    for(int i : nums)
        ans.push_back(i) ;
    for(int i : nums)
        ans.push_back(i) ;
    return ans ;
}

int main()
{
	vector<int> nums;
	vector<int> result;
	int l, e ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  CONCATENATION OF ARRAY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
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
	
	result = getConcatenation(nums) ;
	
	cout << endl ;
	cout << "After Concatenation....." << endl ;
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