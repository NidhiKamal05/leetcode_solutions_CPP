
// 852. PEAK INDEX IN A MOUNTAIN ARRAY

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/peak-index-in-a-mountain-array/solutions/8592301/c-runtime-beats-100-on-time-o1-space-by-zntps/

/* JAVA */
// https://leetcode.com/problems/peak-index-in-a-mountain-array/solutions/8592305/java-solution-beats-9161-by-nidhi_kamal-42gw/

#include<iostream>
#include<vector>

using namespace std ;

int peakIndexInMountainArray(vector<int>& arr) {
    int i = 0 ;
    while(arr[i] < arr[i+1]) {
        ++i ;
    }
    return i ;
}

/*int peakIndexInMountainArray(vector<int>& arr) {
    int left = 0, right = arr.size()-1, mid ;
    while(left < right) {
        mid = left + ((right-left)/2) ;
        if(arr[mid] < arr[mid+1]) {
            left = mid + 1 ;
        }
        else {
            right = mid ;
        }
    }
    return left ;
}*/

int main() {
	vector<int> arr ;
	int e, n ;
	
	cout << endl ;
	cout << "  PEAK INDEX IN A MOUNTAIN ARRAY " << endl ;
	cout << " ````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		arr.push_back(e) ;
	}
	
	cout << endl ;
    e = peakIndexInMountainArray(arr) ;
	
	cout << "Peak index = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*int peakIndexInMountainArray(vector<int>& arr) {
    int n = arr.size() ;
    int peak = INT_MIN ;
    int index = 0 ;
    for(int i=1; i<n-1; ++i) {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
            if(arr[i] > peak) {
                peak = arr[i] ;
                index = i ;
            }
        }
    }
    if(arr[0] > peak) {
        peak = arr[0] ;
        index = 0 ;
    }
    if(arr[n-1] > peak) {
        peak = arr[n-1] ;
        index = n-1 ;
    }
    return index ;
}*/