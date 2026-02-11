
// 2091. REMOVING MINIMUM AND MAXIMUM FROM ARRAY

/* C++ */
// https://leetcode.com/problems/removing-minimum-and-maximum-from-array/solutions/7571766/c-runtime-beats-100-memory-beats-9944-by-8gcj/

/* JAVA */
// https://leetcode.com/problems/removing-minimum-and-maximum-from-array/solutions/7571791/java-solution-beats-9687-on-time-o1-spac-dsc6/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int minimumDeletions(vector<int>& nums) {
    int n = nums.size() ;
        
    // find max and min element
    int maxi = *max_element(nums.begin(), nums.end()) ;
    int mini = *min_element(nums.begin(), nums.end()) ;

    // find iterator of max and min element
    auto maxItr = find(nums.begin(), nums.end(), maxi) ;
    auto minItr = find(nums.begin(), nums.end(), mini) ;

    // find index of max and min element
    int maxPos = maxItr - nums.begin() ;
    int minPos = minItr - nums.begin() ;
    
    // delete both elements from start
    int delFromStart = max(minPos + 1, maxPos + 1) ;

    // delete both elements from end
    int delFromEnd = max(n-minPos, n-maxPos) ;

    // delete first element from start and last element from end
    int delFirst = (min(minPos, maxPos)) + 1 ;
    int delLast = n - (max(minPos, maxPos)) ;        

    // return minimum of above 3	
    return min(delFirst + delLast, min(delFromStart, delFromEnd)) ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  REMOVING MINIMUM AND MAXIMUM FROM ARRAY " << endl ;
	cout << " -----------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of array..... " << endl ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<n; ++i) {
	    cin >> e ;
	    nums.push_back(e) ;
	}
	
	e = minimumDeletions(nums) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}