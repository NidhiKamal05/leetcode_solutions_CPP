
// 1865. FINDING PAIRS WITH A CERTAIN SUM

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std ;

class FindSumPairs {
private:
	vector<int> arr1, arr2 ;
	unordered_map<int, int> cnt ;
public:
	FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
		this->arr1 = nums1 ;
		this->arr2 = nums2 ;
		for(int num : arr2) {
			cnt[num]++ ;
		}
	}
	void add(int index, int val) {
		cnt[arr2[index]]-- ;
		arr2[index] += val ;
		cnt[arr2[index]]++ ;
	}
	int count(int tot) {
		int pairs = 0 ;
		for(int num : arr1) {
			int x = tot - num ;
			if(cnt.find(x) != cnt.end()) {
				pairs += cnt[x] ;
			}
		}
		return pairs ;
	}
} ;

int main() {
	int n1, n2, e ;
	vector<int> nums1, nums2 ;
	char ch = 'y' ;
	
	cout << endl ;
	cout << "  FINDING PAIRS WITH A CERTAIN SUM " << endl ;
	cout << " ----------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array_1, n1 = " ;
	cin >> n1 ;
	
	cout << endl ;
	cout << "Enter elements of the array_1....." << endl ;
	for(int i=0; i<n1; ++i) {
		cin >> e ;
		nums1.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array_2, n2 = " ;
	cin >> n2 ;
	
	cout << endl ;
	cout << "Enter elements of the array_2....." << endl ;
	for(int i=0; i<n2; ++i) {
		cin >> e ;
		nums2.push_back(e) ;
	}
	
	FindSumPairs fsp(nums1, nums2) ;
	
	cout << endl ;
	while(ch == 'y') {
		cout << endl ;
		cout << "1. add(index, val)" << endl ;
		cout << "2. count(tot)" << endl ;
		cout << "3. exit" << endl ;
		
		cout << endl ;
		int choice ;
		cout << "Enter your choice --> " ;
		cin >> choice ;
		
		cout << endl ;
		switch(choice) {
			case 1 :
				int index, val ;
				cout << "Enter index --> " ;
				cin >> index ;
				cout << "Enter val --> " ;
				cin >> val ;
				fsp.add(index, val) ;
				break ;
				
			case 2 :
				int tot, pairs ;
				cout << "Enter tot --> " ;
				cin >> tot ;
				pairs = fsp.count(tot) ;
				cout << "Pairs = " << pairs << endl ;
				break ;
			
			case 3 :
				exit(1) ;
				
			default :
				cout << "Wrong choice...." << endl ;
		}
		
		cout << endl ;
		cout << "Do you want to continue ??" << endl ;
		cout << "Press 'y' for continue / any character to exit...." << endl ;
		cin >> ch ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}