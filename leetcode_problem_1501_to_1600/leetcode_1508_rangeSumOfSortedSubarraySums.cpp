
// 1508. RANGE SUM OF SORTED SUBARRAY SUMS

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

int rangeSum(vector<int> & nums, int n, int left, int right){
	int MOD = 1000000007 ;
    vector<int> subarraySums{} ;
    int sum = 0 ;
    for(int i=0; i<n; ++i){
        sum = 0 ;
        for(int j=i; j<n; ++j){
            sum += nums.at(j) ;
            subarraySums.push_back(sum) ;
        }
    }
    // sort(subarraySums.begin(), subarraySums.end()) ;
	Sort(subarraySums) ;
    sum = 0 ;
    for(int i=left-1; i<right; ++i)
        sum = (sum += subarraySums.at(i)) % MOD ;
    return sum ;
}

int main()
{
	vector<int> nums{} ;
	int n, e, left, right ;
	
	cout << endl ;
	cout << "  RANGE SUM OF SORTED SUBARRAY SUMS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<n; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Left index = " ;
	cin >> left ;
	cout << "Right index = " ;
	cin >> right ;
	
	cout << endl ;
    e = rangeSum(nums, n, left, right) ;
	
	cout << "Range Sum = " << e << endl ;
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}