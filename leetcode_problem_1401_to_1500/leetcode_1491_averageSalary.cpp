
// 1491. AVERAGE SALARY EXCLUDING THE MINIMUM AND MAXIMUM SALARY

/** T.C. - O(N Log N) & S.C. - O(1) **/

/* C++ */
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/solutions/5799966/beats-100-runtime-and-9347-memory-by-nid-aph8/

/* JAVA */
// https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/solutions/8302376/java-solution-by-nidhi_kamal-uu0o/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ;

double average(vector<int> & salary){
	sort(salary.begin(), salary.end()) ;
	int sum = 0 ;
	for(int i=1; i<(salary.size()-1); ++i)
		sum += salary.at(i) ;
	return (((double)sum/(salary.size()-2))) ; 
}

int main(){
	vector<int> salary{} ;
	int size, e ;
	double averageSalary ;
	
	cout << endl ;
	cout << "  AVERAGE SALARY EXCLUDING THE MINIMUM AND MAXIMUM SALARY " << endl ;
	cout << " `````````````````````````````````````````````````````````" << endl ;
	cout << endl ;
	
	cout << "Enter size of the array...." << endl ;
	cout << "size = " ;
	cin >> size ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<size; ++i){
		cin >> e ;
		salary.push_back(e) ;
	}
	
	averageSalary = average(salary) ;
	
	cout << endl ;
	
	cout << "Average Salary = " << averageSalary << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}