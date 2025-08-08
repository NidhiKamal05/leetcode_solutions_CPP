
// 561. ARRAY PARTITION

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int arrayPairSum(vector<int>& nums) {
	sort(nums.begin(), nums.end()) ;
	int n = nums.size() ;
	int sum = 0 ;
	for(int i=0; i<n-1; i+=2) {
		sum += nums[i] ;
	}
	return sum ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  ARRAY PARTITION " << endl ;
	cout << " `````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    e = arrayPairSum(nums) ;
	
	cout << "Maximized Sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



// void Sort(vector<int> & v)	{
	// for(int i=0; i<v.size()-1; ++i)
		// for(int j=i+1; j<v.size(); ++j)
			// if(v.at(i) > v.at(j))
				// swap(v.at(i),v.at(j)) ;
// }