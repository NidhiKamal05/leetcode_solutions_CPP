
// 3169. COUNT DAYS WITHOUT MEETINGS

#include<iostream>
#include<vector>

using namespace std ;

int countDays(int days, vector<vector<int>>& meetings) {
    int noMeetings = 0, latestEnd = 0 ;
    sort(meetings.begin(), meetings.end()) ;
    for(auto& m : meetings) {
        int start = m[0], end = m[1] ;
        if(start > latestEnd+1) {
            noMeetings += (start - latestEnd - 1) ;
        }
        latestEnd = max(latestEnd, end) ;
    }
    noMeetings += (days - latestEnd) ;
    return noMeetings ;
}

int main() {
	vector<vector<int>> meetings ;
	int e, n, days ;
	
	cout << endl ;
	cout << "  COUNT DAYS WITHOUT MEETINGS " << endl ;
	cout << " `````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the 2D array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements in the 2D array...... " << endl ;
	for(int i=0; i<n; ++i) {
		vector<int> v ;
		for(int i=0; i<2; ++i) {
			cin >> e ;
			v.push_back(e) ;
		}
		meetings.push_back(v) ;
	}
	
	cout << endl ;
	cout << "Enter number days = " ;
	cin >> days ;
	
    e = countDays(days, meetings) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}