
// 1833. MAXIMUM ICE CREAM BARS

#include<iostream>
#include<vector>

using namespace std ;

/** JAVA SOLUTION **/
/*class Solution {
    public int maxIceCream(int[] costs, int coins) {
        Arrays.sort(costs) ;
        int sum = 0 ; 
        int cnt = 0 ;
        for(int i=0; i<costs.length && (sum <= coins); ++i) {
            sum += costs[i] ;
            if(sum > coins)
                break ;
            ++cnt ;
        }
        return cnt ;
    }
}*/

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

int maxIceCream(vector<int> & costs, int coins){
	Sort(costs) ;
	// sort(costs.begin(), costs.end()) ;
	int i = 0 ; 
	int sum = 0 ; 
	int cnt = 0 ;
	// for(int i=0; i<costs.size() && (sum <= coins); ++i){
	while((sum <= coins)&&(i<costs.size())){
		sum += costs.at(i) ;
		if(sum > coins)
			break ;
		++cnt ;
		++i ;
	}
	return cnt ;
}

int main(){
	vector<int> costs ;
	int len, e, coins ;
	
	cout << endl ;
	cout << "  MAXIMUM ICE CREAM BARS " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter costs....." << endl ;
	for(int i=0; i<len; i++){
		cin >> e ;
		costs.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter coins : " ;
	cin >> coins ;
	
    e = maxIceCream(costs, coins) ;
	
	cout << "Maximum bar = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}