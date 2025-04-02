
// 338. COUNTING BITS

#include<iostream>
#include<vector>

using namespace std ;

vector<int> countBits(int n)
{
	vector<int> v{} ;
	for(int i=0; i<=n; ++i){
	    int x = i ;
		int c = 0;
		if(i==0){
			c = 0 ;
			v.push_back(c) ;
		}
		else if((i==1)||(i==2)){
			c = 1 ;
			v.push_back(c) ;
		}
		else{
			for(int j=0; j<32; ++j)
			{
				if((x&1) == 1){
					++c ;
				}
				x>>=1 ;
			} 
            v.push_back(c) ;			
		}
	}
	return v ;
}

/*vector<int> countBits(int n)
{
	vector<int> v{} ;
	for(int i=0; i<=n; ++i){
		int x = i ;
		int c = 0;
		if(i==0){
			c = 0 ;
			v.push_back(c) ;
		}
		else if((i==1)||(i==2)){
			c = 1 ;
			v.push_back(c) ;
		}
		else{
		    vector<int> t{} ;
		    for(int j=0; j<INT_MAX; ++j){		    	
		    	t.push_back(x%2) ;
				x/=2 ;
				if((x==0)||(x==1)){
					t.push_back(x) ;
				    break ;
				}
		    }
			for(int m=0; m<t.size(); ++m){
				if(t.at(m)==1)
					++c ;
			}
            v.push_back(c) ;			
		}
	}
	return v ;
}*/

int main()
{
	int n ;
	vector<int> r{} ;
	vector<int> :: iterator it ;
	
	cout << endl ;
	cout << " COUNTING BITS " << endl ;
	cout << "---*********---" << endl ;
	
	cout << endl ;
	cout << "Enter a number....." << endl ;
	cout << "num = " ;
	cin >> n ;
	
	r = countBits(n) ;
	
	cout << endl ;
	cout << "[" ;
	for(it=r.begin(); it<r.end()-1; ++it)
	{
		cout << *(it) << "," ;
	}
	cout << *(it) << "]" ;
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}