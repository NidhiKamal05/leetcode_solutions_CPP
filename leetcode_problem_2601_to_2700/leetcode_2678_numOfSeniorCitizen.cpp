
// 2678. NUMBER OF SENIOR CITIZENS

#include<iostream>
#include<vector>
#include<cstring>

using namespace std ;

int countSeniors(vector<string> & details){
	int cnt = 0 ;
	for(int i=0; i<details.size(); ++i)
		if(stoi((details.at(i)).substr(11,2)) > 60)
			++cnt ;
	return cnt ;
}

// SHOWS ERROR //
/*int countSeniors(vector<string> & details){
	int cnt = 0 ;
	for(int i=0; i<details.size(); ++i){
		int num = ((stoi(details[i][11]))*10)+(stoi(details[i][12]))
		if(num > 60)
			++cnt ;
	}
	return cnt ;
}*/

int main(){
	string detail ;
	vector<string> details{} ;
	int l ;
	
	cout << endl ;
	cout << " NUMBER OF SENIOR CITIZENS " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;	
	cout << "Enter details...." << endl ;
	for(int i=0; i<l; ++i){
		cin >> detail ;
		details.push_back(detail) ;
	}
	
	cout << endl ;	
	l = countSeniors(details) ;
	
	cout << "Number of senior citizens = " << l << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}