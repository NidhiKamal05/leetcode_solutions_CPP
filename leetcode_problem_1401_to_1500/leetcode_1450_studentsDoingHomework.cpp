
// 1450. NUMBER OF STUDENTS DOING HOMEWORK AT A GIVEN TIME

#include<iostream>
#include<vector>

using namespace std ;

int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
	int n = startTime.size() ;
	int cnt = 0 ;
	for(int i=0; i<n; ++i)
		if((startTime.at(i) <= queryTime) && (endTime.at(i) >= queryTime))
			++cnt ;
	return cnt ;
}

int main()
{
	vector<int> startTime, endTime ;
	int len, e, queryTime ;
	
	cout << endl ;
	cout << "  NUMBER OF STUDENTS DOING HOMEWORK AT A GIVEN TIME " << endl ;
	cout << " ```````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array, startTime....... " << endl ;

	for(int j=0; j<len; ++j){
		cin >> e ;
		startTime.push_back(e) ;
	}
	
	cout << endl << "Enter elements of the array, endTime....... " << endl ;
	for(int j=0; j<len; ++j){
		cin >> e ;
		endTime.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter queryTime : " ;
	cin >> queryTime ;
	
    e = busyStudent(startTime, endTime, queryTime) ;
	
	cout << "Number of students doing homework at the time = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}