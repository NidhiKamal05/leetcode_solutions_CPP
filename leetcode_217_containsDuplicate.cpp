
// 217. CONTAINS DUPLICATE

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v)
{
	int temp ;
	for(int i=0; i<v.size()-1; ++i)	{
		for(int j=i+1; j<v.size(); ++j){
	    	if(v.at(j) < v.at(i)){
				temp = v.at(i) ;
				v.at(i) = v.at(j) ;
				v.at(j) = temp ;
			}
	    }
	}
}

bool containsDuplicate(vector<int> & nums)
{
	if(nums.size() == 1)
		return false ;
	// sort(nums.begin(), nums.end()) ;
	Sort(nums) ;
	for(int i=0; i<nums.size()-1; ++i)
		if(nums.at(i) == nums.at(i+1))
		    return true ;
	return false ;
}

int main()
{
	vector<int> nums{} ;
	int l, e ;
	bool r ;
	
	cout << endl ;
	cout << "  CONTAINS DUPLICATE  " << endl ;
	cout << " -----**********----- " << endl ;
	
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
	
	r = containsDuplicate(nums) ;
	
	cout << endl ;
	if(r == 1)
	    cout << "TRUE" << endl ;
	else
	    cout << "FALSE" << endl ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}