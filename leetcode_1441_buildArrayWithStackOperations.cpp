
// 1441. BUILD AN ARRAY WITH STACK OPERATIONS

#include<iostream>
#include<vector>

using namespace std ;

vector<string> buildArray(vector<int> & target, int n){
	vector<string> operations ;
	int j = 0 ;
	for(int i=1; i<=n && j<target.size(); ++i){
		operations.push_back("Push") ;
		if(i != target.at(j))
			operations.push_back("Pop") ;
		else
			++j ;
	}
	return operations ;
}

int main()
{
	vector<int> target{} ;
	vector<string> operations{} ;
	int len, e, n ;
	
	cout << endl ;
	cout << "  BUILD AN ARRAY WITH STACK OPERATIONS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i < len; i++)
	{
		cin >> e ;
		target.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
	cout << endl ;
    operations = buildArray(target, n) ;
	
	if(!operations.empty()){
        for(int i=0; i<operations.size(); i++){
	    	cout << " " << operations.at(i) << " " ;
	    }
		cout << endl ;
	}
	else{
		cout << "NOT FOUND" << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}