
// 1464. MAXIMUM PRODUCT OF TWO ELEMENTS IN AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & nums){
	for(int i=0; i<nums.size()-1; ++i)
		for(int j=i+1; j<nums.size(); ++j)
			if(nums.at(i) > nums.at(j))
				swap(nums.at(i), nums.at(j)) ;
}

int maxProduct(vector<int> & nums){
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	int n = nums.size() ;
	int num1 = nums.at(n-1)-1 ;
	int num2 = nums.at(n-2)-1 ;
	return num1*num2 ;
}

int main()
{
	vector<int> nums{} ;
	int l, e, product ;
	
	cout << endl ;
	cout << "  MAXIMUM PRODUCT OF TWO ELEMENTS IN AN ARRAY " << endl ;
	cout << " =============================================" << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	product = maxProduct(nums) ;
	
	cout << endl ;	
	cout << "Maximum product = " << product << endl ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}