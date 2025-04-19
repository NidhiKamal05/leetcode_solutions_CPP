
// 2778. SUM OF SQUARES OF SPECIAL ELEMENTS

#include<iostream>
#include<vector>
#include<cmath>

using namespace std ;

int sumOfSquares(vector<int> & nums){
	int n = nums.size() ;
	int sum = 0 ;
	for(int i=0; i<n; ++i)
		if(n%(i+1) == 0)
			sum += (pow((nums.at(i)),2)) ;
	return sum ;
}

int main(){
	vector<int> nums{} ;
	int l, e ;
	
	cout << endl ;
	cout << "  SUM OF SQUARES OF SPECIAL ELEMENTS " << endl ;
	cout << " ++++++++++++++++++++++++++++++++++++" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = sumOfSquares(nums) ;
	
	cout << endl ;
	cout << "Sum = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}