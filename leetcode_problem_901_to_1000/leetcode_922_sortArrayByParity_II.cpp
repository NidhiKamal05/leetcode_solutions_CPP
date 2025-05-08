
// 922. SORT ARRAY BY PARITY II

#include<iostream>
#include<vector>

using namespace std ;

vector<int> sortArrayByParityII(vector<int>& nums) {
	int n = nums.size() ;
    vector<int> odd ;
    vector<int> even ;
    for(int& num : nums) {
        if(num%2 == 0)
            even.push_back(num) ;
        else
            odd.push_back(num) ;
    }
    int j=0 ;
    for(int i=0; i<n-1; i+=2) {
        nums[i] = even[j++] ;
    }
    j=0 ;
    for(int i=1; i<n; i+=2) {
        nums[i] = odd[j++] ;
    }
    return nums ;
}

int main() {
	vector<int> nums;
	vector<int> result;
	int l, e ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  SORT ARRAY BY PARITY II " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elemrnts of the array......."  << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		nums.push_back(e) ;
	}
	
	result = sortArrayByParityII(nums) ;
	
	cout << endl ;
	cout << "After Sorting....." << endl ;
	cout << "[" ;
	for(it=result.begin(); it<result.end()-1; ++it)
		cout << *it << ", " ;
	cout << *it << "]" << endl ;
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}