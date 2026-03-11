
// 3843. FIRST ELEMENT WITH UNIQUE FREQUENCY

/** T.C. -  O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/first-element-with-unique-frequency/solutions/7612851/c-very-easy-simple-solution-on-by-nidhi_-hruv/

/* JAVA */
// https://leetcode.com/problems/first-element-with-unique-frequency/solutions/7612857/java-solution-by-nidhi_kamal-5sbc/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int firstUniqueFreq(int[] nums) {
        Map<Integer, Integer> freq = new HashMap<>() ;
        for(int num : nums) {
            freq.put(num, freq.getOrDefault(num, 0) + 1) ;
        }
        Map<Integer, Integer> freqCnt = new HashMap<>() ;
        for(Map.Entry<Integer, Integer> f : freq.entrySet()) {
            freqCnt.put(f.getValue(), freqCnt.getOrDefault(f.getValue(), 0) + 1) ;
        }
        for(int num : nums) {
            if(freqCnt.get(freq.get(num)) == 1) {
                return num ;
            }
        }
        return -1 ;
    }
}*/

int firstUniqueFreq(vector<int>& nums) {
    unordered_map<int, int> freq ;
    for(int& num : nums) {
        freq[num]++ ;
    }
    unordered_map<int, int> freqCnt ;
    for(auto& f : freq) {
        freqCnt[f.second]++ ;
    }
    for(int& num : nums) {
        if(freqCnt[freq[num]] == 1) {
            return num ;
        }
    }
    return -1 ;
}

int main(){
	vector<int> nums ;
	int len, e ;
	
	cout << endl ;
	cout << "  FIRST ELEMENT WITH UNIQUE FREQUENCY " << endl ;
	cout << " `````````````````````````````````````" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    e = firstUniqueFreq(nums) ;
	
	cout << "1st element with unique frequency = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}