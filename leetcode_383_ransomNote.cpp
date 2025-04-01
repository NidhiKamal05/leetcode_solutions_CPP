
// 383. RANSOM NOTE

#include<iostream>
#include<cstring>

using namespace std ;

bool canConstruct(string ransomNote, string magazine)
{
	int count = 0 ;
	for(int i=0; i<ransomNote.length(); ++i)
	{
		for(int j=0; j<magazine.length(); ++j)
		{
		    if(ransomNote.at(i) == magazine.at(j))
			{
				magazine.erase(j, 1) ;
			    ++count ;				
			    break ;
			}
		}
	}
	if(count == ransomNote.length())
		return true ;
	else 
		return false ;
}

/*bool canConstruct(string ransomNote, string magazine)
{
	int i, j, count ;
	i=0; j=0; count=0;
	while(i<ransomNote.length())
	{
		if(ransomNote.at(i) == magazine.at(j))
		{
			++count ;
			magazine.erase(j, 1) ;
			j=0 ;
			++i ;
		}
		else
		{
			if(magazine.length()>1)
			{
			    ++j ;
			}
			else
			{
				break ;
			}
		}
	}
	if(count == ransomNote.length())
		return true ;
	else 
		return false ;
}*/

int main()
{
	string magazine, ransomNote ;
	bool result ;
	
	cout << endl ;
	cout << "  RANSOM NOTE  " << endl ;
	cout << " ---*******--- " << endl ;	
	
	cout << endl ;
	cout << "Enter magazine..." << endl ;
	cout << "magazine = " ;
	cin >> magazine ;
	
	cout << endl ;
	cout << "Enter ransomNote..." << endl ;
	cout << "ransomNote = " ;
	cin >> ransomNote ;
	
	result = canConstruct(ransomNote, magazine) ;
	
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