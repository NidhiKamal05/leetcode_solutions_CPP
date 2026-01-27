
// 3386. BUTTON WITH LONGEST PUSH TIME

#include<iostream>
#include<vector>

using namespace std ;

int buttonWithLongestTime(vector<vector<int>>& events) {
    int maxTime = events[0][1] ;
    int buttonId = events[0][0] ;
    for(int i=1; i<events.size(); ++i) {
        int pressTime = events[i][1] - events[i-1][1] ;
        if((pressTime > maxTime) || (pressTime == maxTime && events[i][0] < buttonId)) {
            maxTime = pressTime ;
            buttonId = events[i][0] ;
        }
    }
    return buttonId ;
}

int main() {
	vector<vector<int>> events ;
	int e, n ;
	
	cout << endl ;
	cout << "  BUTTON WITH LONGEST PUSH TIME " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of the array...... " << endl ;
	for(int i=0; i<n; ++i) {
		vector<int> event ;
		for(int i=0; i<2; ++i) {
			cin >> e ;
			event.push_back(e) ;
		}
		events.push_back(event) ;
	}
	
    e = buttonWithLongestTime(events) ;
	
	cout << endl ;
	cout << "Button ID = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}


/** INCORRECT **/

/*int buttonWithLongestTime(vector<vector<int>>& events) {
    unordered_map<int, int> button ;
    button[events[0][0]] = events[0][1] ;
    int maxTime = 0, buttonId = 0 ;
    for(int i=1; i<events.size(); ++i) {
        button[events[i][0]] = events[i][1] - events[i-1][1] ;
    }
    for(auto& b : button) {
        if(b.second >= maxTime) {
            maxTime = b.second ;
            buttonId = b.first ;
        }
    }
    return buttonId ;
}*/