
// 66. PLUS ONE

#include<iostream>
#include<vector>

using namespace std ;

vector<int> plusOne(vector<int> & digits)
{
	// vector<int> t{} ;
	int n = 0 ;
	
	for(int i=0; i<digits.size()-1; ++i)
	{
        if(digits.at(i) == 0)
		{
	    	digits.erase(digits.begin()+i, digits.begin()+i+1) ;
			--i ;
	    }
		else
		{
			break ;
		}
    }
	
    digits.back()+=1 ;
	
	if((digits.size() == 1)&&(digits.back()>9))
	{
		n = digits.back() ;
		digits.back()/=10 ;
		digits.push_back(n%10) ;
	}	
	else
	{
	    if(digits.back()>9)
	    {
	    	for(int i=digits.size()-1; i>0; --i)
	    	{
	    			n = digits.at(i) ;
	    		    (digits.at(i-1))+=(digits.at(i)/10) ;
	    			digits.at(i) = (n%10) ;
	    	}
            if(digits.front() > 9)
	        {
	        	digits.push_back(n%10) ;
	        	digits.front()/=10 ;
	        }			
	    }
	}
	// for(int i=0; i<digits.size(); ++i)
	// {
		// t.push_back(digits.at(i)) ;
	// }
	// return t ;
	return digits ;
}

/* vector<int> :: iterator it ;
for(it=digits.end()-1; it>digits.begin(); --it){
	if((*it)>9){
		n = (*it) ;
		(*(it-1))+=((*(it))/10) ;
		(*it) = (n%10) ;
	}
	else
	{
		break ;
	}		
	digits.push_back(n%10) ;
	digits.front()/=10 ;
} */

int main()
{
	vector<int> digits{} ;
	// vector<int> d{} ;
	int l, k ;
	
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << "  PLUS ONE  " << endl ;
	cout << " --******-- " << endl ;
	
	cout << endl ;
	cout << "Enter the size of array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> k ;
		digits.push_back(k) ;
	}
	
	// d = plusOne(digits) ;
	digits = plusOne(digits) ;
	
	// cout << endl ;
	
	// cout << "[" ;
	// for(it=d.begin(); it<d.end()-1; ++it)
	// {
		// cout << *(it) << "," ;
	// }
	// cout << *(it) << "]"  << endl ;
	cout << endl ;
	
	cout << "[" ;
	for(it=digits.begin(); it<digits.end()-1; ++it)
	{
		cout << *(it) << "," ;
	}
	cout << *(it) << "]"  << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

	/*if(digits.front() == 0){
		digits.erase(digits.begin(), digits.begin()+1) ;
		digits.back()+=1 ;
	    if(digits.back()>9)
	    {
	        n = digits.back() ;
	    	digits.back()/=10 ;
	    }
		if(n > 9)
		{
			digits.push_back(n%10) ;
		}
	}
	else{
	    digits.back()+=1 ;
	    if(digits.back()>9)
	    {
	        n = digits.back() ;
	    	digits.back()/=10 ;
	    }
		if(n > 9)
		{
			digits.push_back(n%10) ;
		}
	}*/

    /*vector<int> t{} ;
	int FLAG, n=0 ;
	vector<int> :: iterator it ;
	FLAG = 1 ;
	
	for(int i=0; i<digits.size()-1; ++i)
	{
		if(digits.at(i) < 0)
		{
			FLAG = 0 ;
			break ;
		}
	}
	
	if(FLAG == 1)
	{
		for(int i=0; i<digits.size()-1; ++i)
		{
			if(digits.at(i) == 0)
			{
				digits.erase(digits.begin()+i, digits.begin()+i+1) ;
				--i ;
			}
		}
	    digits.back()+=1 ;
	    if(digits.back()>9)
	    {
	        n = digits.back() ;
	    	digits.back()/=10 ;
	    }
		if(n > 9)
		{
		    n%=10 ;
			digits.push_back(n) ;
		}
	}
	else if(FLAG == 0)
	{
		digits.back()+=1 ;
	    if(digits.back()>9)
	    {
	        n = digits.back() ;
	    	digits.back()/=10 ;
	    }
		if(n > 9)
		{
			n%=10 ;
			digits.push_back(n) ;
		}
	}*/