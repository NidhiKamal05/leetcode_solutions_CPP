
// 1. TWO SUM

#include<iostream>
#include<vector>

using namespace std ;

vector<int> twoSum(vector<int> & nums, int target)
{
	vector<int> result{} ;
	for(int i = 0; i < nums.size()-1; ++i)
	{
		for(int j = i+1; j < nums.size(); ++j)
		{
			if((nums.at(i)+nums.at(j)) == target)
			{
				result.push_back(i) ;
				result.push_back(j) ;
				return result ;
			}
		}
	}
	return result ;
}

int main()
{
	vector<int> nums{}, result{};
	int len, n, target;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i < len; i++)
	{
		cin >> n ;
		nums.push_back(n) ;
	}
	
	cout << endl << "Enter target : " ;
	cin >> target ;
	
	result = twoSum(nums, target) ;
	
    if(!result.empty()){
        cout << "Positions = {" << result.at(0) << ',' << result.at(1) << '}' << endl ;
	}
	else{
		cout << "NOT FOUND" << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}