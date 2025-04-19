
// 1480. RUNNING SUM OF 1D ARRAY

#include<iostream>
#include<vector>

using namespace std ;

vector<int> runningSum(vector<int> & nums){
	for(int i=1; i<nums.size(); ++i)
			nums.at(i) += nums.at(i-1) ;
	return nums ;
}

/*vector<int> runningSum(vector<int> & nums){
	vector<int> res{} ;
	int sum ;
	for(int i=0; i<nums.size(); ++i){
		sum = 0 ;
		for(int j=0; j<=i; ++j)
			sum += (nums.at(j)) ;
		res.push_back(sum) ;
	}
	return res ;
}*/

int main(){
	vector<int> nums ;
	int l, e ;
	
	cout << endl ;
	cout << "  RUNNING SUM OF 1D ARRAY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	runningSum(nums) ;
	
	cout << endl ;
	cout << "Running Sum....." << endl ;
	for(int i=0; i<nums.size(); ++i){
		cout << " " << nums.at(i) << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}