
// 345. REVERSE VOWELS OF A STRING

#include<iostream>
#include<cstring>

using namespace std ;

string reverseVowels(string s)
{
	char t ;
	int i = 0 ;
	int j = s.length()-1 ;
	while(i < j)
	{
		if((s.at(i)=='a')||(s.at(i)=='e')||(s.at(i)=='i')||(s.at(i)=='o')||(s.at(i)=='u')
			||(s.at(i)=='A')||(s.at(i)=='E')||(s.at(i)=='I')||(s.at(i)=='O')||(s.at(i)=='U'))
		{
			if((s.at(j)=='a')||(s.at(j)=='e')||(s.at(j)=='i')||(s.at(j)=='o')||(s.at(j)=='u')
			    ||(s.at(j)=='A')||(s.at(j)=='E')||(s.at(j)=='I')||(s.at(j)=='O')||(s.at(j)=='U'))
		    {
				t = s.at(i) ;
				s.at(i) = s.at(j) ;
				s.at(j) = t ;
				++i ;
				--j ;
			}
			else
			{
				--j ;
			}
		}
		else if((s.at(j)=='a')||(s.at(j)=='e')||(s.at(j)=='i')||(s.at(j)=='o')||(s.at(j)=='u')
			||(s.at(j)=='A')||(s.at(j)=='E')||(s.at(j)=='I')||(s.at(j)=='O')||(s.at(j)=='U'))
		{
			if((s.at(i)=='a')||(s.at(i)=='e')||(s.at(i)=='i')||(s.at(i)=='o')||(s.at(i)=='u')
			    ||(s.at(i)=='A')||(s.at(i)=='E')||(s.at(i)=='I')||(s.at(i)=='O')||(s.at(i)=='U'))
		    {
				t = s.at(j) ;
				s.at(j) = s.at(i) ;
				s.at(i) = t ;
				++i ;
				--j ;
			}
			else 
			{
				++i ;
			}
		}
		else 
		{
			++i ;
			--j ;
		}
	}
	return s ;
}

int main()
{
	string s ;
	string r ;
	
	cout << endl ;
	cout << "  REVERSE VOWELS OF A STRING  " << endl ;
	cout << " ----====================---- " << endl ;
	
	cout << endl ;
	cout << "Enter a string...... " << endl ;
	cout << "s = " ;
	cin >> s ;
		
	cout << endl ;
	
	r = reverseVowels(s) ;
	
	cout << endl ;
	
	cout << endl << " After Reverse...." ;
	cout << endl << "  " <<  r ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}