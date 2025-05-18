
// 575. DISTRIBUTE CANDIES

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int distributeCandies(int[] candyType) {
        int n = (candyType.length)/2 ;
        Set<Integer> s = new HashSet<>() ;
        for(int candy : candyType) {
            s.add(candy) ;
        }
        return (s.size() >= n) ? n : s.size() ;
    }
}*/

int distributeCandies(vector<int>& candyType) {
	int n = (candyType.size())/2 ;
    unordered_set<int> set ;
    for(int candy : candyType) {
        set.insert(candy) ;
    }
    return (set.size() >= n) ? n : set.size() ;
}

int main() {
	vector<int> candyType ;
	int l, e ;
	
	cout << endl ;
	cout << "  DISTRIBUTE CANDIES " << endl ;
	cout << " ````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array..... " << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		candyType.push_back(e) ;
	}
	
    e = distributeCandies(candyType) ;
	
	cout << endl ;
	cout << "Number of types = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}