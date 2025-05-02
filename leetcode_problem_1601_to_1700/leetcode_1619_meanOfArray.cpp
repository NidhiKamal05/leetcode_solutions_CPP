
// 1619. MEAN OF ARRAY AFTER REMOVING SOME ELEMENTS

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v){
	int t ;
	for(int i=0; i<v.size()-1; ++i)	{
		for(int j=v.size()-1; j>i; --j){
			if(v.at(j) < v.at(j-1)){
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
}

double trimMean(vector<int> & arr){
	Sort(arr) ;
	// sort(arr.begin(), arr.end()) ;
	int percent5 = (arr.size()*5)/100 ;
	int sum = 0, cnt = 0 ;
	for(int i=percent5; i<arr.size()-percent5; ++i){
		sum += arr.at(i) ;
		++cnt ;
	}
	return (((double)sum)/cnt) ;
}

int main(){
	vector<int> arr{} ;
    int l, e ;
	double mean ;
	
	cout << endl ;
	cout << "  MEAN OF ARRAY AFTER REMOVING SOME ELEMENTS " << endl ;
	cout << " ============================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array : " << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		arr.push_back(e) ;
	}
	
	mean = trimMean(arr) ;
	
	cout << endl ;
	cout << "Mean = " << mean << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}