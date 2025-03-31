
// 58. LENGTH OF LAST WORD

#include<iostream>
#include<cstring>

using namespace std ;

int lengthOfLastWord(string s)
{
	int l = 0 ;
	int x ;
	string m ;
	string n(" ") ;
	int i = s.length()-1; 
	while(i>=0)
	{
		m = s.at(i) ;
		x = m.compare(n) ;
		if((l>0)&&(x==0))
		{
			break ;
		}
		if(x == 0)
		{
			--i ;
		}
		else
		{
			++l ;
			--i ;
		}
	}
	return l ;
}

int main()
{
	string s ;
	int length ;
	
	cout << endl ;
	cout << "  LENGTH OF LAST WORD  " << endl ;
	cout << " -----***********----- " << endl ;
	
	cout << endl ;
	cout << "Enter a string..... " << endl ;
	cout << "s = " ;
	getline(cin, s) ;
	
	length = lengthOfLastWord(s) ;
	
	cout << endl ;
	
	cout << "Length of last word = " << length << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}