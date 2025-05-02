
// 2109. ADDING SPACES TO A STRING

#include<iostream>
#include<vector>
#include<cstring>

using namespace std ;

string addSpaces(string s, vector<int> & spaces){
	int i = 0 ;
    int j = 0 ;
    string str ;
    while(j < spaces.size()){
        while(i < spaces.at(j)){
            str += s.at(i) ;
            ++i ;
        }
        str += ' ' ;
        ++j ;
    }
    while(i < s.length()){
        str += s.at(i) ;
        ++i ;
    }
    return str ;
}

/*string addSpaces(string s, vector<int> & spaces){
	int i = 0 ;
	int j = 0 ;
	while(j < spaces.size()){
		i += (spaces.at(j)) ;
		s.insert(i, " ") ;
		
		++j ;
	}
	return s ;
}*/

int main(){
	vector<int> spaces{} ;
	string s ;
	int l, e ;
	
	cout << endl ;
	cout << " ADDING SPACES TO A STRING " << endl ;
	cout << "---------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter a string...." << endl ;
	cout << "s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter size of the array....." << endl ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		spaces.push_back(e) ;
	}
	
	s = addSpaces(s, spaces) ;
	
	cout << endl ;
	cout << "String after adding spaces :- " << endl ;
	cout << s << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}