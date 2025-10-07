
// 2139. MINIMUM MOVES TO REACH TARGET SCORE

#include<iostream>

using namespace std ;

/** C++ : T.C. - O(log target), S.C. - O(1) **/
/*
int minMoves(int target, int maxDoubles) {
    int moves = 0 ;
    while(target > 1) {
        if(maxDoubles == 0) {
            moves += target - 1 ;
            break ;
        }
        moves += target % 2 ;
        target >>= 1 ;
        ++moves ;
        --maxDoubles ;
    }
    return moves ;
}
*/

/** C++ : T.C. - O(target), S.C. - O(target) **/
int helper(int target, int maxDoubles, int moves) {
    if(target == 1) {
        return moves ;
    }
    if(target % 2 == 0 && maxDoubles != 0) {
        target /= 2 ;
        --maxDoubles ;
        ++moves ;
    }
    else {
        --target ;
        ++moves ;
    }
    return helper(target, maxDoubles, moves) ;
}

int minMoves(int target, int maxDoubles) {
    int moves = 0 ;
    if(maxDoubles == 0) {
        return target - 1 ;
    }
    return helper(target, maxDoubles, moves) ;
}
	
int main() {
	int target, maxDoubles, n ;
	
	cout << endl ;
	cout << "  MINIMUM MOVES TO REACH TARGET SCORE " << endl ;
	cout << " `````````````````````````````````````" << endl ;
	
	cout << endl ;
	cout << "Enter an integer, target = " ;
	cin >> target ;
	
	cout << endl ;
	cout << "Enter an integer, maxDoubles = " ;
	cin >> maxDoubles ;
	
	cout << endl ;
	
    n = minMoves(target, maxDoubles) ;
	
	cout << "Minimum moves = " << n << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*
int moves = 0 ;

int minMoves(int target, int maxDoubles) {
	if(target == 1) {
		return moves ;
	}
	if(target % 2 == 0 && maxDoubles) {
		target /= 2 ;
		--maxDoubles ;
		++moves ;
	}
	else {
		--target ;
		++moves ;
	}
	minMoves(target, maxDoubles) ;
	return moves ;
}
*/


// int minMoves(int target, int maxDoubles) {
	// int minMoves = 0 ;
	// while(maxDoubles) {
		// target /= 2 ;
		// --maxDoubles ;
		// ++minMoves ;
	// }
	// while(target > 1) {
		// --target ;
		// ++minMoves ;
	// }
	// return minMoves ;
// }