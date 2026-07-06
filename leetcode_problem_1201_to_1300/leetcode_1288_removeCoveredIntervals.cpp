
// 1288. REMOVE COVERED INTERVALS

/** T.C. - O(N Log N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/remove-covered-intervals/solutions/8380000/c-solution-by-nidhi_kamal-kigp/

/* JAVA */
// https://leetcode.com/problems/remove-covered-intervals/solutions/8380015/java-runtime-beats-9321-sorting-custom-c-c5fw/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

/** WITHOUT CUSTOM COMPARATOR **/
/*class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        // Negate the second element to flip the order
        for (auto &interval : intervals) {
            interval[1] = -interval[1];
        }

        // Default sort: ascending by start, then ascending by -end
        sort(intervals.begin(), intervals.end());

        // Restore the original end values
        for (auto &interval : intervals) {
            interval[1] = -interval[1];
        }

        int remaining = 0, maxEnd = 0;
        for (auto &interval : intervals) {
            cout << endl << interval[0] << ", " << interval[1];
            if (interval[1] > maxEnd) {
                ++remaining;
                maxEnd = interval[1];
            }
        }
        return remaining;
    }
};
*/

int removeCoveredIntervals(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end(),
        [](const vector<int>& a, const vector<int>& b) {
            if(a[0] == b[0]) {
                return a[1] > b[1] ;   // larger end first
            }
            return a[0] < b[0] ;    // smaller start first
        }
    ) ;
    int remaining = 0, maxEnd = 0 ;
    for(vector<int>& interval : intervals) {
        // cout << endl << interval[0] << ", " << interval[1];
        if(interval[1] > maxEnd) {
            ++remaining ;
            maxEnd = interval[1] ;
        }
    }
    return remaining ;
}

int main() {
	vector<vector<int>> intervals ;
	int n, l, r ;
	
	cout << endl ;
	cout << "  REMOVE COVERED INTERVALS " << endl ;
	cout << " ``````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter intervals....." << endl ;
	for(int i = 0; i < n; i++) {
		cout << endl ;
		cout << "l = " ;
		cin >> l ;
		cout << "r = " ;
		cin >> r ;
		intervals.push_back({l, r}) ;
	}
	
    r = removeCoveredIntervals(intervals) ;
	
	cout << endl ;
	cout << "Remaining intervals = " << r << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




/*int removeCoveredIntervals(vector<vector<int>>& intervals) {
	sort(intervals.rbegin(), intervals.rend()) ;
	int n = intervals.size(), cnt = 0 ;
	for(int i = 0; i < n - 1; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if(intervals[i][0] > intervals[j][0] && intervals[i][1] < intervals[j][1]) {
				++cnt ;
				break ;
			}
		}
	}
	return n - cnt ;
}*/