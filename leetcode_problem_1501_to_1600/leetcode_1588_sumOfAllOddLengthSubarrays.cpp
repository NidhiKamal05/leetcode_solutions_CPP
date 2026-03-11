
// 1588. SUM OF ALL ODD LENGTH SUBARRAYS

/** T.C. - O(N^2) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/solutions/7641044/c-runtime-0-ms-beats-100-by-nidhi_kamal-3ytr/

/* JAVA */
// https://leetcode.com/problems/sum-of-all-odd-length-subarrays/solutions/7641054/java-solution-by-nidhi_kamal-glsw/

#include<iostream>
#include<vector>

using namespace std ;

int sumOddLengthSubarrays(vector<int>& arr) {
    int ans = 0, n = arr.size() ;
    for(int i=0; i<n; ++i) {
        int sum = 0 ;
        for(int j=i; j<n; ++j) {
            sum += arr[j] ;
            ans += ((j - i + 1) % 2) ? sum : 0 ;
        }
    }
    return ans ;
}

int main() {
	vector<int> arr ;
	int len, e ;
	
	cout << endl ;
	cout << "  SUM OF ALL ODD LENGTH SUBARRAYS " << endl ;
	cout << " `````````````````````````````````" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++) {
		cin >> e ;
		arr.push_back(e) ;
	}
	
	cout << endl ;
    e = sumOddLengthSubarrays(arr) ;
	
	cout << "Sum = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}