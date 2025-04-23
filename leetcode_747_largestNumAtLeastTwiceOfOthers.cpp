
// 747. LARGEST NUMBER AT LEAST TWICE OF OTHERS

#include<iostream>
#include<vector>
#include<cmath>

using namespace std ;

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

int dominantIndex(vector<int> & nums){
	int m = *max_element(nums.begin(), nums.end()) ;
	int index ;
	for(int i=0; i<nums.size(); ++i){
		if(nums.at(i) == m){
			index = i ;
			break ;
		}
	}
	for(int i=0; i<nums.size(); ++i)
		if(i != index)
			if((nums.at(i)*2) > m)
				return -1 ;
	return index ;
}

int main()
{
	vector<int> nums{} ;
	int len, e ;
	
	cout << endl ;
	cout << "  LARGEST NUMBER AT LEAST TWICE OF OTHERS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = dominantIndex(nums) ;
	
	cout << "Index = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}