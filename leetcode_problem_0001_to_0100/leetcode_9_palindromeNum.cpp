
// 9. PALINDROME NUMBER

/** T.C. - O(log x) & S.C. - O(1) **/

// https://leetcode.com/problems/palindrome-number/solutions/7622175/palindrome-number-by-nidhi_kamal-fgdr/

#include<iostream>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0) {
            return false ;
        }
        long rev = 0 ;
        int n = x ;
        while(n != 0) {
            rev = (rev * 10) + (n % 10) ;
            n /= 10 ;
        }
        return rev == x ;
    }
}*/

bool isPalindrome(int x) {
    if(x < 0) {
        return false ;
    }
    long rev = 0 ;
    int n = x ;
    while(n) {
        rev = (rev * 10) + (n % 10) ;
        n /= 10 ;
    }
    return rev == x ;
}

/*void Reverse(string & s){
	int i=0 ;
	int j=s.length()-1 ;
	while(i <= j){
		swap(s.at(i), s.at(j)) ;
		++i ;
		--j ;
	}
}

bool isPalindrome(int x){
	string str1 = to_string(x) ;
	string str2 = to_string(x) ;
	// reverse(str2.begin(), str2.end()) ;
	Reverse(str2) ;
	return str1 == str2 ;
}*/

/*bool isPalindrome(int x){
	if(x < 0)
		return false ;
	int rev = 0 ;
	int temp = x ;
	while(temp){
		int digit = temp%10 ;
		rev = (rev*10)+digit ;
		temp /= 10 ;
	}
	return x == rev ;
}*/

int main() {
	int x ;
	bool result ;
	
	cout << endl ;
	cout << "  PALINDROME NUMBER  " << endl ;
	cout << " -----*********----- " << endl ;
	
	cout << endl ;
	cout << "Enter an integer..... " << endl ;
	cout << "x = " ;
	cin >> x ;
	
	result = isPalindrome(x) ;
	
	cout << endl ;
	
	if(result == 1)	{
		cout << "x = " << x << " is palindrome number : TRUE " << endl ;
	}
	else {
		cout << "x = " << x << " is palindrome number : FALSE " << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*bool isPalindrome(int x)
{
	if((-9<=x)&&(x<=9))
	{
		return true ;
	}
    else
	{
		vector<int> t{} ;
	    t.push_back(x%10) ;
	    x/=10 ;
		if((x<=-10)||(x>=10))
		{
	        for(int i=0; i<INT_MAX; ++i)
	        {
	        	t.push_back(x%10) ;
	        	x/=10 ;
	        	if((x > 0)&&(x < 10))
	        	{
	        		t.push_back(x) ;
		    		break ;
	        	}
	        }
		}
		else if((-9<=x)&&(x<=9))
		{
			t.push_back(x);
		}
		int p = 0 ;
	    int q = t.size()-1 ;
	    int r = t.size()/2 ;
	    if(t.size() == 2)
	    {
	    	if(t.at(p) != t.at(q))
	       	{
	    		return false ;	    		
	       	}
	       	else
	       	{
	       		return true ;
	       	}
	    }
	    while((p<r)&&(q>r))
	    {
	    	if(t.at(p) != t.at(q))
	    	{
	            return false ;	    		
	    	}
	    	else
	    	{
	    		++p ; 
	    		--q ;
	    	}
	    }
	    return true ;
	}
	return false ;
}*/


    /*else
	{
		string y ;
		int *z = x ;
		y = string(z) ;
		int i, j, k ;
	    i = 0 ;
	    j = y.length()-1 ;
	    k = y.length()/2 ;
	    while((i<k)&&(j>k))
	    {
	    	if(y.at(i) != y.at(j))
	    	{
				return false ;	    		
	    	}
	    	else
	    	{
	    		++i ; 
	    		--j ;
				if(i<=j){
					return true ;
				}
	    	}
	    }
	}*/