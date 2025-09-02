
// 2670. FIND THE DISTINCT DIFFERENCE ARRAY

#include<iostream>
#include<vector>
#include<set>

using namespace std ;

vector<int> distinctDifferenceArray(vector<int>& nums) {
	int n = nums.size() ;
    vector<int> diff(n) ;
    for(int i=0; i<n; ++i) {
        set<int> prefix ;
        for(int j=0; j<=i; ++j) {
            prefix.insert(nums[j]) ;
        }
        set<int> suffix ;
        for(int j=i+1; j<n; ++j) {
            suffix.insert(nums[j]) ;
        }
        diff[i] = (prefix.size() - suffix.size()) ;
    }
    return diff ;
}

int main(){
	vector<int> nums ;
	vector<int> diff ;
	int l, e ;
	
	cout << endl ;
	cout << "  FIND THE DISTINCT DIFFERENCE ARRAY " << endl ;
	cout << " ````````````````````````````````````" << endl ;
	
	cout << endl ;	
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;	
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	diff = distinctDifferenceArray(nums) ;
	
	cout << endl ;
	cout << "Distinct difference array......" << endl ;
	for(int i=0; i<diff.size(); ++i)
		cout << " " << diff.at(i) << " " ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}