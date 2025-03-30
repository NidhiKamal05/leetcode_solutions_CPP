
// 392. IS SUBSEQUENCE

#include<iostream>
#include<cstring>

using namespace std ;

bool isSubsequence(string s, string t)
{
	if(s.length() == 0)
	{
		return true ;
	}
	if(s.length() > 0)
	{
	    int j, count ;
	    j=0 ;
	    count = 0 ;
	    for(int i=0; i<t.length(); ++i)
	    {
	    	if(t.at(i) == s.at(j))
	    	{
	    		++count ;
	    		++j ;
	    		if(s.length() == count)
	            {
	            	return true ;
	            }
	    	}
	    	else
			{
	    		t.erase(i, 1) ;
	    		--i ;
	    	}
	    }
	}
	return false ;
}

int main()
{
	string s, t ;
	bool result ;
	
	cout << endl ;
	cout << "  IS SUBSEQUENCE  " << endl ;
	cout << " ----********---- " << endl ;
	
	cout << "Enter string1..." << endl ;
	cout << "s = " ;
	cin >> s ;
	cout << endl ;
	cout << "Enter string2..." << endl ;
	cout << "t = " ;
	cin >> t ;
	
	result = isSubsequence(s, t) ;
	
	cout << endl ;
	if(result == 1)
	{
	    cout << "Is Subsequence : TRUE" << endl ;
	}
	else
	{
	    cout << "Is Subsequence : FALSE" << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}
