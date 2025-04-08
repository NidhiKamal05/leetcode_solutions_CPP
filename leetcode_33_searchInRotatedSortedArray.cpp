
// 33. SEARCH IN ROTATED SORTED ARRAY

#include<iostream>
#include<vector>

using namespace std ;

int search(vector<int> & nums, int target)
{
	int i=0 ;
	int j=nums.size()-1 ;
	while(i <= j)
	{
		if(nums.at(i) == target)
			return i ;
		else if(nums.at(j) == target)
			return j ;
		else 
		{
			++i ;
		    --j ;
		}
	}
	return -1 ;
}

int main()
{
	vector<int> nums{};
	int len, e, target;
	
	cout << endl ;
	cout << "  SEARCH IN ROTATED SORTED ARRAY  " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i < len; i++)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl << "Enter target : " ;
	cin >> target ;
	
	e = search(nums, target) ;
	
    cout << "Position : " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}