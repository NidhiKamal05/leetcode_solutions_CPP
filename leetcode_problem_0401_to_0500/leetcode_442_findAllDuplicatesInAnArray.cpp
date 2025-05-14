
// 442. FIND ALL DUPLICATES IN AN ARRAY

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

vector<int> findDuplicates(vector<int> & nums)
{
	vector<int> r{} ;
	if(nums.size() == 1)
		return r ;
	// sort(nums.begin(), nums.end()) ;
	Sort(nums) ;
	for(int i=0; i<nums.size()-1; ++i)
	{
		if(nums.at(i) == nums.at(i+1))
			r.push_back(nums.at(i)) ;
	}
	return r ;
}

int main()
{
	vector<int> nums{}, result{};
	int len, e;
	
	cout << endl ;
	cout << "  FIND ALL DUPLICATES IN AN ARRAY  " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i < len; i++)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
    result = findDuplicates(nums) ;
	
	if(!result.empty()){
        for(int i=0; i<result.size(); i++)
	    {
	    	cout << " " << result.at(i) << " " ;
	    }
	}
	else{
		cout << "NOT FOUND" << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}