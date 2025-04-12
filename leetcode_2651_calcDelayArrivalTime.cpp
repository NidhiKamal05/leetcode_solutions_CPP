
// 2651. CALCULATE DELAYED ARRIVAL TIME

#include<iostream>

using namespace std ;

int findDelayedArrivalTime(int arrivalTime, int delayedTime){
	if(arrivalTime+delayedTime < 24)
		return (arrivalTime + delayedTime) ;
	else if(arrivalTime+delayedTime == 24)
		return 0 ;
	else{
		return ((arrivalTime + delayedTime)%24) ;
	}
	return 0 ;
}

int main()
{
	int arrivalTime, delayedTime, arriveAt ;
	
	cout << endl ;
	cout << "  CALCULATE DELAYED ARRIVAL TIME  " << endl ;
	cout << " -------------------------------- " << endl ;
	
	cout << endl ;
	cout << "Arrival Time : " ;
	cin >> arrivalTime ;
	
	cout << endl ;
	cout << "Delayed Time : " ;
	cin >> delayedTime ;
	
	arriveAt = findDelayedArrivalTime(arrivalTime, delayedTime) ;
	
	cout << endl ;
	cout << "The time when the train will arrive at the station : " << arriveAt << ":00 hours" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}