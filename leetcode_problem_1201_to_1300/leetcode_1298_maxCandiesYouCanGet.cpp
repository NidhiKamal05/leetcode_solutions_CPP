
// 1298. MAXIMUM CANDIES YOU CAN GET FROM BOXES

#include<iostream>
#include<vector>
#include<queue>

using namespace std ;

int maxCandies(vector<int>& status, vector<int>& candies, vector<vector<int>>& keys, vector<vector<int>>& containedBoxes, vector<int>& initialBoxes) {
    int totalCandies = 0 ;
    int n = status.size() ;
    queue<int> q ;
    vector<bool> visited(n, false) ;
    for(int& i : initialBoxes) {
        q.push(i) ;
    }
    while(!q.empty()) {
        int box = q.front() ;
        q.pop() ;
        if(visited[box]) {
            continue ;
        }
        visited[box] = true ;
        if(status[box] == 0) {
            continue ;
        }
        totalCandies += candies[box] ;
        candies[box] = -1 ;
        for(int i : containedBoxes[box]) {
            if(candies[i] == -1) {
                continue ;
            }
            q.push(i) ;
        }
        for(int i : keys[box]) {
            status[i] = 1 ;
            if(candies[i] != -1 && visited[i]) {
                visited[i] = false ;
                q.push(i) ;
            }
        }
    }
    return totalCandies ;
}

int main(){
	vector<int> status, candies, initialBoxes ;
	vector<vector<int>> keys, containedBoxes ;
	int n, e, l, totalCandies ;
	
	cout << endl ;
	cout << "  MAXIMUM CANDIES YOU CAN GET FROM BOXES " << endl ;
	cout << " ````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements(0, 1) of the array, status..... " << endl ;
	for(int i=0; i<n; i++) {
		cin >> e ;
		status.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter elements of the array, candies..... " << endl ;
	for(int i=0; i<n; i++) {
		cin >> e ;
		candies.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter elements of the array, keys..... " << endl ;
	for(int i=0; i<n; i++) {		
		cout << "Enter size of the array : " ;
		cin >> l ;
		vector<int> v ;
		for(int j=0; j<l; j++){
			cin >> e ;
			v.push_back(e) ;
		}
		keys.push_back(v) ;
	}
	
	cout << endl ;
	cout << "Enter elements of the array, containedBoxes..... " << endl ;
	for(int i=0; i<n; i++) {		
		cout << "Enter size of the array : " ;
		cin >> l ;
		vector<int> v ;
		for(int j=0; j<l; j++){
			cin >> e ;
			v.push_back(e) ;
		}
		containedBoxes.push_back(v) ;
	}
	
	cout << endl ;
	cout << "Enter size of the array, initialBoxes : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array, initialBoxes..... " << endl ;
	for(int i=0; i<n; i++) {
		cin >> e ;
		initialBoxes.push_back(e) ;
	}
	
    totalCandies = maxCandies(status, candies, keys, containedBoxes, initialBoxes) ;
	
	cout << endl ;	
	cout << "Maximum Candies = " << totalCandies << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}