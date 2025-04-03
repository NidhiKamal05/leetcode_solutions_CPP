
// 28. INDEX OF FIRST OCCURRENCE IN A STRING

#include<iostream>
#include<cstring>

using namespace std ;

int strStr(string haystack, string needle)
{
	return (haystack.find(needle)) ;
}

/*
int strStr(string haystack, string needle)
{
	if(needle.length() == 0)
	{
		return -1 ;
	}
	if(needle.length() > 0)
	{
	    int i, j, k, count ;
		i = 0 ;
	    j = 0 ;
	    k = i ;
	    count = 0 ;
	    while((i<haystack.length())&&(j<needle.length()))
	    {
	    	if(haystack.at(i) == needle.at(j))
	    	{
	    		++j ;
	    		++count ;
				++i ;
	    	}
	    	else
	    	{    		
	    		j = 0 ;
				count = 0 ;
				++k ;
				i = k-1 ;
				++i ;
			}
			if(needle.length() == count)
	        {
	        	return k ;
	        }
	    }
		if(needle.length() == count)
	    {
	    	return k ;
	    }
	    else
	    {
	    	return -1 ;
	    }
	}
	return -1 ;
}
*/

// if(string found) {return index} ;
// else {return -1} ;

// INPUT : haystack="sadbutsad", needle="sad" ;      OUTPUT : 0
// INPUT : haystack="leetcode", needle="leeto" ;     OUTPUT : -1

int main()
{
	string haystack, needle ;
	int result ;
	
	cout << endl ;
	cout << "  INDEX OF FIRST OCCURRENCE IN A STRING  " << endl ;
	cout << " ------------***************------------ " << endl ;
	
	cout << endl ;
	cout << "Enter haystack..." << endl ;
	cout << "haystack = " ;
	cin >> haystack ;
	
	cout << endl ;
	cout << "Enter needle..." << endl ;
	cout << "needle = " ;
	cin >> needle ;
	
	result = strStr(haystack, needle) ;
	
	cout << endl ;
	if(result == -1)
	{
	    cout << "NOT FOUND" << endl ;
	}
	else
	{
	    cout << "Index = " << result << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*else
	    	{    		
	    		j = 0 ;
				count = 0 ;
				// k = i+1 ;
				++k ;
				i = k-1 ;
				++i ;
				// continue ;
				// if(haystack.at(i) == needle.at(j))
	    	    // {
	    	    	// ++j ;
	    	    	// ++count ;
			    	// ++i ;
	    	    // }
				// else
				// {
					// ++i ;
				// }	    	
	    	}*/
			
			
			

/*// if(count > 0)
				// {
					// j = 0 ;
				    // if(haystack.at(i) == needle.at(j))
	    	        // {
	    	        	// ++j ;
	    	        	// ++count ;
						// k = i+1 ;
			        	// ++i ;
	    	        // }
				// }
				// else
				// {
					// j = 0 ;
				    // count = 0 ;
				    // i = k ;
				    // i = k-1 ;
				    // ++i ;
					// continue ;
				// }*/