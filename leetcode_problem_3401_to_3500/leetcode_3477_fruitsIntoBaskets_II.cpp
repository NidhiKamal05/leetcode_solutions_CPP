
// 3477. FRUITS INTO BASKETS II

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int numOfUnplacedFruits(int[] fruits, int[] baskets) {
        int n = fruits.length ;
        int placed = 0 ;
        for(int fruit : fruits) {
            for(int j=0; j<n; ++j) {
                if(baskets[j] >= fruit) {
                    ++placed ;
                    baskets[j] = -1 ;
                    break ;
                }
            }
        }
        return n - placed ;
    }
}*/

int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
	int n = fruits.size() ;
	int placed = 0 ;
	for(int& fruit : fruits) {
		for(int j=0; j<n; ++j) {
			if(baskets[j] >= fruit) {
				++placed ;
				baskets[j] = -1 ;
				break ;
			}
		}
	}
	return n - placed ;
}

int main() {
	int n, e ;
	vector<int> fruits, baskets ;
	
	cout << endl ;
	cout << "  FRUITS INTO BASKETS II " << endl ;
	cout << " ------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		fruits.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter elements of the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		baskets.push_back(e) ;
	}
	
	e = numOfUnplacedFruits(fruits, baskets) ;
	
	cout << endl ;
	cout << "Answer = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}