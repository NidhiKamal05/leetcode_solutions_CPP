
// 2960. COUNT TESTED DEVICES AFTER TEST OPERATIONS

#include<iostream>
#include<vector>

using namespace std ;

int countTestedDevices(vector<int>& batteryPercentages) {
    int testedDevices = 0 ;
    for(int& bP : batteryPercentages) {
        if(bP - testedDevices > 0) {
            ++testedDevices ;
        }
    }
    return testedDevices ;
}

int main() {
	int n, e ;
	vector<int> batteryPercentages ;
	
	cout << endl ;
	cout << "  COUNT TESTED DEVICES AFTER TEST OPERATIONS " << endl ;
	cout << " --------------------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter batteryPercentages in the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		batteryPercentages.push_back(e) ;
	}
	
	e = countTestedDevices(batteryPercentages) ;
	
	cout << endl ;
	cout << "No. of tested devices = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/** T.C. --> O(N^2)**/
/** C++ SOLUTION **/
/*int countTestedDevices(vector<int>& batteryPercentages) {
    int n = batteryPercentages.size(), testedDevice = 0 ;
    for(int i=0; i<n; ++i) {
        if(batteryPercentages[i] > 0) {
            ++testedDevice ;
            for(int j=i+1; j<n; ++j) {
                batteryPercentages[j] = max(0, batteryPercentages[j] - 1) ;
            }
        }
    }
    return testedDevice ;
}*/