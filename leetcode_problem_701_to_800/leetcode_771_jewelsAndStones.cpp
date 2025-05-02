
// 771. JEWELS AND STONES

#include<iostream>
#include<cstring>

using namespace std ;

int numJewelsInStones(string jewels, string stones){
	int cnt = 0 ;
	for(int i=0; i<jewels.length(); ++i)
		for(int j=0; j<stones.length(); ++j)
			if(jewels.at(i) == stones.at(j))
				++cnt ;
	return cnt ;
}

int main(){
	string jewels ;
	string stones ;
	int count ;
	
	cout << endl ;
	cout << "  JEWELS AND STONES " << endl ;
	cout << " ===================" << endl ;
	
	cout << endl ;
	cout << "jewels = " ;
	cin >> jewels ;
	cout << "stones = " ;
	cin >> stones ;
	
	count = numJewelsInStones(jewels, stones) ;
	
	cout << endl ;
	cout << "Count = " << count << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}