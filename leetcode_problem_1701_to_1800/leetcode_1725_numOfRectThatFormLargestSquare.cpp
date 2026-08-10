
// 1725. NUMBER OF RECTANGLES THAT CAN FORM THE LARGEST SQUARE

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/solutions/8453115/c-runtime-beats-9444-easy-solution-by-ni-6dcm/

/* JAVA */
// https://leetcode.com/problems/number-of-rectangles-that-can-form-the-largest-square/solutions/8453129/java-solution-by-nidhi_kamal-oy61/

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

int countGoodRectangles(vector<vector<int>>& rectangles) {
    int n = rectangles.size(), maxLen = 0 ;
    unordered_map<int, int> mp ;
    for(vector<int> rect : rectangles) {
        int side = min(rect[0], rect[1]) ;
        mp[side]++ ;
        maxLen = max(maxLen, side) ;
    }
    return mp[maxLen] ;
}

/*int countGoodRectangles(vector<vector<int>>& rectangles) {
    int n = rectangles.size(), maxLen = 0 ;
    for(int i = 0; i < n; ++i) {
        int side = min(rectangles[i][0], rectangles[i][1]) ;
        rectangles[i] = {side} ;
        maxLen = max(maxLen, side) ;
    }
    int cnt = 0 ;
    for(int i = 0; i < n; ++i) {
        if(rectangles[i][0] == maxLen) {
            ++cnt ;
        }
    }
    return cnt ;
}*/

int main() {
	vector<vector<int>> rectangles ;
	int e, n ;
	
	cout << endl ;
	cout << "  NUMBER OF RECTANGLES THAT CAN FORM THE LARGEST SQUARE " << endl ;
	cout << " ```````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i = 0; i < n; ++i) {
		vector<int> v ;
		for(int j = 0; j < 2; ++j) {
			cin >> e ;
			v.push_back(e) ;
		}
		rectangles.push_back(v) ;
	}
		
    e = countGoodRectangles(rectangles) ;
	
	cout << endl ;
	cout << "Number of rectangles = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}