
// 389. FIND THE DIFFERENCE

#include<iostream>
#include<cstring>

using namespace std ;

char findTheDifference(string s, string t)
{
	if(s.length() == 0)
		return t.at(0) ;
	for(int i=0; i<s.length(); ++i)
	{
		for(int j=0; j<t.length(); ++j)
		{
			if(t.at(j) == s.at(i))
			{
				t.erase(j,1) ;
				--j ;
				break ;
			}
		}
	}
	return t.at(0) ;
}

int main()
{
	string s ;
	string t ;
	char c ;
	
	cout << endl ;
	cout << "  FIND THE DIFFERENCE  " << endl ;
	cout << " ===================== " << endl ;
	
	cout << endl ;
	cout << "Enter 1st string..... " << endl ;
	cout << "s = " ;
	cin >> s ;
	// s = "" ;
	
	cout << endl ;
	cout << "Enter 2nd string..... " << endl ;
	cout << "t = " ;
	cin >> t ;
	
	c = findTheDifference(s, t) ;
	
	cout << endl ;
	
	cout << "Difference = " << c << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}