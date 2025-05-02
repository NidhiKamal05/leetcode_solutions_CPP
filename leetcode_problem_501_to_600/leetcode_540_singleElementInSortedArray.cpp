
// 540. SINGLE ELEMENT IN A SORTED ARRAY

#include<iostream>
#include<vector>

using namespace std ;

int singleNonDuplicate(vector<int> & nums){
	int single = 0 ;
	for(int i=0; i<nums.size(); ++i){
		single ^= nums.at(i) ;
	}
	return single ;
}

/*int singleNonDuplicate(vector<int> & nums){
	int single = 0 ;
	int i = 0 ;
	int j = nums.size()-1 ;
	while(i <= j){
		if(i != j){
			single ^= nums.at(i) ;
			single ^= nums.at(j) ;
		}
		else{
			single ^= nums.at(i) ;
		}
		++i ;
		--j ;
	}
	return single ;
}*/

int main(){
	int len, e ;
	vector<int> nums{} ;
	
	cout << endl ;
	cout << " SINGLE ELEMENT IN A SORTED ARRAY " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter length of the array...." << endl ;
	cin >> len ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<len; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = singleNonDuplicate(nums) ;
	
	cout << endl ;
	cout << "Single element in the array is " << e << endl ;
	
	cout << endl ;
	system("pause") ;
	
	return 0 ;
}