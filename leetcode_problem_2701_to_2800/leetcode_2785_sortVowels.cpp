
// 2785. SORT VOWELS IN A STRING

#include<iostream>
#include<cstring>
#include<vector>

using namespace std ;

void Sort(vector<char> & v)
{
	int t ;
	for(int i=0; i<v.size()-1; ++i)
	{
		for(int j=v.size()-1; j>i; --j)
		{
			if(v.at(j) < v.at(j-1))
			{
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
}

string sortVowels(string s)
{
	vector<char> t{} ;	
	int FLAG = 0 ;
	for(int i=0; i<s.length(); ++i)
	{
		if((s.at(i)=='a')||(s.at(i)=='e')||(s.at(i)=='i')||(s.at(i)=='o')||(s.at(i)=='u')
			||(s.at(i)=='A')||(s.at(i)=='E')||(s.at(i)=='I')||(s.at(i)=='O')||(s.at(i)=='U'))
		{
			t.push_back(s.at(i)) ; cout << "*" << t.at(t.size()-1) ;
			FLAG = 1 ;
		}
	}
    if(FLAG == 1)
	{	
	    // sort(t.begin(), t.end()) ;
	    Sort(t) ;	
	    int k = 0 ;
	    for(int i=0; i<s.length(); ++i)
	    {
	    	if((s.at(i)=='a')||(s.at(i)=='e')||(s.at(i)=='i')||(s.at(i)=='o')||(s.at(i)=='u')
			    ||(s.at(i)=='A')||(s.at(i)=='E')||(s.at(i)=='I')||(s.at(i)=='O')||(s.at(i)=='U'))
		    {
	    		s.at(i) = t.at(k) ;
	    		++k ;
	    	}
	    }
	}
	return s ;
}

int main()
{
	string s ;
	string r ;
	
	cout << endl ;
	cout << "  SORT VOWELS IN A STRING  " << endl ;
	cout << " ************************* " << endl ;
	
	cout << endl ;
	cout << "Enter a string...... " << endl ;
	cout << "s = " ;
	cin >> s ;
		
	cout << endl ;
	
	r = sortVowels(s) ;
	
	cout << endl ;
	
	cout << endl << " After Sorting...." ;
	cout << endl << "  " <<  r ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}

	
// cout << "\n Before sorting....\n" ;
// for(int j=0; j<t.size(); ++j)
    // cout << "-" << t.at(j) ;
	
// cout << "\n After sorting....\n" ;
// for(int j=0; j<t.size(); ++j)
    // cout << "-" << t.at(j) ;

/*	int i = 0;
	int j = s.length()-1 ;
    while(i<=j)
	{  cout << "L -----------" ;
		if((s.at(i)==97)||(s.at(i)==101)||(s.at(i)==105)||(s.at(i)==111)||(s.at(i)==117)
			||(s.at(i)==65)||(s.at(i)==69)||(s.at(i)==73)||(s.at(i)==79)||(s.at(i)==85))
		{
			t.push_back(s.at(i)) ;
			++i ;
		}
		else if((s.at(i)==97)||(s.at(i)==101)||(s.at(i)==105)||(s.at(i)==111)||(s.at(i)==117)
		        ||(s.at(j)==65)||(s.at(j)==69)||(s.at(j)==73)||(s.at(j)==79)||(s.at(j)==85))
		{
			t.push_back(s.at(j)) ;
			--j ;
		}
		// else if((s.at(i)==97)||(s.at(i)==101)||(s.at(i)==105)||(s.at(i)==111)||(s.at(i)==117))
		// {
			// t.push_back(s.at(i)) ;
			// ++i ;
		// }
		// else if((s.at(j)==97)||(s.at(j)==101)||(s.at(j)==105)||(s.at(j)==111)||(s.at(j)==117))
		// {
			// t.push_back(s.at(j)) ;
			// --j ;
		// }
		else{
			++i ;
			--j ;
		}
	}*/