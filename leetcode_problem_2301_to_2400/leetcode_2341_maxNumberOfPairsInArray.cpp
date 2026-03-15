
// 2341. MAXIMUM NUMBER OF PAIRS IN ARRAY

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/maximum-number-of-pairs-in-array/solutions/7650444/c-solution-0-ms-runtime-beats-100-on-by-o8cv1/

/* JAVA */
// https://leetcode.com/problems/maximum-number-of-pairs-in-array/solutions/7650454/java-solution-by-nidhi_kamal-hl3j/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

vector<int> numberOfPairs(vector<int>& nums) {
	unordered_map<int, int> freq ;
    for(int num : nums) {
        freq[num]++ ;
    }
    int pair = 0, leftOver = 0 ;
    for(auto f : freq) {
        pair += ((f.second)/2) ;
        if(f.second % 2 == 0) {
            freq[f.first] = 0 ;
        }
        else {
            freq[f.first] = 1 ;
        }
    }
    for(auto f : freq) {
        leftOver += f.second ;
    }
    return {pair, leftOver} ;
}

int main(){
	vector<int> nums, ans ;
	int l, e ;
	
	cout << endl ;
	cout << "  MAXIMUM NUMBER OF PAIRS IN ARRAY " << endl ;
	cout << " ``````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	ans = numberOfPairs(nums) ;
	
	cout << endl ;
	cout << "Answer = [" << ans[0] << "," << ans[1] << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}