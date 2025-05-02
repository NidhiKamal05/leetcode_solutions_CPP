
// 80. REMOVE DUPLICATES FROM SORTED ARRAY II

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v)
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
}

int removeDuplicates(vector<int> & nums)
{
	int k ;
	// sort(nums.begin(), nums.end())
	Sort(nums) ;
	if(nums.size()>2)
	{
		for(int i=1; i<nums.size()-1; ++i)
		{
			if((nums.at(i)==nums.at(i-1))&&(nums.at(i)==nums.at(i+1)))
			{
				nums.erase(nums.begin()+i-1, nums.begin()+i) ;
				--i ;
			}
		}
	}
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