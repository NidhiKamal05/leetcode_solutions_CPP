
// 2469. CONVERT THE TEMPERATURE

#include<iostream>
#include<vector>

using namespace std ;

vector<double> convertTemperature(double celsius){
	vector<double> ans{} ;
	double kelvin = celsius + 273.15 ;
	double fahrenheit = celsius * 1.80 + 32.00 ;
	ans.push_back(kelvin) ;
	ans.push_back(fahrenheit) ;
	return ans ;
}

int main()
{
	double celsius;
	vector<double> temperature{} ;
	
	cout << endl ;
	cout << "  CONVERT THE TEMPERATURE " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << "Enter the temperature in celsius.... " << endl ;
	cout << "celsius = " ;
	cin >> celsius ;
	
    temperature = convertTemperature(celsius) ;	
	
	cout << "[Kelvin, Fahrenheit] = [" << temperature.at(0) << ", " << temperature.at(1) << "]" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}