
// 2490. CIRCULAR SENTENCE

#include<iostream>
#include<cstring>

using namespace std ;

bool isCircularSentence(string sentence) {
    if(sentence.at(0) == sentence.at(sentence.length()-1)){
        for(int i=1; i<sentence.length()-1; ++i){
            if(sentence.at(i)==' '){
                if(sentence.at(i-1)!=sentence.at(i+1)){
                    return false ;
                }
            }
        }
    }
    else{ 
        return false ;
    }
    return true ;
}

/*bool isCircularSentence(string sentence){
	if(sentence.at(0) == sentence.at(sentence.length()-1)){	cout << "****" ;
		for(int i=1; i<sentence.length()-1; ++i){
			if(sentence.at(i+1)==' '){
				if(sentence.at(i)!=sentence.at(i+2)){  cout << "----" ;
					return false ;
				}
			}
		}
	}
	else{  cout << "====" ;
		return false ;
	}
	return true ;
}*/

int main(){
	string sentence ;
	bool result ;
	
	cout << endl ;
	cout << " CIRCULAR SENTENCE " << endl ;
	cout << "~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;	
	cout << "Enter a sentence...." << endl ;
	cin >> sentence ;
	
	result = isCircularSentence(sentence) ;
	
	if(result == 1)
		cout << "TRUE...." ;
	else
		cout << "FALSE...." ;
	
	cout << endl << endl ;
	system("pause") ;
	
	return 0 ;
}