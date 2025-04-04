
// 2089. TARGET INDICES AFTER SORTING

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v)
{
	int t ;
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j) 
			if(v.at(j) < v.at(i)) 
			{
			    t = v.at(i) ;
			    v.at(i) = v.at(j) ;
			    v.at(j) = t ;
			}
}

vector<int> targetIndices(vector<int> & nums, int target)
{
	// sort(nums.begin(), nums.end()) ;
	Sort(nums) ;
	vector<int> indices{} ;
	for(int i=0; i<nums.size(); ++i)
	{
		if(nums.at(i) == target)
			indices.push_back(i) ;
		else if(nums.at(i) > target)
			break ;
		else
			continue ;
	}
	return indices ;
}

int main()
{
	vector<int> nums{} ;
	vector<int> indices{} ;
	int l, k, target ;
	
	cout << endl ;
	cout << "  TARGET INDICES AFTER SORTING  " << endl ;
	cout << " ============================== " << endl ;
	
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
	
	cout << endl ;
	cout << "Enter target : " ;
	cin >> target ;
	
	indices = targetIndices(nums, target) ;
	
	cout << endl ;
	
	if(!indices.empty())
	{
	    cout << "Indices.... " << endl ;
	    int i=0 ;
	    cout << "[" << indices.at(i) ;
	    for(i=1; i<indices.size(); ++i)
	    {
	    	cout << "," << indices.at(i) ;
	    }
	    cout << "]" ;
    }
	else
		cout << "Target is not present in the array...." ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}

// Sort(nums) ;
	// cout << "nums.... " << endl ;
	// int i=0 ;
	// cout << "[" << nums.at(i) ;
	// for(i=1; i<nums.size(); ++i)
	// {
		// cout << "," << nums.at(i) ;
	// }
	// cout << "]" ;