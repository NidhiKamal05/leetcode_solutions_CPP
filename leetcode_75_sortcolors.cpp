
// 75. SORT COLORS

#include<iostream>
#include<vector>

using namespace std ;

void sortColors(vector<int> & nums)
{
	int temp ;
	for(int i=0; i<nums.size()-1; ++i)
	{
		for(int j=i+1; j<nums.size(); ++j)
		{
			if(nums.at(i) > nums.at(j))
			{
				temp = nums.at(i) ;
				nums.at(i) = nums.at(j) ;
				nums.at(j) = temp ;
			}
		}
	}
}

/*void sortColors(vector<int> & nums)
{
	int i = 0 ;
	int j = nums.size()-1 ;
	int k = 0 ;
	int temp ;
	while(k <= j)
	{
	    // if(nums.at(i) > nums.at(k))
	    // {
	    	// temp = nums.at(i) ;
	    	// nums.at(i) = nums.at(k) ;
	    	// nums.at(k) = temp ;
	    // }
		k = i ;
		if(nums.at(j) < nums.at(k))
	    {
	    	temp = nums.at(j) ;
	    	nums.at(j) = nums.at(k) ;
	    	nums.at(k) = temp ;
	    }
		++i ;
		--j ;
	}
}*/

int main()
{
	vector<int> nums;
	int l, e ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  SORT COLORS " << endl ;
	cout << " `````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of array......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	system("pause") ;
	
	sortColors(nums) ;
	
	cout << endl ;
	cout << "After Sorting....." << endl ;
	cout << "[" ;
	for(it=nums.begin(); it<nums.end()-1; ++it)
	{
		cout << *it << ", " ;
	}
	cout << *it << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}