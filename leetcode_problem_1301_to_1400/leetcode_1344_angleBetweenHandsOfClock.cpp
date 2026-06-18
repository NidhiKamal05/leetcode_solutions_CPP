
// 1344. ANGLE BETWEEN HANDS OF A CLOCK

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/angle-between-hands-of-a-clock/solutions/8342609/c-0-ms-runtime-beats-100-memory-beats-95-9crf/

/* JAVA */
// https://leetcode.com/problems/angle-between-hands-of-a-clock/solutions/8342615/java-o1-solution-runtime-beats-100-0-ms-zjrtl/

#include<iostream>

using namespace std ;

/**
	FOR MINUTE HAND
	----------------
	60 minute -> 360 deg
	1 minutes -> (360 / 60) deg = 6 deg
	'm' minutes = (6 * m) deg ;
	
	therefore, minute hand angle = 6m

	FOR HOUR HAND
	--------------
	12 hours -> 360 deg
	1 hour -> (360 / 12) deg = 30 deg
	'h' hours -> (h * 30) deg
	
	The hour does not wait until the next hour, it moves continously.
	60 minutes -> 30 deg
	1 minute -> (30 / 60) deg = 0.5 deg
	'm' minutes -> (m * 0.5) deg
	
	therefore, hour hand angle = 30h + 0.5m
**/

double angleClock(int hour, int minutes) {
    int minuteHandAngle = 6 * minutes ;
    double hourHandAngle = (30 * hour) + (0.5 * minutes) ;
    double diff = abs(hourHandAngle - minuteHandAngle) ;
    return min(diff, 360 - diff) ;
}

int main() {
	int hour, minutes ;
	double angle ;
	
	cout << endl ;
	cout << "  ANGLE BETWEEN HANDS OF A CLOCK " << endl ;
	cout << " ````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter hour: " ;
	cin >> hour ;
	
	cout << endl ;
	cout << "Enter minutes: " ;
	cin >> minutes ;
	
    angle = angleClock(hour, minutes) ;
	
	cout << endl ;
	cout << "Smaller angle = " << angle << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}