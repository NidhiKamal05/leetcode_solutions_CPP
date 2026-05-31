
// 2126. DESTROYING ASTEROIDS

/** T.C. - O(N Log N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/destroying-asteroids/solutions/8304638/c-solution-by-nidhi_kamal-1xr6/

/* JAVA */
// https://leetcode.com/problems/destroying-asteroids/solutions/8304641/java-runtime-beats-9330-sorting-greedy-b-g3eg/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
	sort(asteroids.begin(), asteroids.end()) ;
    long long m = mass ;
    for(int asteroid : asteroids) {
        if(m < asteroid) {
            return false ;
        }
        m += asteroid ;
    }
    return true ;
}

int main() {
	vector<int> asteroids ;
	int n, e, mass ;
	bool ans ;
	
	cout << endl ;
	cout << "  DESTROYING ASTEROIDS " << endl ;
	cout << " ``````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter mass of a planet, mass = " ;
	cin >> mass ;
	
	cout << endl ;
	cout << "Enter size of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i < n; i++){
		cin >> e ;
		asteroids.push_back(e) ;
	}
	
    ans = asteroidsDestroyed(mass, asteroids) ;
	
	cout << endl ;
	cout << (ans ? "TRUE..." : "FALSE...") << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
	sort(asteroids.begin(), asteroids.end()) ;
	int n = asteroids.size() ;
	for(int i = 0; i < n; ++i) {
		if(mass < asteroids[i]) {
			return false ;
		}
		mass += asteroids[i] ;
	}
	return true ;
}*/