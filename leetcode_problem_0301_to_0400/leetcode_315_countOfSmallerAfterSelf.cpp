
// 315. COUNT OF SMALLER NUMBERS AFTER SELF

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int>& v) {
	int n = v.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(v[i] > v[j]) {
				swap(v[i], v[j]) ;
			}
		}
	}
}

int binarySearch(vector<int>& v, int target) {
	int index ;
	int start = 0, end = v.size()-1, mid ;
	while(start <= end) {
		mid = start+((end-start)/2) ;
		if(v[mid] < target) {
			start = mid+1 ;
		}
		else if(v[mid] > target) {
			end = mid-1 ;
		}
		else {
			end = mid-1 ;
			index = mid ; 
		}
	}
	return index ;
}

vector<int> countSmaller(vector<int>& nums) {
	vector<int> ans ;
	vector<int> arr(nums.begin(), nums.end()) ;
	// sort(arr.begin(), arr.end()) ;
	Sort(arr) ;
	int index ;
	for(int i=0; i<nums.size(); ++i) {
		index = binarySearch(arr, nums[i]) ;
		ans.push_back(index) ;
		arr.erase(arr.begin()+index) ;
	}
	return ans ;
}

int main() {
	vector<int> nums, counts ;
	int l, e ;
	
	cout << endl ;
	cout << "  COUNT OF SMALLER NUMBERS AFTER SELF " << endl ;
	cout << " *************************************" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array...." << endl ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	counts = countSmaller(nums) ;
	
	cout << endl ;
	cout << "Counts....." << endl ;
	for(int i=0; i<counts.size(); ++i){
		cout << " " << counts.at(i) << " " ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}

// TIME LIMIT EXCEED
/*vector<int> countSmaller(vector<int> & nums){
	vector<int> result{} ;
	int c ;
	for(int i=0; i<nums.size()-1; ++i){
		c = 0 ;
		for(int j=i+1; j<nums.size(); ++j){
			if(nums.at(i)>nums.at(j)){
				++c ;
			}
		}
		result.push_back(c) ;
	}
	result.push_back(0) ;
	return result ;
}*/

/*vector<int> countSmaller(vector<int> & nums){
	vector<int> result{} ;
	int c, j, k ;
	for(int i=0; i<nums.size()-1; ++i){
		j = i+1 ;
		k = nums.size()-1 ;
		c = 0 ;
		while(j <= k){
			// cout << "   -" << nums.at(i) << "-" << nums.at(j) << "-" << nums.at(k) << "-" << endl ;
			if((j == k)&&(nums.at(i)>nums.at(j)))
				--c ;
			if(nums.at(i)>nums.at(j))
				++c ;
			if(nums.at(i)>nums.at(k))
				++c ;
			// cout << "    count = " << c << endl ;
		    ++j ;
		    --k ;
		}
		result.push_back(c) ;
	}
	result.push_back(0) ;
	return result ;
}*/