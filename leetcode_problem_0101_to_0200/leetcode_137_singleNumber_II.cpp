
// 137. SINGLE NUMBER II

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

int singleNumber(vector<int> & nums)
{
	int i=0 ;
	if(nums.size() == 1)
	{
		return nums.at(i) ;
	}
	int sN ;
	Sort(nums) ;	
	// sort(nums.begin(), nums.end()) ;
	for(i=0; i<nums.size(); ++i)
	{
        if(i == nums.size()-1)
		{
			sN = nums.at(i) ;
			return sN ;
		}
		if(nums.at(i)==nums.at(i+1))
		{
			if(i == nums.size()-1)
			{
				sN = nums.at(i) ;
				return sN ;
			}
			else
			{
				i+=2 ;
			}
		}
		else
		{
			sN = nums.at(i) ;
			return sN ;
		}
	}
	sN = nums.at(i) ;
	return sN ;
}

/*
int singleNumber(vector<int> & nums)
{
	int i=0 ;
	if(nums.size() == 1)
	{
		return nums.at(i) ;
	}
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	int sN = 0 ;
	for(i=0; i<nums.size()-2; ++i)
	{
		if(nums.at(i)==nums.at(i+2))
		{
			nums.at(i)^=nums.at(i) ;
		}
		sN^=nums.at(i) ;
	}
	sN^=nums.at(i) ;
	sN^=nums.at(++i) ;
	return sN ;
}
*/

int main()
{
	vector<int> nums;
	int l, e, r ;
	
	cout << endl ;
	cout << "  SINGLE NUMBER  " << endl ;
	cout << " ----*******---- " << endl ;
	
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
	
	r = singleNumber(nums) ;
	
	cout << endl ;
	
	cout << "Single Number = " << r << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


	// vector<int> :: iterator it ;
	// cout << "FUNCTION START....  " << endl ;
	// cout << "....  " << nums.at(i) << endl ;
	    // cout << "\n{" ;
	    // for(it=nums.begin(); it<nums.end()-1; ++it)
	    // {
	    	// cout << *it << ", " ;
	    // }
	    // cout << *it << "}" << endl ;
	// i = 0 ;
	// j = nums.size()-1 ;
	// if(nums.size() == 4)
	// {
		// if(nums.at(i)==nums.at(i+1))
		// {
			// i = nums.size()-1 ;
			// sN = nums.at(i) ;
			// return sN ;
		// }
		// else
		// {
			// i = 0 ;
			// sN = nums.at(i) ;
			// return sN ;
		// }
	// }
	
		// if((nums.at(i)==nums.at(i+1))&&(nums.at(i)==nums.at(i+2)))
		// if((nums.at(i)==nums.at(i+2))&&(i<nums.size()-2))
			
			// if(nums.at(i+1)==nums.at(i+2))
			// {
				// i+=2 ;
			// }