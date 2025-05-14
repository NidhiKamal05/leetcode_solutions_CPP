
// 202. HAPPY NUMBER

#include<iostream>
#include<map>

using namespace std ;

int getNextNum(int n) {
	int nextNum = 0 ;
	while(n) {
		int digit = n%10 ;
		n /= 10 ;
		nextNum += (digit*digit) ;
	}
	return nextNum ;
}

bool isHappy(int n) {
	map<int,int> seen ;
	while(seen.find(n) == seen.end()) {
		seen[n]++ ;
		n = getNextNum(n) ;
		if(n == 1) {
			return true ;
		}
	}
	return false ;
}

int main() {
	int n ;
	bool r ;
	
	cout << endl ;
	cout << " HAPPY NUMBER " << endl ;
	cout << "--------------" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> n ;
	
	r = isHappy(n) ;
	
	cout << endl << "r = " << r << endl ;
	
	if(r == 1)
		cout << n << " is a happy number..." << endl ;
	else
		cout << n << " is not a happy number..." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*
bool isHappy(int n)
{
	int r ;
	// bool r ;
	if((n == 1)||(n == 7))
	// if(n == 1)
		return true ;
	if(n<10)
		return false ;
	int s=0 ;
	int t ;
	// vector<int> v{} ;
	// for(int i=0; i<INT_MAX; ++i){
	while(n != 0){
        t =	n%10 ;	
	    s+=(t*t) ;
		n/=10 ;
		// if(n < 10){
			// t = n ;
	        // v.push_back(t*t) ;
			// break ;
		// }
	}
	s = 0 ;
	for(int j=0; j<v.size(); ++j){ cout << v.at(j) << ", " ;
	    s+=v.at(j) ;
	}
	if(s == 1){ cout << s << "----------------\n" ;
	    r = 1 ;
	    // r = true ;
		// return r ;
		return true ;
	}
	else if((s>1)&&(s<10))
	// else if(s<10)
	/*else if((s<10)&&((s!=7)||(s!=1))){ cout << s << "@@@@@@@@@@@@@@@@@\n" ;
		r = 0 ;
		// r = false ;
		// return r ;
		return false ;
	}
	else{ cout << s << "================\n" ;
		isHappy(s) ;
	}		
	if(r == 1){  cout << "\nTRUE...." ;
	// if(r == true){  cout << "\nTRUE...." ;
		return true ;
		// return r ;
	}
	else{  cout << "\nFALSE...." ;
		return false ;
		// return r ;
	}
}

// bool isHappy(int n)
// {
	// if(n == 1)
		// return true ;
	// if(n<10)
		// return false ;
	// int s=0 ;
	// int t ;
	// for(int j=0; j<INT_MAX; ++j){
		// vector<int> v{} ;
		// for(int i=0; i<INT_MAX; ++i){
            // t =	n%10 ;	
		    // v.push_back(t*t) ;
			// n/=10 ;
			// if(n < 10){
				// t = n ;
		        // v.push_back(t*t) ;
				// break ;
			// }
		// }
		// s = 0 ;
		// for(int k=0; k<v.size(); ++k)
		    // s+=v.at(k) ;
		// if(s == 1)
		    // break ;
		// else{
		    // n = s ;
			// continue ;
		// }
	// }
    // if(s == 1)
		// return true ;
	// else
		// return false ;
// }

/*bool isHappy(int n)
{
	int r ;
	// bool r ;
	if((n == 1)||(n == 7))
	// if(n == 1)
		return true ;
	if(n<10)
		return false ;
	int s=0 ;
	int t ;
	vector<int> v{} ;
	// for(int i=0; i<INT_MAX; ++i){
	while(n != 0){
        t =	n%10 ;	
	    v.push_back(t*t) ;
		n/=10 ;
		// if(n < 10){
			// t = n ;
	        // v.push_back(t*t) ;
			// break ;
		// }
	}
	s = 0 ;
	for(int j=0; j<v.size(); ++j){ cout << v.at(j) << ", " ;
	    s+=v.at(j) ;
	}
	if(s == 1){ cout << s << "----------------\n" ;
	    r = 1 ;
	    // r = true ;
		// return r ;
		return true ;
	}
	else if((s>1)&&(s<10))
	// else if(s<10)
	/*else if((s<10)&&((s!=7)||(s!=1))){ cout << s << "@@@@@@@@@@@@@@@@@\n" ;
		r = 0 ;
		// r = false ;
		// return r ;
		return false ;
	}
	else{ cout << s << "================\n" ;
		isHappy(s) ;
	}		
	if(r == 1){  cout << "\nTRUE...." ;
	// if(r == true){  cout << "\nTRUE...." ;
		return true ;
		// return r ;
	}
	else{  cout << "\nFALSE...." ;
		return false ;
		// return r ;
	}
}*/