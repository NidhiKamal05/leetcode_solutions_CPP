
// 88. MERGE SORTED ARRAY

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

void merge(vector<int> & nums1, int m, vector<int> & nums2, int n)
{
    for(int i=0; i<n; ++i){
        nums1.at(m+i) = nums2.at(i) ;
    }
    // sort(nums1.begin(), nums1.end()) ;
	nums1 = Sort(nums1) ;
}

int main()
{
	vector<int> nums1;
	vector<int> nums2;
	int m, n ;
	int e ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "Enter size of array 1 : " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter elements of array 1......."  << endl ;
	for(int i=0; i<m; ++i)
	{
		cin >> e ;
		nums1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of array 2 : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of array 2......."  << endl ;
	for(int i=0; i<n; ++i)
	{
		cin >> e ;
		nums2.push_back(e) ;
	}
	
	cout << endl ;
	system("pause") ;
	
	merge(nums1, m, nums2, n) ;
	
	cout << endl ;
	
	if(!(nums1.empty()))
	{
	    cout << "After Merge....." << endl ;
	    cout << "{" ;
	    for(it=nums1.begin(); it<nums1.end()-1; ++it)
	    {
	    	cout << *it << ", " ;
	    }
	    cout << *it << "}" << endl ;
	}
	else
	{
		cout << "EMPTY VECTOR...." << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*void merge(vector<int> & nums1, int m, vector<int> & nums2, int n)
{
	int FLAG ;
	
    for(int x=nums1.size()-1; x>=0; --x)
	{
		if(nums1.at(x) == 0)
			nums1.erase(nums1.end()-1,nums1.end()) ;
		else
			break ;
	}
	for(int y=nums2.size()-1; y>=0; --y)
	{
		if(nums2.at(y) == 0)
			nums2.erase(nums2.end()-1,nums2.end()) ;
		else 
			break ;
	}
	
	FLAG = 1 ;
	for(int i=0; i<nums1.size(); ++i)
	{
		if(nums1.at(i) < 0)
		{
			FLAG = 0 ;
		}
		if(FLAG == 0)
			break ;
	}
	if(FLAG == 1)
	{
	    for(int i=0; i<nums1.size(); ++i)
	    {
	    	if(nums1.at(i) == 0){
	    	    nums1.erase(nums1.begin()+i,nums1.begin()+i+1) ;
	    		--i ;
	    	}
	    }
	}
	
	FLAG = 1 ;
	for(int i=0; i<nums2.size(); ++i)
	{
		if(nums2.at(i) < 0)
		{
			FLAG = 0 ;
		}
		if(FLAG == 0)
			break ;
	}
	if(FLAG == 1)
	{
	    for(int j=0; j<nums2.size(); ++j)
	    {
	    	if(nums2.at(j) == 0){
	    	    nums2.erase(nums2.begin()+j,nums2.begin()+j+1) ;
	    		--j ;
	    	}
	    }
	}
	
	/*if(!(nums1.empty()))
	{
	    //sort(nums1.begin(), nums1.end()) ;
	    nums1 = Sort(nums1) ;
	}
	if(!(nums2.empty()))
	{
	    //sort(nums2.begin(), nums2.end()) ;	
	    nums2 = Sort(nums2) ;
	}
	
	if((!(nums2.empty()))&&((nums1.empty())||(!(nums1.empty()))))
	{
	    for(int k=0; k<nums2.size(); ++k)
	    {
	    	nums1.push_back(nums2.at(k)) ;
	    }
    }
	
	if(!(nums1.empty()))
	{
	    //sort(nums1.begin(), nums1.end()) ;
	    nums1 = Sort(nums1) ;
	}
}*/


/* FLAG = 1 ;
	for(int i=0; i<nums1.size()-1; ++i)
	{
		if(nums1.at(i) < 0)
			FLAG = 0 ;
	}
	if(FLAG == 1)
	{
	    for(int i=0; i<nums1.size(); ++i)
	    {
	    	if(nums1.at(i) == 0){
	    	    nums1.erase(nums1.begin()+i,nums1.begin()+i+1) ;
	    		--i ;
	    	}
	    }
	}
	else if(FLAG == 0)
	{
		for(int x=nums1.size()-1; x>=0; --x)
	    {
		    if(nums1.at(x) == 0)
			    nums1.erase(nums1.end()-1,nums1.end()) ;
		    else
			    break ;
	    }
	}
	
	FLAG = 1 ;
	for(int i=0; i<nums2.size()-1; ++i)
	{
		if(nums2.at(i) < 0)
			FLAG = 0 ;
	}
	if(FLAG == 1)
	{
	    for(int i=0; i<nums2.size(); ++i)
	    {
	    	if(nums2.at(i) == 0){
	    	    nums2.erase(nums2.begin()+i,nums2.begin()+i+1) ;
	    		--i ;
	    	}
	    }
	}
	else if(FLAG == 0)
	{
		for(int x=nums2.size()-1; x>=0; --x)
	    {
		    if(nums2.at(x) == 0)
			    nums2.erase(nums2.end()-1,nums2.end()) ;
		    else
			    break ;
	    }
	}
	*/

   // cout << endl ;
	// cout << "Array 1....." << endl ;
	// cout << "{" ;
	// for(it=v1.begin(); it<v1.end()-1; ++it)
	// {
		// cout << *it << ", " ;
	// }
	// cout << *it << "}" << endl ;
	
	// cout << endl ;
	// cout << "Array 2....." << endl ;
	// cout << "{" ;
	// for(it=v2.begin(); it<v2.end()-1; ++it)
	// {
		// cout << *it << ", " ;
	// }
	// cout << *it << "}" << endl ;
	
	
	
	// for(it=v2.begin(); it<v2.end(); ++it)
	// {
		// v1.push_back(*it) ;
	// } 