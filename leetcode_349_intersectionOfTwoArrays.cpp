
// 349. INTERSECTION OF TWO ARRAYS

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v)
{
	int temp ;
	for(int i=0; i<v.size()-1; ++i)
	{
		for(int j=i+1; j<v.size(); ++j)
	    {
	    	if(v.at(j)<v.at(i))
			{
				temp = v.at(i) ;
				v.at(i) = v.at(j) ;
				v.at(j) = temp ;
			}
	    }
	}
}

vector<int> intersection(vector<int> & nums1, vector<int> & nums2)
{
	vector<int> r{} ;
	if((!(nums1.empty()))&&(nums2.empty()))
		return r ;
	if((!(nums2.empty()))&&(nums1.empty()))
		return r ;
	// sort(nums1.begin(), nums1.end()) ;
	Sort(nums1) ;
	// sort(nums2.begin(), nums2.end()) ;
	Sort(nums2) ;
	
	for(int i=0; i<nums1.size(); ++i){
		for(int j=0; j<nums2.size(); ++j){
			if(nums1.at(i) < nums2.at(j))
				break ;
			if(nums1.at(i) == nums2.at(j)){
				if(r.empty() || (r.at(r.size()-1)!=nums1.at(i))){
					r.push_back(nums1.at(i)) ;
				    break ;
				}
			}
		}
	}
	return r ;
}

int main()
{
	vector<int> nums1{};
	vector<int> nums2{};
	vector<int> r{};
	int l, e ;
	
	vector<int> :: iterator it ;
	
	cout << " INTERSECTION OF TWO ARRAYS " << endl ;
	cout << "````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of array 1 : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of array 1......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of array 2 : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of array 2......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		nums2.push_back(e) ;
	}
	
	r = intersection(nums1, nums2) ;
	
	cout << endl ;
	
	if(!(r.empty()))
	{
	    cout << "Intersection....." << endl ;
	    cout << "[" ;
	    for(it=r.begin(); it<r.end()-1; ++it)
	    {
	    	cout << *it << ", " ;
	    }
	    cout << *it << "]" << endl ;
	}
	else
	{
		cout << "No Intersection...." << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}