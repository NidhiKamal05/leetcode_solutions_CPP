
// 2410. MAXIMUM MATCHING OF PLAYERS WITH TRAINERS

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int>& v) {
	int n = v.size() ;
	for(int i=0; i<n-1; ++i) {
		for(int j=i+1; j<n; ++j) {
			if(v[i] > v[j]) {
				swap(v[i], v[j]) ;
			}
		}
	}
}

int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
	Sort(players) ;
	Sort(trainers) ;
	// sort(players.begin(), players.end()) ;
	// sort(trainers.begin(), trainers.end()) ;
	int n1 = players.size(), n2 = trainers.size(), match = 0 ;
	int i=0, j=0;
	while(i < n1 && j < n2) {
		if(players[i] <= trainers[j]) {
			++match ;
			++i ;
			++j ;
		}
		else {
			++j ;
		}
	}
	return match ;
}

int main() {
	int n, e ;
	vector<int> players, trainers ;
	
	cout << endl ;
	cout << "  MAXIMUM MATCHING OF PLAYERS WITH TRAINERS " << endl ;
	cout << " ===========================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array(players), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter ability of the players......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> e ;
		players.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array(trainers), n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter training capacity of the trainers......" << endl ;
	for(int i=0; i<n; ++i) {		
		cin >> e ;
		trainers.push_back(e) ;
	}
	
	e = matchPlayersAndTrainers(players, trainers) ;
	
	cout << endl ;
	cout << "Maximum matching = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}