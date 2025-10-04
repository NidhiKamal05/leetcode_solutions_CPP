
// 11. CONTAINER WITH MOST WATER

#include<iostream>
#include<vector>

using namespace std ;

int maxArea(vector<int> & height){
	int area = 0 ;
	int left = 0, right = height.size()-1 ;
	while(left < right){
		area = max(area, (right-left) * min(height[left], height[right])) ;
		if(height[left] < height[right]) {
			++left ;
		}
		else {
			--right ;
		}
	}
	return area ;
}

int main() {
	int l, e;
	vector<int> height{} ;
	
	cout << endl ;
	cout << "  CONTAINER WITH MOST WATER  " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~ " << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl << "Enter heights...... " << endl ;
	for(int i = 0; i < l; i++) {
		cin >> e ;
		height.push_back(e) ;
	}
	
    e = maxArea(height) ;	
	
	cout << "Max Area = " << e << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}

/*int maxArea(vector<int> & height){
	int area = 0 ;
	int left = 0 ;
	int right = height.size()-1 ;
	while(left < right){
		if(height.at(left) < height.at(right))
			++left ;
		else{
			area = max(area, height.at(right)*(right-left)) ;
			--right ;
		}
	}
	return area ;
}*/

// height =
// [1,2]

// Use Testcase
// Output
// 0
// Expected
// 1