
// 27. REMOVE ELEMENT

#include<iostream>
#include<vector>

using namespace std ;

int removeElement(vector<int> & nums, int val)
{
	int k ;
	
    for(int i=0; i<nums.size(); ++i)	
    {    
        if(nums.at(i) == val)
    	{
    	    nums.erase(nums.begin()+i, nums.begin()+i+1) ;
			--i ;		
        }
    }	
	
	k = nums.size() ;
	
	return k ;
}

int main()
{
	vector<int> nums{} ;
	int len, val, k ;
	
	cout << endl ;
	cout << "  REMOVE ELEMENT  " << endl ;
	cout << " ----********---- " << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> len ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<len; i++)
	{
		cin >> k ;
		nums.push_back(k) ;
	}
	
    cout << "\nEnter a number to remove : " ;
    cin >> val ;
	
	k = removeElement(nums, val) ;
	
	cout << endl ;
	cout << "No. of remaining elements = " << k << endl ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*int removeElement(vector<int> nums, int val)
{
	int k = nums.size() ;	
    for(int i=0; i<nums.size(); ++i)	
    {    
        if(nums.at(i) == val)
    	{
    	    nums.erase(nums.begin()+i, nums.begin()+i+1) ;
    		nums.push_back(val) ;
    		--k ;								
        }
    }
	for(int i=0; i<nums.size(); ++i)
    cout << nums.at(i) ;
    cout << endl ;		
	return k ;
}*/