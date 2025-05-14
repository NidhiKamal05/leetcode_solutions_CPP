
// 67. ADD BINARY

#include<iostream>
#include<cmath>

using namespace std ;

//*JAVA SOLUTION*//
/*class Solution {
    public String addBinary(String a, String b) {
        StringBuilder ans = new StringBuilder() ;
        int i=a.length()-1 ;
        int j=b.length()-1 ;
        int carry = 0 ;
        while(i>=0 || j>=0 || carry!=0) {
            if(i>=0) {
                carry += (a.charAt(i--) - '0') ;
            }
            if(j>=0) {
                carry += (b.charAt(j--) - '0') ;
            }
            ans.append(Integer.toString(carry%2)) ;
            carry /= 2 ;
        }
        return ans.reverse().toString() ;
    }
}*/

void rev(string& s) {
	int i=0, j=s.length()-1 ;
	while(i <= j) {
		swap(s[i++], s[j--]) ;
	}
}

string addBinary(string a, string b) {
	string ans ;
	int i=a.length() ;
	int j=b.length() ;
	int carry = 0 ;
	while(i>=0 || j>=0 || carry) {
		if(i>=0) {
			carry += (a[i--] - '0') ;
		}
		if(j>=0) {
			carry += (b[j--] - '0') ;
		}
		ans += ((carry%2) + '0') ;
		carry /= 2 ;
	}
	return ans ;
}

// RUNTIME ERROR - OUT OF RANGE
/*string addBinary(string a, string b) {
	int len, num1, num2 ;
	len = a.length() ;
	num1 = 0 ;
	for(int i=len-1, j=0; i>=0 && j<len; --i,++j) {
		int n = a[i] - '0' ;
		num1 += (pow(2,j)*n) ;
	}
	len = b.length() ;
	num2 = 0 ;
	for(int i=len-1, j=0; i>=0 && j<len; --i,++j) {
		int n = b[i] - '0' ;
		num2 += (pow(2,j)*n) ;
	}
	int sum = num1 + num2 ;
	if(sum == 0) {
        return "0" ;
    }
	string ans ;
	while(sum) {
		ans += ((sum%2) + '0') ;
		sum /= 2 ;
	}
	rev(ans) ;
	// reverse(ans.begin(), ans.end()) ;
	return ans ;
}*/

int main()
{
	string a ;
	string b ;
	string sum ;
	
	cout << endl ;
	cout << "  ADD BINARY  " << endl ;
	cout << " ---******--- " << endl ;
	
	cout << endl ;
	cout << "Enter 1st string..... " << endl ;
	cout << "a = " ;
	cin >> a ;
	
	cout << endl ;
	cout << "Enter 2nd string..... " << endl ;
	cout << "b = " ;
	cin >> b ;
	
	sum = addBinary(a, b) ;
	
	cout << endl ;
	
	cout << "Sum of the two binary numbers = " << sum << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

// cout << "\nnum1 = " << num1 ;
// cout << "\nnum2 = " << num2 ;
// cout << "\nsum = " << sum ;
// cout << "\n (sum%2) + '0' = " << (sum%2) + '0' << "\nans = " << ans ;
// cout << "\nans = " << ans ;
// cout << "\nrev(ans) = " << ans ;
// cout << "\n reverse = " << s ;

/*string addBinary(string a, string b)
{	
	if(a.length()>1){
	    for(int i=0; i<a.length(); ++i)
	    {
	    	if(a.at(i) == '0')
	    	{
	    		a.erase(i, 1) ;
	    		--i ;
	    	}
	    	else
	    	{
	    		break ;
	    	}
	    }
	}
	if(b.length()>1){
        for(int i=0; i<b.length(); ++i)
	    {
	    	if(b.at(i) == '0')
	    	{
	    		b.erase(i, 1) ;
	    		--i ;
	    	}
	    	else
	    	{
	    		break ;
	    	}
	    }
	}
	
	string sum ;
	string carry("0") ;
	string z("0") ;
	string o("1") ;
	// string s ;
	
	int n ;
	if(a.length()>b.length())
	{
		n = a.length()-b.length() ;
		for(int i=0; i<n; ++i)
		{
		    b.insert(0,z) ;
		}
	}
	
	if(b.length()>a.length())
	{
		n = b.length()-a.length() ;
		for(int i=0; i<n; ++i)
		{
		    a.insert(0,z) ;
		}
	}
	
	int i, j, x ;
	i=a.length()-1 ;
	j=b.length()-1 ;
	
	while((i>=0)||(j>=0))
	{
        if((a.at(i)=='0')&&(b.at(j)=='0'))
	    {
			x = carry.compare(z) ;
	    	if(x == 0)
	    	{
	    		// s = z ;
	    		sum.insert(0, z) ;
	    		carry = z;
			}
	    	else
	    	{
				x = carry.compare(o) ;
				if(x == 0)
				{
	    		    // s = o ;
					sum.insert(0, o) ;
	    		    carry = z ;
				}
	    	}
	    }
		else if(((a.at(i)=='1')&&(b.at(j)=='0'))||((a.at(i)=='0')&&(b.at(j)=='1')))
	    {
			x = carry.compare(z) ;
	    	if(x == 0)
	    	{
	    		// s = o ;
				sum.insert(0, o) ;
	    		carry = z ;
	    	}
	    	else
	    	{
				x = carry.compare(o) ;
				if(x == 0)
				{
	    		    // s = z ;
					sum.insert(0, z) ;
	    		    carry = o ;
				}
	    	}
	    }
		else if((a.at(i)=='1')&&(b.at(j)=='1'))
	    {
			x = carry.compare(z) ;
	    	if(x == 0)
	    	{
	    		// s = z ;
				sum.insert(0, z) ;
	    		carry = o ;
	    	}
	    	else
	    	{
				x = carry.compare(z) ;
				if(x == 0)
				{
	    		    // s = o ;
					sum.insert(0, o) ;
	    		    carry = o ;
				}
	    	}
	    }
		// sum.insert(0,s) ;
		--i ;
		--j ;
	}
	
	x = carry.compare(o) ;
	if(x == 0)
	{
		sum.insert(0,carry) ;  
		return sum ;
	}
	else
	{
		return sum ;
	}
	
	return sum ;
}*/