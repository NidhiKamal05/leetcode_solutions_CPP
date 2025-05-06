
// 3046. SPLIT THE ARRAY

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

bool isPossibleToSplit(vector<int> & nums){
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	int cnt = 0 ;
	for(int i=1; i<nums.size(); ++i){
		if(nums.at(i-1) != nums.at(i))
			cnt = 0 ;
		else
			++cnt ;
		if(cnt >= 2)
			return false ;
	}
	return true ;
}

int main(){
	vector<int> nums{} ;
	int len, e ;
	bool ans ;
	
	cout << endl ;
	cout << "  SPLIT THE ARRAY " << endl ;
	cout << " `````````````````" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array......" << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    ans = isPossibleToSplit(nums) ;
	
	if(ans == 1)
		cout << "TRUE....." << endl ;
	else
		cout << "FALSE....." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}