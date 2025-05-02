
// 860. LEMONADE CHANGE

#include<iostream>
#include<vector>

using namespace std ;

bool lemonadeChange(vector<int> & bills){
	int cnt5 = 0, cnt10 = 0 ;
    for(int i=0; i<bills.size(); ++i){
        if(bills.at(i) == 5)
            cnt5 += 5 ;
        else if(bills.at(i) == 10){
            if(cnt5 > 0){
                cnt5 -= 5 ;
                cnt10 += 10 ;
            }
            else
                return false ;
        }
        else{
            if((cnt10 > 0)&&(cnt5 > 0)){
                cnt5 -= 5 ;
                cnt10 -= 10 ;
            }
            else if(cnt5 > 10)
                cnt5 -= 15 ;                
            else
                return false ;
        }
    }
    return true ;
}

/*bool lemonadeChange(vector<int> & bills){
	int cnt5 = 0 ;
	int cnt10 = 0 ;
	for(int b : bills){
		switch(b){
			case 5 :
				cnt5 += 5 ;
				break ;
			case 10 :
				if(cnt5 > 0){
					cnt5 -= 5 ;
					cnt10 += 10 ;
				}
				else
					return false ;
				break ;
			case 20 :
				if((cnt10 > 0)&&(cnt5 > 0)){
					cnt5 -= 5 ;
					cnt10 -= 10 ;
				}
				else if(cnt5 > 10)
					cnt5 -= 15 ;
				else
					return false ;
		}
	}
	return true ;
}*/

int main(){
	vector<int> bills{} ;
	int len, e ;
	bool res ;
	
	cout << endl ;
	cout << "  LEMONADE CHANGE " << endl ;
	cout << " `````````````````" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		bills.push_back(e) ;
	}
	
	cout << endl ;
    res = lemonadeChange(bills) ;
	
	if(res == 1)
		cout << "TRUE....." << endl ;
	else
		cout << "FALSE....." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}