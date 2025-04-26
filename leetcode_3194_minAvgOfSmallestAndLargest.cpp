
// 3194. MINIMUM AVERAGE OF SMALLEST AND LARGEST ELEMENTS

#include<iostream>
#include<vector>

using namespace std ;

void Sort1(vector<int> & v){
	int t ;
	for(int i=0; i<v.size()-1; ++i){
		for(int j=v.size()-1; j>i; --j){
			if(v.at(j) < v.at(j-1)){
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
}

void Sort2(vector<double> & v){
	double t ;
	for(int i=0; i<v.size()-1; ++i){
		for(int j=v.size()-1; j>i; --j){
			if(v.at(j) < v.at(j-1)){
				t = v.at(j) ;
				v.at(j) = v.at(j-1) ;
				v.at(j-1) = t ;
			}
		}
	}
}

double minimumAverage(vector<int> & nums){
	sort(nums.begin(), nums.end()) ;
    double avg ;
    int i = 0 ;
    int j = nums.size()-1 ;
    double maxAvg = DBL_MAX ;
    while(i < j){
        avg = (double)((nums.at(i)+nums.at(j))/2.0) ;
        avg = min(avg, maxAvg) ;
        maxAvg = avg ;
        ++i ;
        --j ;
    }
    return avg ;
}

// BOTH WORKS

/*double minimumAverage(vector<int> & nums){
	vector<double> averages{} ;
	// sort(nums.begin(), nums.end()) ;
	Sort1(nums) ;
	double avg ;
	int i = 0 ;
	int j = nums.size()-1 ;
	while(i < j){
		// avg = (double)(((double)nums.at(i)+(double)nums.at(j))/2.0) ;
		avg = (double)((nums.at(i)+nums.at(j))/2.0) ;
		averages.push_back(avg) ;
		++i ;
		--j ;
	}
	// sort(averages.begin(), averages.end()) ;
	Sort2(averages) ;
	return averages.at(0) ;
}*/



int main(){
	vector<int> nums{} ;
	int l, e ;
	double min ;
	
	cout << endl ;
	cout << " MINIMUM AVERAGE OF SMALLEST AND LARGEST ELEMENTS " << endl ;
	cout << "==================================================" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array....." << endl ;
	cin >> l ;
	
	cout << endl ;
	cout << "Enter elements of the array....." << endl ;
	for(int i=0; i<l; ++i){
		cin >> e ;
		nums.push_back(e) ;
	}
	
	min = minimumAverage(nums) ;
	
	cout << endl ;
	cout << "Minimum element in the averages = " << min << endl ;
	
	cout << endl ;
}