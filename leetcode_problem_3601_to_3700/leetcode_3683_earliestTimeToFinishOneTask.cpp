
// 3683. EARLIEST TIME TO FINISH ONE TASK

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/earliest-time-to-finish-one-task/solutions/8489547/c-easy-solution-by-nidhi_kamal-pt2o/

/* JAVA */
// https://leetcode.com/problems/earliest-time-to-finish-one-task/solutions/8489555/java-solution-0-ms-runtime-beats-100-by-c9ryn/

#include<iostream>
#include<vector>

using namespace std ;

int earliestTime(vector<vector<int>>& tasks) {
    int finishTime = 201 ;
    for(vector<int> task : tasks) {
        finishTime = min(finishTime, task[0] + task[1]) ;
    }
    return finishTime ;
}

int main() {
	int n, s, t ;
	vector<vector<int>> tasks ;
	
	cout << endl ;
	cout << "  EARLIEST TIME TO FINISH ONE TASK " << endl ;
	cout << " ----------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter tasks in the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cout << "\nEnter start time, s = " ;
		cin >> s ;
		cout << "Enter time taking, t = " ;
		cin >> t ;
		tasks.push_back({s, t}) ;
	}
	
	t = earliestTime(tasks) ;
	
	cout << endl ;
	cout << "Earliest finish time = " << t << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}