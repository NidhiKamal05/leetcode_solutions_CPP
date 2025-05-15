
// 2148. COUNT ELEMENTS WITH STRICTLY SMALLER AND GREATER ELEMENTS

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

int countElements(vector<int>& nums) {
	int cnt = 0 ;
    int M = *max_element(nums.begin(), nums.end()) ;
    int m = *min_element(nums.begin(), nums.end()) ;
    map<int,int> mp ;
    for(int i : nums) {
        mp[i]++ ;
    }
    for(auto& entry : mp) {
        if(entry.first > m && entry.first < M) {
            cnt += entry.second ;
        }
    }
    return cnt ;
}

int main() {
	vector<int> nums ;
	int len, e ;
	
	cout << endl ;
	cout << "  COUNT ELEMENTS WITH STRICTLY SMALLER AND GREATER ELEMENTS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array....." << endl ;
	for(int i = 0; i<len; i++) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	e = countElements(nums) ;
	
	cout << endl ;
		cout << "Count = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}