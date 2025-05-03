
// 2161. PARTITION ARRAY ACCORDING TO GIVEN PIVOT

#include<iostream>
#include<vector>

using namespace std ;

vector<int> pivotArray(vector<int>& nums, int pivot) {
	int n = nums.size() ;
	vector<int> pLess ;
	vector<int> p ;
	vector<int> pGreater ;
	vector<int> ans ;
	for(int i=0; i<n; ++i) {
		if(nums[i] < pivot) {
			pLess.push_back(nums[i]) ;
		}
		else if(nums[i] > pivot) {
			pGreater.push_back(nums[i]) ;
		}
		else {
			p.push_back(nums[i]) ;
		}
	}
	for(int i=0; i<pLess.size(); ++i) {
		ans.push_back(pLess[i]) ;
	}
	for(int i=0; i<p.size(); ++i) {
		ans.push_back(p[i]) ;
	}
	for(int i=0; i<pGreater.size(); ++i) {
		ans.push_back(pGreater[i]) ;
	}
	return ans ;
}

int main(){
	vector<int> nums ;
	vector<int> ans ;
	int pivot, l, e ;
	
	cout << endl ;
	cout << "  PARTITION ARRAY ACCORDING TO GIVEN PIVOT " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
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
	cout << "pivot = " ;
	cin >> pivot ;
	
	ans = pivotArray(nums, pivot) ;
	
	cout << endl ;
	cout << "After partition...." << endl ;
	for(int i=0; i<ans.size(); ++i)
		cout << " " << ans[i] << " " ;
	
	cout << endl << endl ;
	system("pause") ;
	
	return 0 ;
}