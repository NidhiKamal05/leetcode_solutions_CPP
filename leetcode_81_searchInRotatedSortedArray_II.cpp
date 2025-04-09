
// 81. SEARCH IN ROTATED SORTED ARRAY II

#include<iostream>
#include<vector>

using namespace std ;

bool search(vector<int> & nums, int target)
{
	int i = 0 ;
	int j = nums.size()-1 ;
	while(i <= j)
	{
		if((nums.at(i)==target)||(nums.at(j)==target))
			return true ;
		else 
		{
			++i ;
			--j ;
		}
	}
	return false ;
}

int main()
{
	vector<int> nums{};
	int len, e, target;
	bool r ;
	
	cout << endl ;
	cout << "  SEARCH IN ROTATED SORTED ARRAY II  " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	
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
	
	r = search(nums, target) ;
	
	if(r == 1)
        cout << " TRUE" << endl ;
	else
        cout << " FALSE" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}