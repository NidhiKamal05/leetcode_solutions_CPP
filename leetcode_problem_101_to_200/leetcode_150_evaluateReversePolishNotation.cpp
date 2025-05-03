
// 150. EVALUATE REVERSE POLISH NOTATION

#include<iostream>
#include<vector>
#include<cstring>
#include<stack>

using namespace std ;

int evalRPN(vector<string>& tokens) {
    int len = tokens.size() ;
    stack<int> st ;
    for(int i=0; i<len; ++i){
        if((tokens.at(i)=="+")||(tokens.at(i)=="-")||(tokens.at(i)=="*")||(tokens.at(i)=="/")){
            int num1 = st.top() ;
            st.pop() ;
            int num2 = st.top() ;
            st.pop() ;
            int ans = 0 ;
            if(tokens.at(i) == "*")
                ans = (num2 * num1) ;
            else if(tokens.at(i) == "+")
                ans = (num2 + num1) ;
            else if(tokens.at(i) == "-")
                ans = (num2 - num1) ;
            else
                ans = (num2 / num1) ;
            st.push(ans) ;
        }
        else
            st.push(stoi(tokens.at(i))) ;		
			// st.push(tokens.at(i) - '0') ;
    }
    return st.top() ;
}

int main(){
	string token ;
	vector<string> tokens{} ;
	int l ;
	
	cout << endl ;
	cout << "  EVALUATE REVERSE POLISH NOTATION " << endl ;
	cout << " ++++++++++++++++++++++++++++++++++" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter tokens....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> token ;
		tokens.push_back(token) ;
	}
	
	l = evalRPN(tokens) ;
	
	cout << endl ;
	cout << "Answer = " << l << endl ;	
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/*int evalRPN(vector<string> & tokens){
	stack<int> st ;
	for(int i=0; i<tokens.size(); ++i){
		if((tokens.at(i)>=48)&&(tokens.at(i)<=57))
			st.push(stoi(tokens.at(i))) ;
		else{
			int last = st.top() ;
			st.pop() ;
			int secondLast = st.top() ;
			st.pop() ;
			if((tokens.at(i))=="*")
				st.push(last*secondLast) ;
			if((tokens.at(i))=="+")
				st.push(last+secondLast) ;
			if((tokens.at(i))=="-")
				st.push(last-secondLast) ;
			if((tokens.at(i))=="/")
				st.push(last/secondLast) ;
		}
	}
	return st.top() ;
}*/
