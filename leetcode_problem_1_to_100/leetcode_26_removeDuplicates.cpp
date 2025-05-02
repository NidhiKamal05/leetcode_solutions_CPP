
// 26. REMOVE DUPLICATES FROM SORTED ARRAY


#include<iostream>
#include<vector>

using namespace std ;

vector<int> Sort(vector<int>  v)
{
	int t ;
	for(int i=0; i<v.size()-1; ++i)
	{
		for(int j=v.size()-1; j>i; --j)
		{
			if(v.at(j) < v.at(j-1))
			{
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
	return v ;
}

int removeDuplicates(vector<int> & nums)
{
	int k ;
	
	nums = Sort(nums) ;
	// sort(nums.begin(), nums.end())
	
	for(int i=0; i<nums.size()-1; ++i)
	{
		if(nums.at(i) == nums.at(i+1))
		{
			nums.erase(nums.begin()+i, nums.begin()+i+1) ;
			--i ;
		}
	}
	
	// k = (nums.size()/2) ;
	
	/*vector<int> :: iterator i ;
	vector<int> :: iterator j ;
	for(int i=nums.begin(),j=nums.end(); i<(nums.begin()+k),j>(nums.end()-k); ++i,--j)
	{
		if(*(i) == *(i+1))
		{
			nums.erase(*i) ;
			--i ;
		}
		if(*(j) == *(j-1))
		{
			nums.erase(*j) ;
			++j ;
		}
	}*/
	/*for(int i=0,j=nums.size()-1; i<k,j>(nums.size()-k); ++i,--j)
	{
		if(nums.at(i) == nums.at(i+1))
		{
			nums.erase(nums.begin()+i, nums.begin()+i+1) ;
			--i ;
		}
		if(nums.at(j) == nums.at(j-1))
		{
			nums.erase(nums.begin()+i, nums.begin()+i+1) ;
			// ++j ;
		}
	}*/
	k = nums.size() ;
	
	return k ;
}

int main()
{
	vector<int> nums{} ;
	int l, k ;
	
	cout << endl ;
	cout << "  REMOVE DUPLICATES  " << endl ;
	cout << " ----***********---- " << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> k ;
		nums.push_back(k) ;
	}
	
	k = removeDuplicates(nums) ;
	
	cout << endl ;
	
	cout << "No. of remaining elements = " << k << endl ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}