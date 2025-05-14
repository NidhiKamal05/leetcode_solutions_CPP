
// 4. MEDIAN OF TWO SORTED ARRAYS

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	int t ;
	for(int i=0; i<v.size()-1; ++i){
		for(int j=v.size()-1; j>i; --j){
			if(v.at(j) < v.at(j-1)){
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
}

double findMedianSortedArrays(vector<int> & nums1, vector<int> & nums2){
	double median ;
	int mid, start, end ;
	if(nums1.size()==0 && nums2.size()==0)
		median = (double)0 ;
	if(nums1.size()==0){
		if(nums2.size()%2 != 0){
			start = 0, end = nums2.size()-1 ;
			mid = (start+end)/2 ;
			median = (double)nums2.at(mid) ;
		}else{
			start = 0, end = nums2.size()-1 ;
			mid = (start+end)/2 ;
			median = (((double)nums2.at(mid)+(double)nums2.at(mid+1))/2) ;
		}
	}
	else if(nums2.size()==0){
		if(nums1.size()%2 != 0){
			start = 0, end = nums1.size()-1 ;
			mid = (start+end)/2 ;
			median = (double)nums1.at(mid) ;
		}else{
			start = 0, end = nums1.size()-1 ;
			mid = (start+end)/2 ;
			median = (((double)nums1.at(mid)+(double)nums1.at(mid+1))/2) ;
		}
	}
	else{
		for(int i=0; i<nums2.size(); ++i){
			nums1.push_back(nums2.at(i)) ;
		}
		// sort(nums1.begin(), nums1.end()) ;
		Sort(nums1) ;
		if(nums1.size()%2 != 0){
			start = 0, end = nums1.size()-1 ;
			mid = (start+end)/2 ;
			median = (double)nums1.at(mid) ;
		}else{
			start = 0, end = nums1.size()-1 ;
			mid = (start+end)/2 ;
			median = (((double)nums1.at(mid)+(double)nums1.at(mid+1))/2) ;
		}
	}
	return (double)median ;
}

int main()
{
	vector<int> nums1;
	vector<int> nums2;
	int l, e ;
	double median ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  MEDIAN OF TWO SORTED ARRAYS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
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
	
	median = findMedianSortedArrays(nums1, nums2) ;
	
	cout << endl ;
	
	cout << "Median = " << median << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}