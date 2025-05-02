
// 344. REVERSE STRING

#include<iostream>
#include<vector>

using namespace std ;

void reverseString(vector<char> & s)
{
	char t ;
	int i = 0 ;
	int j = s.size()-1 ;
	while(i<=j)
	{
		t = s.at(i) ;
		s.at(i) = s.at(j) ;
		s.at(j) = t ;
		++i ;
		--j ;
	}
}

int main()
{
	vector<char> s{} ;
	int len ;
	char e ;
	
	cout << endl ;
	cout << "  REVERSE STRING  " << endl ;
	cout << " ----********---- " << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> len ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<len; ++i)
	{
		cin >> e ;
		s.push_back(e) ;
	}
	
	cout << endl ;
	
	system("pause") ;
	system("cls") ;
	
	cout << endl << " Before...." ;
	cout << endl << "  [  " ;
	for(int i=0; i<s.size(); ++i)
	{
		cout << "\"" << s.at(i) << "\"  " ;
	}
	cout << "]" ;
	
	reverseString(s) ;
	
	cout << endl ;
	
	cout << endl << " After Reverse...." ;
	cout << endl << "  [  " ;
	for(int i=0; i<s.size(); ++i)
	{
		cout << "\"" << s.at(i) << "\"  " ;
	}
	cout << "]" ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}
