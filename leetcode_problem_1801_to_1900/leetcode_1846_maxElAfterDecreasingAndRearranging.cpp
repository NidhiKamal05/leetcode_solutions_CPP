
// 1846. MAXIMUM ELEMENT AFTER DECREASING AND REARRANGING

/** T.C. - O(N Log N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/solutions/8363469/c-easy-solution-sorting-greedy-o1-space-ksfsb/

/* JAVA */
// https://leetcode.com/problems/maximum-element-after-decreasing-and-rearranging/solutions/8363492/java-by-nidhi_kamal-j0fs/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
    sort(arr.begin(), arr.end()) ;
    int n = arr.size() ;
    arr[0] = 1 ;
    for(int i = 1; i < n; ++i) {
        if(abs(arr[i] - arr[i - 1]) > 1) {
            arr[i] = arr[i - 1] + 1 ;
        }
    }
    return arr[n - 1] ;
}

int main(){
	vector<int> arr ;
	int n, e ;
	
	cout << endl ;
	cout << "   " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; ++i){
		cin >> e ;
		arr.push_back(e) ;
	}
	
	e = maximumElementAfterDecreamentAndRearranging(arr) ;
	
	cout << endl ;
	cout << "Maximum Value = " << e << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




/*void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}*/