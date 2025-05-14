
// 268. MISSING NUMBER

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v)
{
	int t ;
	for(int i=0; i<v.size()-1; ++i)
	{
		for(int j=i+1; j<v.size(); ++j)
		{
			if(v.at(j) < v.at(i))
			{
				t = v.at(j) ;
				v.at(j) = v.at(i) ;
				v.at(i) = t ;
			}
		}
	}
}

int missingNumber(vector<int> & nums)
{	
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	int n ;
	
	if(nums.at(nums.size()-1) != nums.size())
	{
		n = nums.size() ;
	}
	else if(nums.at(0) != 0)
	{
		n = 0 ;
	}
	else
	{
	    for(int i=0; i<nums.size()-1; ++i)
	    {
	    	if(nums.at(i+1) == i+1)
	    	{
	    		continue ;
	    	}
	    	else
	    	{
	    		n = i+1 ;
	    	    break ;
	    	}
	    }
	}
	return n ;
}

int main()
{
	vector<int> nums ;	
	int e, l ;
	
	cout << endl ;
	cout << "  MISSING NUMBER  " << endl ;
	cout << " ----********---- " << endl ;
	
	cout << endl ;
	cout << "Enter length of the array....." << endl ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	l = missingNumber(nums) ;
	
	cout << endl ;
	cout << "Missing Number in the array = " << l << endl ;
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}