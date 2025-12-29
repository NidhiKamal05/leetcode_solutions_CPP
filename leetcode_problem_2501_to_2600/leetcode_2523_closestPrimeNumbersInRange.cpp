
// 2523. CLOSEST PRIME NUMBERS IN RANGE

#include<iostream>
#include<vector>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    private boolean isPrime(int num) {
        if(num == 1) {
            return false ;
        }
        for(int i=2; i*i<=num; ++i) {
            if(num % i == 0) {
                return false ;
            }
        }
        return true ;
    }
    public int[] closestPrimes(int left, int right) {
        if(left > right) {
            return new int[]{-1, -1} ;
        }
        List<Integer> prime =new ArrayList<>() ;
        for(int num=left; num<=right; ++num) {
            if(isPrime(num)) {
                prime.add(num) ;
            }
        }
        if(prime.size() < 2) {
            return new int[]{-1, -1} ;
        }
        int minDiff = Integer.MAX_VALUE ;
        int[] closestPair = new int[2] ;
        Arrays.fill(closestPair, -1) ;
        for(int i=1; i<prime.size(); ++i) {
            int diff = prime.get(i) - prime.get(i-1) ;
            if(diff < minDiff) {
                minDiff = diff ;
                closestPair[0] = prime.get(i-1) ;
                closestPair[1] = prime.get(i) ;
            }
        }
        return closestPair ;
    }
}*/

bool isPrime(int num) {
    if(num == 1) {
        return false ;
    }
    for(int i=2; i*i<=num; ++i) {
        if(num % i == 0) {
            return false ;
        }
    }
    return true ;
}

vector<int> closestPrimes(int left, int right) {
    if(left > right) {
        return {-1, -1} ;
    }
    vector<int> prime ;
    for(int num=left; num<=right; ++num) {
        if(isPrime(num)) {
            prime.push_back(num) ;
        }
    }
    if(prime.size() < 2) {
        return {-1, -1} ;
    }
    int minDiff = INT_MAX ;
    vector<int> closestPair(2, -1) ;
    for(int i=1; i<prime.size(); ++i) {
        int diff = prime[i] - prime[i-1] ;
        if(diff < minDiff) {
            minDiff = diff ;
            closestPair[0] = prime[i-1] ;
            closestPair[1] = prime[i] ;
        }
    }
    return closestPair ;
}

int main() {
	int left, right ;
	vector<int> closestPair ;
	
	cout << endl ;
	cout << "  CLOSEST PRIME NUMBERS IN RANGE " << endl ;
	cout << " --------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, left = " ;
	cin >> left ;
	
	cout << endl ;
	cout << "Enter an integer, right = " ;
	cin >> right ;
	
	closestPair = closestPrimes(left, right) ;
	
	cout << endl ;
	cout << "Closest Prime Numbers...." << endl ;
	cout << "[" ;
	for(int& p : closestPair) {
		cout << " " << p ;
	}
	cout << " ]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}