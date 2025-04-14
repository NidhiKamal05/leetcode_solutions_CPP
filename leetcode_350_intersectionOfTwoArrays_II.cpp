
// 350. INTERSECTION OF TWO ARRAYS II

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

vector<int> intersect(vector<int> & nums1, vector<int> & nums2){
	vector<int> r{} ;
	// sort(nums1.begin(), nums1.end()) ;
	Sort(nums1) ;
	// sort(nums2.begin(), nums2.end()) ;
	Sort(nums2) ;
	int i = 0 ;
	int j = 0 ;
	while((i<nums1.size())&&(j<nums2.size())){
		if(nums1.at(i) < nums2.at(j))
			++i ;
		else if(nums1.at(i) > nums2.at(j))
			++j ;
		else{
			r.push_back(nums1.at(i)) ;
			++i ;
			++j ;
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
	
	cout << " INTERSECTION OF TWO ARRAYS II " << endl ;
	cout << "```````````````````````````````" << endl ;
	
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
	
	r = intersect(nums1, nums2) ;
	
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