
// 242. VALID ANAGRAM

#include<iostream>
#include<cstring>

using namespace std ;

bool isAnagram(string s, string t)
{
	if(s.length()>t.length())
		return false ;
	int i=0 ;
	int j=0 ;
	int count=0 ;
	while((i<t.length())&&(j<s.length()))
	{
		if(t.at(i) == s.at(j))
		{
			++count ;
			s.erase(j, 1) ;
			j=0 ;
			++i ;
		}
		else
		{
			++j ;
		}
	}
	if(count == t.length())
	{
		return true ;
	}
	else 
	{
		return false ;
	}
}

int main()
{
	string s, t ;
	bool result ;
	
	cout << endl ;
	cout << "  VALID ANAGRAM  " << endl ;
	cout << " ----*******---- " << endl ;	
	
	cout << endl ;
	cout << "Enter s..." << endl ;
	cout << "s = " ;
	cin >> s ;
	
	cout << endl ;
	cout << "Enter t..." << endl ;
	cout << "t = " ;
	cin >> t ;
	
	result = isAnagram(s, t) ;
	
	cout << endl ;
	if(result == 1)
	{
	    cout << "TRUE" << endl ;
	}
	else
	{
	    cout << "FALSE"<< endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}