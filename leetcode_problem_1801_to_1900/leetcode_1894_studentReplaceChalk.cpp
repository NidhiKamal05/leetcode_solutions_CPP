
// 1894. FIND THE STUDENT THAT WILL REPLACE THE CHALK

#include<iostream>
#include<vector>

using namespace std ;

//*JAVA SOLUTION*//
/*class Solution {
    public int chalkReplacer(int[] chalk, int k) {
        int n = chalk.length ;
        long totalChalk = 0 ;
        for(int c : chalk) {
            totalChalk += c ;
        }
        k %= totalChalk ;
        int index = 0 ;
        for(int i=0; i<n; ++i){
            if(k < chalk[i]){               
                index = i ;
                break ;
            }
            k -= chalk[i] ;
        }
        return index ;
    }
}*/
		
int chalkReplacer(vector<int>& chalk, int k) {
    long totalChalk = 0 ;
    // long totalChalk = accumulate(chalk.begin(), chalk.end(), 0L) ;
	for(int c : chalk) {
        totalChalk += c ;
    }
    k %= totalChalk ;
    int n = chalk.size() ;
    int index = 0 ;
    for(int i=0; i<n; ++i) {
        if(k < chalk.at(i)) {              
            index = i ;
            break ;
        }
        k -= chalk.at(i) ;
    }
    return index ;
}

int main() {
	vector<int> chalk ;
	int e, n, k ;
	
	cout << endl ;
	cout << "  FIND THE STUDENT THAT WILL REPLACE THE CHALK " << endl ;
	cout << " ``````````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		cin >> e ;
		chalk.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter an integer, k = " ;
	cin >> k ;
	
	cout << endl ;
    e = chalkReplacer(chalk, k) ;
	
	cout << "Student = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

// int chalkReplacer(vector<int>& chalk, int k) {
	// int i = 0 ;
	// int n = chalk.size() ;
    // while(k >= chalk.at(i)){
        // if((i == n-1)&&(k >= chalk.at(i))){
            // k -= chalk.at(i) ;
            // i = 0 ;
            // continue ;
        // }
        // k -= chalk.at(i) ;
        // ++i ;
    // }
    // return i ;
// }
		
// chalk = [1],,k = 1000000000
// chalk = [1,2,3,5],,k = 1000000000