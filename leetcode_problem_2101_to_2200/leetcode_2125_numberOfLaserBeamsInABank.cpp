
// 2125. NUMBER OF LASER BEAMS IN A BANK

#include<iostream>
#include<vector>

using namespace std ;

int numberOfBeams(vector<string>& bank) {
    int beams = 0 ;
    int m = bank.size() ;
    vector<int> lasers ;
    int j = 0, laser = 0 ;
    while(j < bank[0].length()) {
        if(bank[0][j++] == '1') {
            ++laser ;
        }
    }
    if(laser != 0) {
        lasers.push_back(laser) ;
    }
    for(int i=1; i<m; ++i) {
        int n = bank[i].length() ;
        j = 0, laser = 0 ;
        while(j < n) {
            if(bank[i][j++] == '1') {
                ++laser ;
            }
        }
        if(laser != 0) {
            lasers.push_back(laser) ;
        }
    }
    for(int i=1; i<lasers.size(); ++i) {
        beams += (lasers[i-1] * lasers[i]) ;
    }
    return beams ;
}

int main() {
	int n ;
	string s ;
	vector<string> bank ;
	
	cout << endl ;
	cout << "  NUMBER OF LASER BEAMS IN A BANK " << endl ;
	cout << " ---------------------------------" << endl ;
	
	cout << endl ;
	cout << "Enter length of the array, n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter binary strings in the array......" << endl ;
	for(int i=0; i<n; ++i) {
		cin >> s ;
		bank.push_back(s) ;
	}
	
	n = numberOfBeams(bank) ;
	
	cout << endl ;
	cout << "Total laser beams = " << n << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}