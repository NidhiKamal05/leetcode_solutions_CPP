
// 35. SEARCH INSERT POSITION

#include<iostream>
#include<vector>

using namespace std ;

int searchInsert(vector<int> & nums, int target)
{
	int pos ;
	if(nums.at(0) > target)
    	pos = 0 ;		
    else if(nums.at(nums.size()-1) < target)
    	pos = nums.size() ;
	else
	    for(int i=0; i<nums.size(); ++i){
	    	if((nums.at(i) == target)||(nums.at(i) > target)){
	    		pos = i ;
			    break ;
			}
	    }
	return pos ;
}

int main()
{
	vector<int> nums{} ;
	int l, e, target, pos ;
	
	cout << endl ;
	cout << "  SEARCH INSERT POSITION  " << endl ;
	cout << " ======================== " << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter target : " ;
	cin >> target ;
	
	pos = searchInsert(nums, target) ;
	
	cout << endl ;
	
	cout << "Position = " << pos << endl ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}