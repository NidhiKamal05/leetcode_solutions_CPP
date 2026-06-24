
// 2974. MINIMUM NUMBER GAME

/** T.C. - O(NLogN) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/minimum-number-game/solutions/8356052/c-solution-runtime-0-ms-beats-100-by-nid-jph4/

/* JAVA */
// https://leetcode.com/problems/minimum-number-game/solutions/8356074/java-sorting-swapping-tc-on-log-n-sc-o1-pd3is/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

vector<int> numberGame(vector<int> & nums){
	sort(nums.begin(), nums.end()) ;
	for(int i=0; i<nums.size()-1; i+=2)
		swap(nums.at(i), nums.at(i+1)) ;
	return nums ;
}

int main(){
	vector<int> nums, arr;
	int len, e;
	
	cout << endl ;
	cout << "  MINIMUM NUMBER GAME " << endl ;
	cout << " `````````````````````" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
    arr = numberGame(nums) ;
	
	cout << endl ;	
	for(int i=0; i<arr.size(); i++)
		cout << " " << arr.at(i) << " " ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}*/