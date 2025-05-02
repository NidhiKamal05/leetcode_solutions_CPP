
// 3162. FIND THE NUMBER OF GOOD PAIRS I

#include<iostream>
#include<vector>

using namespace std ;

int numberOfPairs(vector<int> & nums1, vector<int> & nums2, int k){
	int c = 0 ;
	for(int i=0; i<nums1.size(); ++i){
		for(int j=0; j<nums2.size(); ++j){
			int n = nums2.at(j)*k ;
			if(nums1.at(i)%n == 0){
				++c ;
			}
		}
	}
	return c ;
}

int main()
{
	vector<int> nums1;
	vector<int> nums2;
	int m, n, k ;
	int e ;
	
	cout << endl ;
	cout << " FIND THE NUMBER OF GOOD PAIRS I " << endl ;
	cout << "---------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of array 1 : " ;
	cin >> m ;
	
	cout << endl ;
	cout << "Enter elements of array 1......."  << endl ;
	for(int i=0; i<m; ++i)
	{
		cin >> e ;
		nums1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of array 2 : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of array 2......."  << endl ;
	for(int i=0; i<n; ++i)
	{
		cin >> e ;
		nums2.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter a +ve integer.... " << endl ;
	cout << "k = " ;
	cin >> k ;
	
	e = numberOfPairs(nums1, nums2, k) ;
	
	cout << endl ;
	cout << "Number of Good pairs = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}