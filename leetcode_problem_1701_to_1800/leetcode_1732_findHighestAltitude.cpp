
// 1732. FIND THE HIGHEST ALTITUDE

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/find-the-highest-altitude/solutions/8345635/c-0-ms-runtime-beats-100-on-solution-by-vcqxi/

/* JAVA */
// https://leetcode.com/problems/find-the-highest-altitude/solutions/8345645/java-solution-beats-100-0-ms-easy-prefix-a3l0/

#include<iostream>
#include<vector>

using namespace std ;

int largestAltitude(vector<int>& gain) {
    int highestAltitude = 0, prefixSum = 0 ;
    for(int& g : gain) {
        prefixSum += g ;
        highestAltitude = max(highestAltitude, prefixSum) ;
    }
    return highestAltitude ;
}

int main() {
	vector<int> gain ;
	int n, e ;
	
	cout << endl ;
	cout << "  FIND THE HIGHEST ALTITUDE " << endl ;
	cout << " ```````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		gain.push_back(e) ;
	}
	
    e = largestAltitude(gain) ;
	
	cout << endl ;
	cout << "Highest Altitude = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}