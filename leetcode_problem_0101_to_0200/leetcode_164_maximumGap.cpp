
// 164. MAXIMUM GAP

/** T.C. - O(N logN) & S.C. - O(logN) ** /

/* C++ */
// https://leetcode.com/problems/maximum-gap/solutions/8624445/c-solution-beats-9195-by-nidhi_kamal-ip8m/

/* JAVA */
// https://leetcode.com/problems/maximum-gap/solutions/8624448/java-solution-sorting-by-nidhi_kamal-uvvt/

#include<iostream>
#include<vector>

using namespace std ;

int maximumGap(vector<int>& nums) {
	if(nums.size() < 2) {
		return 0 ;
	}
	sort(nums.begin(), nums.end()) ;
	int maxGap = 0 ;
	for(int i=1; i<nums.size(); ++i) {
		maxGap = max(maxGap, nums[i]-nums[i-1]) ;
	}
	return maxGap ;
}

int main() {
	vector<int> nums ;
	int e, n ;
	
	cout << endl ;
	cout << "  MAXIMUM GAP " << endl ;
	cout << " ~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    e = maximumGap(nums) ;	
	
	cout << endl ;	
	cout << "Maximum Gap = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*void Sort(vector<int> & v)	{
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}*/