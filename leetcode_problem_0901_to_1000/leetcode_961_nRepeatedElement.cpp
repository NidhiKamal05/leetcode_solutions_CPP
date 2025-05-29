
// 961. N-REPEATED ELEMENT IN SIZE 2N ARRAY

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int repeatedNTimes(vector<int>& nums) {
	int n = nums.size() ;
	map<int, int> mp ;
	for(int i : nums)
		mp[i]++ ;
	map<int, int> :: iterator it ;
	for(it=mp.begin(); it!=mp.end(); ++it)
		if(it->second == n/2)
			break ;
	return it->first ;
}

int main()
{
	vector<int> nums ;
	int len, e ;
	
	cout << endl ;
	cout << "  N-REPEATED ELEMENT IN SIZE 2N ARRAY " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array....... " << endl ;

	for(int j=0; j<len; ++j){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = repeatedNTimes(nums) ;
	
	cout << "N-Repeated elements = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}