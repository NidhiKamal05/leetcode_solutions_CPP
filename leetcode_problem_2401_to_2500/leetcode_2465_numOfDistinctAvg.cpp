
// 2465. NUMBER OF DISTINCT AVERAGES

#include<iostream>
#include<vector>
#include<unordered_set>

using namespace std ;

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

int distinctAverages(vector<int> & nums){
	Sort(nums) ;
	// sort(nums.begin(), nums.end()) ;
	unordered_set<float> distinctAvg ;
	int i = 0 ;
	int j = nums.size()-1 ;
	while(i < j){
		float average = (((float)nums.at(i)+(float)nums.at(j))/2.0) ;
		distinctAvg.insert(average) ;
		++i ;
		--j ;
	}
	return distinctAvg.size() ;
}

int main(){
	vector<int> nums{} ;
	int len, e ;
	
	cout << endl ;
	cout << "  NUMBER OF DISTINCT AVERAGES " << endl ;
	cout << " `````````````````````````````" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	cout << endl ;
    e = distinctAverages(nums) ;
	
	cout << "Maximum product difference between two pairs = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}