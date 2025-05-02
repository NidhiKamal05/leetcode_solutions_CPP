
// 1470. SHUFFLE THE ARRAY

#include<iostream>
#include<vector>

using namespace std ;

vector<int> shuffle(vector<int> & nums, int n){
	vector<int> arr ;
	int k = n ;
	for(int i=0; i<n; ++i){
		arr.push_back(nums.at(i)) ;
		arr.push_back(nums.at(k)) ;
		++k ;
	}
	return arr ;
}

int main(){
	vector<int> nums{} ;
	vector<int> arr{} ;
	int n, l, e ;
	
	cout << endl ;
	cout << " SHUFFLE THE ARRAY " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter size of the array...." << endl ;
	cin >> l ;
	
	cout << endl ;	
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;	
	cout << "n = " ;
	cin >> n ;
	
	arr = shuffle(nums, n) ;
	
	cout << endl ;
	cout << "After shuffle...." << endl ;
	for(int i=0; i<arr.size(); ++i)
		cout << " " << arr.at(i) << " " ;
	
	cout << endl << endl ;
	system("pause") ;
	
	return 0 ;
}
