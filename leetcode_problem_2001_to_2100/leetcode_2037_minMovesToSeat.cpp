
// 2037. MINIMUM NUMBER OF MOVES TO SEAT EVERYONE

#include<iostream>
#include<vector>

using namespace std ;

void Sort(vector<int> & v)
{
	int temp ;
	for(int i=0; i<v.size()-1; ++i){
		for(int j=i+1; j<v.size(); ++j){
			if(v.at(i) > v.at(j)){
				temp = v.at(i) ;
				v.at(i) = v.at(j) ;
				v.at(j) = temp ;
			}
		}
	}
}

int minMovesToSeat(vector<int>& seats, vector<int>& students){
    int minMoves = 0, t ;
    Sort(seats) ;
    Sort(students) ;
    // sort(seats.begin(), seats.end()) ;
    // sort(students.begin(), students.end()) ;
    for(int i=0; i<seats.size(); ++i){
        t = seats.at(i) - students.at(i) ;
        if(t < 0)
           t = -t ;
        minMoves += t ;
    }
    return minMoves ;
}

/*int minMovesToSeat(vector<int>& seats, vector<int>& students){
    int minMoves = 0, t ;
    Sort(seats) ;
    Sort(students) ;
    // sort(seats.begin(), seats.end()) ;
    // sort(students.begin(), students.end()) ;
    int j=0 ;
    for(int i=0; i<seats.size(); ++i){
        if(i == seats.size()-1){
            t = seats.at(i) - students.at(j) ;
            if(t < 0)
                t = -t ;
            return (minMoves += t) ;
        }
        if(seats.at(i) < seats.at(i+1)){
            t = seats.at(i) - students.at(j) ;
            if(t < 0)
                t = -t ;
            minMoves += t ;
            ++j ;
        }
        // else{
        //     continue ;
        // }
    }
    return minMoves ;
}*/

int main()
{
	vector<int> seats{} ;
	vector<int> students{} ;
	int l, e, minMoves ;
	
	vector<int> :: iterator it ;
	
	cout << "  MINIMUM NUMBER OF MOVES TO SEAT EVERYONE " << endl ;
	cout << " ``````````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter size of both array : " ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of array(seats)......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		seats.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter elements of array(students)......."  << endl ;
	for(int i=0; i<l; ++i)
	{
		cin >> e ;
		students.push_back(e) ;
	}
	
	minMoves = minMovesToSeat(seats, students) ;
	
	cout << endl ;
	
	cout << "Minimum Moves = " << minMoves << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}