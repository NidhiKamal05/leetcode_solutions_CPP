
// 153. FIND MINIMUM IN ROTATED SORTED ARRAY

#include<iostream>
#include<vector>

using namespace std ;

int findMin(vector<int> & nums)
{
	int i = 0 ;
	int j = nums.size()-1 ;
	while(i <= j)
	{
		if(nums.at(i) > nums.at(j))
		{
			++i ;
		}
		else
		{
			--j ;
		}
	}
	return nums.at(i) ;
}

int main()
{
	vector<int> nums{};
	int len, e;
	
	cout << endl ;
	cout << "  FIND MINIMUM IN ROTATED SORTED ARRAY  " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i < len; i++)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = findMin(nums) ;
	
    cout << "Minimum number = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}