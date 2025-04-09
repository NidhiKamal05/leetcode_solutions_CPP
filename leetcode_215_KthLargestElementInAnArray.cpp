
// 215. Kth LARGEST ELEMENT IN AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v)
{
	int t ;
	for(int i=0; i<v.size()-1; ++i)
	{
		for(int j=v.size()-1; j>i; --j)
		{
			if(v.at(j) < v.at(j-1))
			{
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
}

int findKthLargest(vector<int> & nums, int k){
	int i = 0 ;
	// sort(nums.begin(), nums.end()) ;
	Sort(nums) ;
	i = nums.size() - k ;
	return nums.at(i) ;
}

int main()
{
	vector<int> nums{};
	int len, e, k;
	
	cout << endl ;
	cout << "  Kth LARGEST ELEMENT IN AN ARRAY   " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i < len; i++)
	{
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl << "Enter an integer k : " ;
	cin >> k ;
	
    e = findKthLargest(nums, k) ;
	
	cout << k << "th largest element in the array = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}