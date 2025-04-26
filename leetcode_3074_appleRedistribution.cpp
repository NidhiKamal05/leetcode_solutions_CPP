
// 3074. APPLE REDISTRIBUTION INTO BOXES

// #include<iostream>
// #include<vector>

#include<bits/stdc++.h>

using namespace std ;

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
	int totalApple = accumulate(apple.begin(), apple.end(), 0) ;
	Sort(capacity) ;
	int cnt = 0 ;
	int i = capacity.size()-1 ;
	while(totalApple > 0){
		totalApple -= capacity.at(i) ;
		++cnt ;
		--i ;
	}
	return cnt ;
}

int main(){
	vector<int> apple, capacity;
	int len, e, boxes ;
	
	cout << endl ;
	cout << "  APPLE REDISTRIBUTION INTO BOXES " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter no. of packs : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array....." << endl ;
	for(int i=0; i<len; i++){
		cin >> e ;
		apple.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter no. of boxes : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array....." << endl ;
	for(int i=0; i<len; i++){
		cin >> e ;
		capacity.push_back(e) ;
	}
	
    boxes = minimumBoxes(apple, capacity) ;
	
	cout << "Minimum no. of boxes = " << boxes << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}