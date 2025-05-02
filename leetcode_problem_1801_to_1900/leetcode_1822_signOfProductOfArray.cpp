
// 1822. SIGN OF THE PRODUCT OF AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	int temp ;
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i), v.at(j)) ;
}

int arraySign(vector<int> & nums){
	for(int i=0; i<nums.size(); ++i){
		if(nums.at(i)>0)
			nums.at(i) = 1 ;
		else if(nums.at(i)<0)
			nums.at(i) = -1 ;
		else
			return 0 ;
	}
	int cnt = 0 ;
	// sort(nums.begin(), nums.end()) ;
	Sort(nums) ;
	for(int i=0; i<nums.size(); ++i){
		if(nums.at(i)<0)
			++cnt ;
		else break ;
	}
	if(cnt%2 != 0)
		return -1 ;
	return 1 ;
}

int main()
{
	vector<int> nums{} ;
	int l, e, sign ;
	
	cout << endl ;
	cout << "  SIGN OF THE PRODUCT OF AN ARRAY " << endl ;
	cout << " =================================" << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	sign = arraySign(nums) ;
	
	cout << endl ;
	
	cout << "Sign = " << sign << endl ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}