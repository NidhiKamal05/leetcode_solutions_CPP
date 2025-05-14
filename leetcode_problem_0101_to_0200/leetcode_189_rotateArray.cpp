
// 189. ROTATE ARRAY

#include<iostream>
#include<vector>

using namespace std ;

void rotate(vector<int> & nums, int k)
{
	int x ;
	x = k%nums.size() ;
	if(x != 0){
	    vector<int> t{} ;
	    vector<int> :: iterator it ;
	    for(it=nums.end()-x; it<nums.end(); ++it)
	    {
	    	t.push_back(*it) ;
	    }    
        for(it=nums.begin(); it<nums.end()-x; ++it)
	    {
	    	t.push_back(*it) ;
	    }	
	    nums.clear() ;
	    for(it=t.begin(); it<t.end(); ++it)
	    {
	    	nums.push_back(*it) ;
	    }
        t.clear() ;
	}
}

/*
void rotate(vector<int> & nums, int k)
{
	int x ;
	x = k%nums.size() ;
	if(x != 0){
		reverse(nums.begin(), nums.end()-x) ;
		reverse(nums.end()-x, nums.end()) ;
		reverse(nums.begin(), nums.end()) ;
	}
}
*/

int main()
{
    vector<int> nums{} ;
	int e, k ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  ROTATE ARRAY  " << endl ;
	cout << " ----********---- " << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> k ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<k; i++)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter number of steps to rotate array : " ;
	cin >> k ;
	
	rotate(nums, k) ;
	
	cout << endl ;
	
	cout << "[" ;
	for(it=nums.begin(); it<nums.end()-1; ++it)
	{
		cout << *(it) << "," ;
	}
	cout << *(it) << "]"  << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*
for(int j=0; j<k; ++j)
{
    it = nums.begin() ;
    nums.insert(it, nums.back()) ;
    nums.pop_back() ;
}
*/
/*
if(k>0)
{
	it = nums.begin() ;
	nums.insert(it, nums.back()) ;
	nums.pop_back() ;
	k-- ;
	rotate(nums, k) ;
}
*/
	
/*
for(it=nums.end()-(k%nums.size()); it<nums.end(); ++it)
{
	t.push_back(*it) ;
}
for(it=nums.begin(); it<nums.end()-(k%nums.size()); ++it)
{
	t.push_back(*it) ;
}
nums.clear() ;
for(it=t.begin(); it<t.end(); ++it)
{
    nums.push_back(*it) ;		
}
t.clear() ;
*/