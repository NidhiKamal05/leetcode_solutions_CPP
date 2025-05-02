
// 1598. CRAWLER LOG FOLDER

#include<iostream>
#include<vector>
#include<cstring>

using namespace std ;

int minOperation(vector<string> & logs){
	int c=0 ;
	for(int i=0; i<logs.size(); ++i){
		if(logs.at(i) == "../")
			if(c > 0)
				--c ;
		if(logs.at(i) != "./")
			++c ;
	}
	return c ;
}

int main(){
	vector<string> logs{} ;
	string e ;
	int l, count ;
	
	cout << endl ;
	cout << " CRAWLER LOG FOLDER " << endl ;
	cout << "--------------------" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array....." << endl ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		logs.push_back(e) ;
	}
	
	count = minOperation(logs) ;
	
	cout << endl ;
	cout << "Minimum number of operations = " << count << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}