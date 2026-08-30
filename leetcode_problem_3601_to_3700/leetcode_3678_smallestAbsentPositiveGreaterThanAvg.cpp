
// 3678. SMALLEST ABSENT POSITIVE GREATER THAN AVERAGE

/** T.C. - O(N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/smallest-absent-positive-greater-than-average/solutions/8491854/c-2-approaches-hash-set-enumeration-by-n-3qr7/

/* JAVA */
// https://leetcode.com/problems/smallest-absent-positive-greater-than-average/solutions/8491878/java-runtime-beats-100-2-approaches-by-n-lum0/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int smallestAbsent(vector<int>& nums) {
    int n = nums.size(), sum = 0 ;
    unordered_set<int> s ;
    for (int num : nums) {
        sum += num;
        s.insert(num);
    }
    int avg = sum / n ;
    int i = max(1, avg + 1);
    while (s.count(i)) {
        i++;
    }
    return i;
}

/** O(N^2) & O(1) **/
/*int smallestAbsent(vector<int>& nums) {
    int sum = 0, n = nums.size() ;
    for(int num : nums) {
        sum += num ;
    }
    int avg = sum / n ;
    int i = max(1, avg + 1) ;
    while(find(nums.begin(), nums.end(), i) != nums.end()) {
        i++ ;
    }
    return i ;
}*/

int main() {
	int n, e ;
	vector<int> nums ;
	
	cout << endl ;
	cout << "  SMALLEST ABSENT POSITIVE GREATER THAN AVERAGE " << endl ;
	cout << " -----------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter nums in the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = smallestAbsent(nums) ;
	
	cout << endl ;
	cout << "Absent integer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




/*int smallestAbsent(vector<int>& nums) {
    int sum = 0, n = nums.size() ;
    for(int num : nums) {
        sum += num ;
    }
    int avg = sum / n ;
    for(int i=avg+1; i<101; ++i) {
        if(find(nums.begin(), nums.end(), i) == nums.end()) {
            return i ;
        }
    }
    return 0 ;
}*/