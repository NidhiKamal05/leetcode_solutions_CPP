
// 3158. FIND THE 'XOR' OF NUMBERS WHICH APPEAR TWICE

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	int temp ;
	for(int i=0; i<v.size()-1; ++i)	{
		for(int j=i+1; j<v.size(); ++j){
	    	if(v.at(j)<v.at(i)){
				temp = v.at(i) ;
				v.at(i) = v.at(j) ;
				v.at(j) = temp ;
			}
	    }
	}
}

int duplicateNumbersXOR(vector<int> & nums){
	// sort(nums.begin(), nums.end()) ;
	Sort(nums) ;
	int XOR = 0 ;
	for(int i=0; i<nums.size()-1; ++i){
		if(nums.at(i) == nums.at(i+1)){
			XOR ^= nums.at(i) ;
			++i ;
		}
	}
	return XOR ;
}

int main(){
	vector<int> nums{} ;
	int l, e, XOR ;
	
	cout << endl ;
	cout << " FIND THE 'XOR' OF NUMBERS WHICH APPEAR TWICE " << endl ;
	cout << "----------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array....." << endl ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	XOR = duplicateNumbersXOR(nums) ;
	
	cout << endl ;
	cout << "'XOR' of numbers which appear twice = " << XOR << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}