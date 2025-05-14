
// 704. BINARY SEARCH

#include<iostream>
#include<vector>

using namespace std ;

int search(vector<int> & nums, int target)
{
	if((target < nums.at(0))||(target > nums.at(nums.size()-1)))
		return -1 ;
	int start, mid, end ;
	start = 0 ;
	end = nums.size()-1 ;
	while(start<=end){
	    mid = (start + (end-start)/2);
	    if(target == nums.at(mid))
	    	return mid ;
	    if(target > nums.at(mid))
	    	start = mid+1 ;
	    if(target < nums.at(mid))
	    	end = mid-1 ;
	}
	return -1 ;
}

int main()
{
	vector<int> nums{} ;
	int l, k ;
	int target ;
	
	cout << endl ;
	cout << "  BINARY SEARCH  " << endl ;
	cout << " ~~~~~~~~~~~~~~~ " << endl ;
	
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
	cout << "Enter target element : " ;
	cin >> target ;
	
	k = search(nums, target) ;
	
	cout << endl ;
	
	if(k != -1)
	    cout << "Position of the target = " << k << endl ;
	else
		cout << "NOT FOUND !" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}