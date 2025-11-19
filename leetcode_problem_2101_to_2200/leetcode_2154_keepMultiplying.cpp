
// 2154. KEEP MULTIPLYING FOUND VALUES BY TWO

#include<iostream>
#include<vector>
// #include<algorithm>
#include<unordered_set>

using namespace std ;

/** T.C. - O(N) and S.C. - O(N)**/

int findFinalValue(vector<int>& nums, int original) {
    unordered_set<int> s ;
    for(int& num : nums) {
        s.insert(num) ;
    }
    while(s.find(original) != s.end()) {
        original <<= 1 ;
    }
    return original ;
}

/*int findFinalValue(vector<int>& nums, int original) {
    unordered_set<int> s(nums.begin(), nums.end()) ;
    while(s.count(original)) {
        original <<= 1 ;
    }
    return original ;
}*/

/** T.C. - O(N Log N) and S.C. - O(1)**/
/*int findFinalValue(vector<int>& nums, int original) {
	sort(nums.begin(), nums.end()) ;
	int n = nums.size() ;
	for(int i=0; i<n; ++i) {
		if(nums[i] == original) {
			original *= 2 ;
		}
	}
	return original ;
}*/

int main() {
	vector<int> nums ;
	int e, n, original ;
	
	cout << endl ;
	cout << "  KEEP MULTIPLYING FOUND VALUES BY TWO " << endl ;
	cout << " ......................................" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter original =  " ;
	cin >> original ;
	
	cout << endl ;
    e = findFinalValue(nums, original) ;
	
	cout << "Original = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*void Sort(vector<int> & v)	{
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}*/