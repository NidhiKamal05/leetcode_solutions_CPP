
// 917. REVERSE ONLY LETTERS

#include<iostream>
#include<cstring>

using namespace std ;

string reverseOnlyLetters(string s)
{
	int i = 0 ;
	int j = s.length()-1 ;
	while(i <= j)
	{
	    if(isalpha(s.at(i)))
	    {
	    	if(isalpha(s.at(j)))
	    	{			
	    	    swap(s.at(i), s.at(j)) ;
	    	    ++i ; 
	    	    --j ;
	    	}
	    	else
	    		--j ;
	    }
	    else if(isalpha(s.at(j)))
	    {
	    	if(isalpha(s.at(i)))
	    	{			
	    	    swap(s.at(j), s.at(i)) ;
	    	    ++i ; 
	    	    --j ;
	    	}
	    	else
	    		++i ;
	    }
	    else
	    {
	    	++i ;
	    	--j ;
	    }
	}
	return s ;
}

// string reverseOnlyLetters(string s)
// {
	// char t ;
	// int i, j ;
	// i = 0 ;
	// j = s.length()-1 ;
	// while(i < j){
		// if(((s.at(i)>=65)&&(s.at(i)<=90))||((s.at(i)>=97)&&(s.at(i)<=122)))
		// {			
			// if(((s.at(j)>=65)&&(s.at(j)<=90))||((s.at(j)>=97)&&(s.at(j)<=122)))
			// {
				// t = s.at(i) ;
				// s.at(i) = s.at(j) ;
				// s.at(j) = t ;
				// ++i ;
				// --j ;
			// }
			// else
			// {
				// --j ;
			// }
		// }
		// else if(((s.at(j)>=65)&&(s.at(j)<=90))||((s.at(j)>=97)&&(s.at(j)<=122)))
		// {			
			// if(((s.at(i)>=65)&&(s.at(i)<=90))||((s.at(i)>=97)&&(s.at(i)<=122)))
			// {
				// t = s.at(j) ;
				// s.at(j) = s.at(i) ;
				// s.at(i) = t ;
				// ++i ;
				// --j ;
			// }
			// else
			// {
				// ++i ;
			// }
		// }
		// else{
			// ++i ;
			// --j ;
		// }
	// }
	// return s ;
// }

int main()
{
	string s ;
	string r ;
	
	cout << endl ;
	cout << "  REVERSE ONLY LETTERS  " << endl ;
	cout << " ----==============---- " << endl ;
	
	cout << endl ;
	cout << "Enter a string...... " << endl ;
	cout << "s = " ;
	cin >> s ;
		
	cout << endl ;
	
	r = reverseOnlyLetters(s) ;
	
	cout << endl ;
	
	cout << endl << " After Reverse...." ;
	cout << endl << "  " <<  r ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}
