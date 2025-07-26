
// 2784. CHECK IF ARRAY IS GOOD

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std ;

bool isGood(vector<int>& nums) {
    sort(nums.rbegin(), nums.rend()) ;
    unordered_map<int, int> freq ;
    for(int& num : nums) {
        freq[num]++ ;
    }
    int maxEl = nums[0] ;
    for(int num=1; num<maxEl; ++num) {
        if(freq[num] != 1) {
            return false ;
        }
    }
    int n = nums.size() ;
    return freq[maxEl] == 2 && n == maxEl+1 ;
}

int main() {
	vector<int> nums ;
	int len, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF ARRAY IS GOOD " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array......" << endl ;
	for(int i = 0; i<len; i++) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
    ans = isGood(nums) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}*/



//** WRONG ANSWER **//
/*bool isGood(vector<int>& nums) {
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	int n = nums.size() ;
	if(n == 1)
		return false ;
	if(nums[n-1]==n-1 && nums[n-2]==n-1)
		return true ;
	return false ;
}
bool isGood(vector<int>& nums) {
    sort(nums.begin(), nums.end()) ;
    int n = nums.size() ;
    map<int, int> freq ;
    for(int& n : nums) {
        freq[n]++ ;
    }
    int num = nums[n-1] ;
    if(freq[num] == 2) {
        for(auto& f : freq) {
            if(f.first != num && f.second != 1) {
                return false ;
            }
        }
    }
    else {
        return false ;
    }
    return true ;
}*/