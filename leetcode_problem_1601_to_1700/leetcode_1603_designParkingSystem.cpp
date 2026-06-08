
// 1603. DESIGN PARKING SYSTEM

/** T.C. - O(N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/design-parking-system/solutions/8321976/c-solution-beats-8654-by-nidhi_kamal-i1qs/

/* JAVA */
// https://leetcode.com/problems/design-parking-system/solutions/8321990/java-runtime-beats-100-very-easy-solutio-z9t0/

#include<iostream>

using namespace std ;

/** JAVA SOLUTION **/
/*class ParkingSystem {

    private	int b, m, s ;
	private int cntB, cntM, cntS ;

    public ParkingSystem(int big, int medium, int small) {
        b = big ;
		m = medium ;
		s = small ;
		cntB = 0 ;
        cntM = 0 ;
        cntS = 0 ;
    }
    
    public boolean addCar(int carType) {
        if(carType == 1) {
			if(cntB < b) {
				++cntB ;
				return true ;
			}
		}
		else if(carType == 2) {
			if(cntM < m) {
				++cntM ;
				return true ;
			}
		}
		else {
			if(cntS < s) {
				++cntS ;
				return true ;
			}
		}
		return false ;
    }
}*/

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem obj = new ParkingSystem(big, medium, small);
 * boolean param_1 = obj.addCar(carType);
 */

class ParkingSystem {
private:
	int b, m, s ;
	int cntB, cntM, cntS ;
public:
	ParkingSystem(int big, int medium, int small) {
		b = big ;
		m = medium ;
		s = small ;
		cntB = 0, cntM = 0, cntS = 0 ;
	}
	
	bool addCar(int carType) {
		if(carType == 1) {
			if(cntB < b) {
				++cntB ;
				return true ;
			}
		}
		else if(carType == 2) {
			if(cntM < m) {
				++cntM ;
				return true ;
			}
		}
		else {
			if(cntS < s) {
				++cntS ;
				return true ;
			}
		}
		return false ;
	}
} ;

int main() {
	ParkingSystem p(1,1,0) ;
	int carType ;
	bool ans ;
	
	cout << endl ;
	cout << "  DESIGN PARKING SYSTEM " << endl ;
	cout << " =======================" << endl ;
	
	cout << endl ;
	ans = p.addCar(1) ;
	if(ans == 1)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	ans = p.addCar(2) ;
	if(ans == 1)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	ans = p.addCar(3) ;
	if(ans == 1)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	ans = p.addCar(1) ;
	if(ans == 1)
		cout << "TRUE..." << endl ;
	else
		cout << "FALSE..." << endl ;
	
	system("pause") ;
	
	return 0 ;
}