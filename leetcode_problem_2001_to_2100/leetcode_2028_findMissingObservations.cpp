
// 2028. FIND MISSING OBSERVATIONS

/** T.C. - O(N + M) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/find-missing-observations/solutions/8615966/c-solution-by-nidhi_kamal-cgzv/

/* JAVA */
// https://leetcode.com/problems/find-missing-observations/solutions/8615972/java-runtime-beats-100-by-nidhi_kamal-cgci/

#include<iostream>
#include<vector>

using namespace std ;

// mean = (sum + X) / (n + m)
// X = (mean * (n + m))- sum

vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
    int sum = 0 ;
    for(int r : rolls) {
        sum += r ;
    }
	int m = rolls.size() ;
    // mean = (sum + x) / (n + m)
    int x = (mean * (n + m)) - sum ;
    if((x > 6 * n) || (x < n)) {
        return {} ;
    }
    int q = x / n ;
    int rem = x % n ;
    vector<int> ans(n) ;
    for(int i = 0; i < n; ++i) {
        if(rem > 0) {
            ans[i] = q + 1 ;
            --rem ;
        }
        else {
            ans[i] = q ;
        }
    }
    return ans ;
}

int main() {
	vector<int> rolls, ans ;
	int e, n, l, mean ;
	
	cout << endl ;
	cout << "  FIND MISSING OBSERVATIONS " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<l; ++i) {
		cin >> e ;
		rolls.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter mean = " ;
	cin >> mean ;
	
	cout << endl ;
	cout << "Enter an integer, n = " ;
	cin >> n ;
	
    ans = missingRolls(rolls, mean, n) ;	
	
	cout << endl ;
	if(ans.size() == 0) {
		cout << "Empty...." ;
	}
	else {
		cout << "Resultant array...\n" ;
		for(int i=0; i<ans.size(); ++i) {
			cout << " " << ans[i] ;
		}
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}



/*vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
	vector<int> ans ;
	int m = rolls.size() ;
	int sumOfElements = 0 ;
	for(int r : rolls) {
		sumOfElements += r ;
	}
	int x = (mean*(n+m))-sumOfElements ;
	if((x > 6*n)||(x < n)) {
		return ans ;
	}
	int a = x/n ;
	for(int i=0; i<n-1; ++i) {
		ans.push_back(a) ;
		x -= a ;
	}
	ans.push_back(x) ;
	return ans ;
}*/