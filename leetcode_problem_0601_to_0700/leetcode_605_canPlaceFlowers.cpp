
// 605. CAN PLACE FLOWERS

/* C++ */
// https://leetcode.com/problems/can-place-flowers/solutions/7583821/c-solution-0-ms-runtime-beats-100-on-by-7h1pk/

/* JAVA */
// https://leetcode.com/problems/can-place-flowers/solutions/7583840/java-runtime-beats-9853-memory-beats-892-r73v/

#include<iostream>
#include<vector> 

using namespace std ;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if(n == 0) {
        return true ;
    }
    int len = flowerbed.size() ;
    for(int i=0; i<len; ++i) {
        bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0) ;
        bool rightEmpty = (i == len-1 || flowerbed[i + 1] == 0) ;
        if(flowerbed[i] == 0 && leftEmpty && rightEmpty) {
            flowerbed[i] = 1 ;
            --n ;
            if(n == 0) {
                return true ;
            }
        }
    }
    return false ;
}

int main() {
	vector<int> flowerbed ;
	int l, e, n ;
	bool ans ;
	
	cout << endl ;
	cout << "  CAN PLACE FLOWERS " << endl ;
	cout << " ```````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		flowerbed.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter no. of flowers can be planted : " ;
	cin >> n ;
	
	ans = canPlaceFlowers(flowerbed, n) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*bool canPlaceFlowers(vector<int>& flowerbed, int n) {
	if((flowerbed.size() == 1 && flowerbed[0]==1)) {
		return false ;
	}
	if((flowerbed.size() == 1 && flowerbed[0]==0) && (n<=1)) {
		return true ;
	}
	// int k = flowerbed.size()/2 == 0 ? flowerbed.size() : flowerbed.size()-1 ;
	// int x = flowerbed[0]==1 ? 2 : 0 ;
	// for(int i=x; i<k; ++i) {
		
	// }
	int k = flowerbed.size() ;
	for(int i=0; i<k-1; i+=2) {
		if(flowerbed[i] == flowerbed[i+1]) {
			flowerbed[i] += 1 ;
			--n ;
		}
		if(n == 0)
			return true ;
	}
	return false ;
}*/


// bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    // int len = flowerbed.size() ;
    // for(int i=0; i<len; i+=2) {
        // if(flowerbed[i] == 1) {
            // continue ;
        // }
        // else {
            // if(flowerbed[i+1] == 0) {
                // flowerbed[i] = 1 ;
                // --n ;
            // }
            // else {
                // ++i ;
            // }
        // }
    // }
    // return !n ;
// }