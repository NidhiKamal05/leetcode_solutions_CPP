
// 3131. FIND THE INTEGER ADDED TO ARRAY I

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	int temp ;
	for(int i=0; i<v.size()-1; ++i)	{
		for(int j=i+1; j<v.size(); ++j){
	    	if(v.at(j)<v.at(i)){
				temp = v.at(i) ;
				v.at(i) = v.at(j) ;
				v.at(j) = temp ;
			}
	    }
	}
}

int addedInteger(vector<int>& nums1, vector<int>& nums2) {
    // sort(nums1.begin(),nums1.end()) ;
    // sort(nums2.begin(),nums2.end()) ;
	Sort(nums1) ;
	Sort(nums2) ;
    return ((nums2.at(0))-(nums1.at(0))) ;
}

int main()
{
	vector<int> nums1{};
	vector<int> nums2{};
	int l, e ;
	
	cout << " FIND THE INTEGER ADDED TO ARRAY I " << endl ;
	cout << "```````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of arrays : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of array 1......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter elements of array 2......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums2.push_back(e) ;
	}
	
	e = addedInteger(nums1, nums2) ;
	
	cout << endl ;
	
	cout << "Added Integer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}