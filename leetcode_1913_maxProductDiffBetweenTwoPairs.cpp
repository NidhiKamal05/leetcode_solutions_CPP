
// 1913. MAXIMUM PRODUCT DIFFERENCE BETWEEN TWO PAIRS

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

int maxProductDifference(vector<int> & nums){
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	int a = nums.at(nums.size()-1)*nums.at(nums.size()-2) ;
	int b = nums.at(0)*nums.at(1) ;
	return a-b ;
}

int main(){
	vector<int> nums{} ;
	int len, e ;
	
	cout << endl ;
	cout << "  MAXIMUM PRODUCT DIFFERENCE BETWEEN TWO PAIRS " << endl ;
	cout << " ``````````````````````````````````````````````" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    e = maxProductDifference(nums) ;
	
	cout << "Maximum product difference between two pairs = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}