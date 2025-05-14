
// 34. FIRST AND LAST POSITION OF A ELEMENT

#include<iostream>
#include<vector>

using namespace std ;

vector<int> searchRange(vector<int> & nums, int target) 
{
	vector<int> v{} ;
	if(nums.size() == 0){
		v.push_back(-1) ;
		v.push_back(-1) ;
		return v ;
	}
	int x, y ;
	int i = 0 ;
	int j = nums.size()-1 ;
	int FLAG = 0 ;
	while(j>=i){
		if(nums.at(i) == target){
			x = i ;  // cout << "-------- x = " << x << endl ;
			FLAG = 1 ;
		}
		else
			++i ;
		if(nums.at(j) == target){
			y = j ;  // cout << "-------- y = " << y << endl ;
			FLAG = 1 ;
		}
		else
			--j ;
		if((x == i) && (y == j))
	    	break ;
	}  // cout << "......... x = " << x << endl ;  cout << "....... y = " << y << endl ;
	if(FLAG == 1){
	    v.push_back(x) ;
	    v.push_back(y) ;
	}
	if(FLAG == 0){
		v.push_back(-1) ;
		v.push_back(-1) ;
	}		
	return v ;
}

int main()
{
	vector<int> nums{} ;
	vector<int> v{} ;
	int l, e, target ;
	
	cout << endl ;
	cout << "  FIRST AND LAST POSITION OF A ELEMENT  " << endl ;
	cout << " `````````````````````````````````````` " << endl ;
	
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
	cout << "Enter target number : " ;
	cin >> target ;
	
	v = searchRange(nums, target) ;
	
	cout << endl ;
	cout << "[ " ;
	for(int i=0; i<v.size(); ++i)
	{
		cout << v.at(i) << " " ;
	}
	cout << "]" ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}