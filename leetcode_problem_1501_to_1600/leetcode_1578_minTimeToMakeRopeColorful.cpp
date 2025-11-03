
// 1578. MINIMUM TIME TO MAKE ROPE COLORFUL

#include<iostream>
#include<vector>
#include<numeric>

using namespace std ;

int minCost(string colors, vector<int>& neededTime) {
    int sum = accumulate(neededTime.begin(), neededTime.end(), 0) ;
    for(int i=0; i<colors.length(); ++i) {
        int maxVal = 0 ;
        if(colors[i] == colors[i+1]) {
            int j = i ;
            while(colors[j] == colors[j+1]) {
                ++j ;
            }
            for(int k=i; k<=j; ++k) {
                maxVal = max(maxVal, neededTime[k]) ;
            }
            sum -= maxVal ;
            i = j ;
        }
        else {
            sum -= neededTime[i] ;
        }
    }
    return sum ;
}

int main() {
	string colors ;
	vector<int> neededTime ;
	int l, e ;
	
	cout << endl ;
	cout << "  MINIMUM TIME TO MAKE ROPE COLORFUL " << endl ;
	cout << " ````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter a string, colors = " ;
	cin >> colors ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		neededTime.push_back(e) ;
	}
	
	e = minCost(colors, neededTime) ;
	
	cout << endl ;
	cout << "Minimum time = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}