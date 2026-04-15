
// 2515. SHORTEST DISTANCE TO TARGET STRING IN A CIRCULAR ARRAY

/** T.C. - O(N * M) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/solutions/7928331/c-0-ms-runtime-beats-100-by-nidhi_kamal-66kz/

/* JAVA */
// https://leetcode.com/problems/shortest-distance-to-target-string-in-a-circular-array/solutions/7928420/java-solution-runtime-beats-100-0-ms-by-rj1ji/

#include<iostream>
#include<vector>

using namespace std ;

int closestTarget(vector<string>& words, string target, int startIndex) {
    int res = words.size() ;
    int n = words.size() ;
    for(int i = 0; i < n; ++i) {
        if(words[i] == target) {
            int d = abs(i - startIndex) ;
            res = min(res, min(d, n - d)) ;
        }
    }
    return res == n ? -1 : res ;
}

int main() {
	vector<string> words ;
	int n, startIndex ;
	string word, target ;
	
	cout << endl ;
	cout << "  SHORTEST DISTANCE TO TARGET STRING IN A CIRCULAR ARRAY " << endl ;
	cout << " ````````````````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i = 0; i<n; i++){
		cin >> word ;
		words.push_back(word) ;
	}
	
	cout << endl ;
	cout << "Enter target = " ;
	cin >> target ;
	
	cout << endl ;
	cout << "Enter start index = " ;
	cin >> startIndex ;
	
    n = closestTarget(words, target, startIndex) ;
	
	cout << endl ;
	cout << "Shortest Distance = " << n << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}