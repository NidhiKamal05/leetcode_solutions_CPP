
// 16. 3SUM CLOSEST

#include<iostream>
#include<vector>
#include<cmath>

using namespace std ;

void Sort(vector<int> & v)	{
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

int threeSumClosest(vector<int>& nums, int target) {
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	int n = nums.size() ;
	int minDiff = INT_MAX ;
	int closest ;
	for(int i=0; i<n; ++i) {
		int j = i+1 ;
		int k = n-1 ;
		while(j < k) {
			int sum = nums[i] + nums[j] + nums[k] ;
			if(sum == target) {
				return sum ;
			}
			else if(sum < target) {
				++j ;
			}
			else {
				--k ;
			}
			int diff = abs(sum-target) ;
			if(diff < minDiff){
				closest = sum ;
				minDiff = diff ;
			}
		}
	}
	return closest ;
}

int main() {
	vector<int> nums ;
	int e, n, target ;
	
	cout << endl ;
	cout << "  3SUM CLOSEST " << endl ;
	cout << " ~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter target : " ;
	cin >> target ;
	
    e = threeSumClosest(nums, target) ;	
	
	cout << endl ;
	
	cout << "3Sum Closest = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}