
// 1748. SUM OF UNIQUE ELEMENTS

#include<iostream>
#include<vector>

using namespace std ;

/*void Sort(vector<int> & v)
{
	int temp ;
	for(int i=0; i<v.size()-1; ++i)
	{
		for(int j=i+1; j<v.size(); ++j)
		{
			if(v.at(i) > v.at(j))
			{
				temp = v.at(i) ;
				v.at(i) = v.at(j) ;
				v.at(j) = temp ;
			}
		}
	}
}*/

int sumOfUnique(vector<int>& nums) {
    map<int, int> mp ;
    for(int num : nums)
        mp[num]++ ;
    map<int, int> :: iterator itr ;
    int sum = 0 ;
    for(itr=mp.begin(); itr!=mp.end(); ++itr)
        if(itr->second == 1)
            sum += (itr->first) ;
    return sum ;
}

/*int sumOfUnique(vector<int> & nums)
{
	vector<int> temp{} ;
	// sort(nums.begin(), nums.end()) ;
	Sort(nums) ;
	int sum = 0 ;
	for(int i=0; i<nums.size()-1; ++i){
		if(nums.at(i) == nums.at(i+1)){
			temp.push_back(nums.at(i)) ;
		}
	}
	for(int i=0; i<temp.size(); ++i){
	    for(int j=0; j<nums.size(); ++j){
			if(nums.at(j) > temp.at(i))
				break ;
			if(nums.at(j) == temp.at(i))
	    	    nums.at(j) = 0 ;
		}
	}	
	for(int i=0; i<nums.size(); ++i){
		sum += nums.at(i) ;
	}
	return sum ;
}*/

int main()
{
	vector<int> nums;
	int l, e ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  SUM OF UNIQUE ELEMENTS " << endl ;
	cout << " ````````````````````````" << endl ;
	
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
	system("pause") ;
	
	e = sumOfUnique(nums) ;
	
	cout << endl ;
	cout << "Sum of Unique Elements = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}