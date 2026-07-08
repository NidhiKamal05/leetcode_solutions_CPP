
// 2600. K ITEMS WITH THE MAXIMUM SUM

/** T.C. - O(1) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/k-items-with-the-maximum-sum/solutions/8384349/c-runtime-beats-100-memory-beats-9118-0-4frvm/

/* JAVA */
// https://leetcode.com/problems/k-items-with-the-maximum-sum/solutions/8384357/java-1-ms-runtime-beats-100-tc-o1-sc-o1-vcps0/

#include<iostream>

using namespace std 

int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
	int maxSum = 0 ;
	if(k <= numOnes) {
		maxSum = k ;
	}
	else if(k <= numOnes + numZeros) {
		maxSum = numOnes ;
	}
	else {
		maxSum = numOnes - (k - numOnes - numZeros) ;  // sum = (all Ones) - (forced Neg Ones)
	}
	return maxSum ;
}

int main() {
	int numOnes, numZeros, numNegOnes, k, maxSum ;
	
	cout << endl ;
	cout << "  K ITEMS WITH THE MAXIMUM SUM " << endl ;
	cout << " ==============================" << endl ;
	
	cout << endl ;
	cout << "Enter a number of 1's, numOnes = " ;
	cin >> numOnes ;
	
	cout << endl ;
	cout << "Enter a number of 0's, numZeros = " ;
	cin >> numZeros ;
	
	cout << endl ;
	cout << "Enter a number of -1's, numNegOnes = " ;
	cin >> numNegOnes ;
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	maxSum = kItemsWithMaximumSum(numOnes, numZeros, numNegOnes, k) ;
	
	cout << endl ;
	cout << "Maximum Sum = " << maxSum << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
	int maxSum = 0 ;
	vector<int> temp ;
	for(int i=0; i<numOnes; ++i) {
		temp.push_back(1) ;
	}
	for(int i=0; i<numZeros; ++i) {
		temp.push_back(0) ;
	}
	for(int i=0; i<numNegOnes; ++i) {
		temp.push_back(-1) ;
	}
	for(int i=0; i<k; ++i) {
		maxSum += temp[i] ;
	}
	return maxSum ;
}*/