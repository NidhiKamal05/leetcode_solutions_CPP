

// 594. LONGEST HARMONIOUS SUBSEQUENCE

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int findLHS(vector<int>& nums) {
    int maxLen = 0 ;
    map<int, int> freq ;
    for(int num : nums) {
        freq[num]++ ;
    }
    for(int num : nums) {
        if(freq[num-1] || freq[num+1]) {
            maxLen = max(maxLen, max(freq[num-1]+freq[num], freq[num]+freq[num+1])) ;
        }
    }
    return maxLen ;
}

int main() {
	vector<int> nums ;
	int n, e ;
	
	cout << endl ;
	cout << "  LONGEST HARMONIOUS SUBSEQUENCE " << endl ;
	cout << " ................................" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...." << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = findLHS(nums) ;
	
	cout << endl ;
	cout << "Length of longest harmonious subsequence = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}