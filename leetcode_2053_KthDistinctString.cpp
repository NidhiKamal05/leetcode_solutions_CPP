
// 2053. Kth DISTINCT ELEMENT IN AN ARRAY

#include<iostream>
#include<vector>

using namespace std ;

string kthDistinct(vector<string> & arr, int k){
	vector<string> distinct ;
	for(int i=0; i<arr.size(); ++i){
		bool FLAG = 1 ;
		for(int j=0; j<arr.size(); ++j){
			if(i != j)
				if(arr.at(i) == arr.at(j))
					FLAG = 0 ;
			if(FLAG == 0)
				break ;
		}
		if(FLAG == 1)
			distinct.push_back(arr.at(i)) ;
	}
	if(distinct.size() < k)
		return "" ;
	return distinct.at(k-1) ;
}

int main(){
	string s ;
	vector<string> arr ;
	int l, k ;
	
	cout << endl ;
	cout << " Kth DISTINCT ELEMENT IN AN ARRAY " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	for(int i=0; i<l; ++i){
		cin >> s ;
		arr.push_back(s) ;
	}
	
	cout << endl ;
	cout << "Enter a positive integer : " ;
	cin >> k ;
	
	cout << endl ;
	s = kthDistinct(arr, k) ;
	
	cout << "String = " << s << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}