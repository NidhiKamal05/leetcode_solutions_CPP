
// 2824. COUNT PAIRS WHOSE SUM IS LESS THAN TARGET

#include<iostream>
#include<vector>

using namespace std ;

int countPairs(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end()) ;
    int cnt = 0 ;
    int i = 0 ;
    int j = nums.size()-1 ;
    while(i < j) {
        if(nums[i]+nums[j] < target) {
            cnt += j-i ;
            ++i ;
        }
        else {
            --j ;
        }
    }
    return cnt ;
}

int countPairs(vector<int> & nums, int target){
	int cnt = 0 ;
	for(int i=0; i<nums.size()-1; ++i)
		for(int j=i+1; j<nums.size(); ++j)
			if((nums.at(i)+nums.at(j)) < target)
				++cnt ;
	return cnt ;
}

int main(){
	vector<int> nums{} ;
	int len, e, target ;
	
	cout << endl ;
	cout << "  COUNT PAIRS WHOSE SUM IS LESS THAN TARGET " << endl ;
	cout << " ```````````````````````````````````````````" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter target : " ;
	cin >> target ;
	
	cout << endl ;
    e = countPairs(nums, target) ;
	
	cout << "Count = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}