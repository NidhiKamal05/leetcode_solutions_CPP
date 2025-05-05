
// 1200. MINIMUM ABSOLUTE DIFFERENCE

#include<iostream>
#include<vector>

using namespace std ;

// *JAVA SOLUTION* //
/*class Solution {
    public List<List<Integer>> minimumAbsDifference(int[] arr) {
        Arrays.sort(arr) ;
        List<List<Integer>> pairs = new ArrayList() ;
        int minDiff = Integer.MAX_VALUE ;
        for(int i=0; i<arr.length-1; ++i) {
            minDiff = Math.min(minDiff, arr[i+1]-arr[i]) ;
        }
        for(int i=0; i<arr.length-1; ++i) {
            if(arr[i+1]-arr[i] == minDiff) {
                List<Integer> pair = new ArrayList() ;
                pair.add(arr[i]) ;
                pair.add(arr[i+1]) ;
                pairs.add(pair) ;
            }
        }
        return pairs ;
    }
}*/

void Sort(vector<int> & v){
	for(int i=0; i<v.size()-1; ++i)
		for(int j=i+1; j<v.size(); ++j)
			if(v.at(i) > v.at(j))
				swap(v.at(i),v.at(j)) ;
}

vector<vector<int>> minimumAbsDifference(vector<int> & arr){
	Sort(arr) ;
	// sort(arr.begin(), arr.end()) ;
	vector<vector<int>> pairs ;
	int minDiff = INT_MAX ;
	for(int i=0; i<arr.size()-1; ++i){
		minDiff = min(minDiff, arr[i+1]-arr[i]) ;
	}
	for(int i=0; i<arr.size()-1; ++i){
		if(arr[i+1]-arr[i] == minDiff) {
			vector<int> pair ;
			pair.push_back(arr[i]) ;
			pair.push_back(arr[i+1]) ;
			pairs.push_back(pair) ;
		}
	}
	return pairs ;
}

/*vector<vector<int>> minimumAbsDifference(vector<int> & arr){
	Sort(arr) ;
	// sort(arr.begin(), arr.end()) ;
	vector<vector<int>> pairs ;
	int minDiff = (arr.at(1) - arr.at(0)) ;
	for(int i=0; i<arr.size()-1; ++i){		
		if((arr.at(i+1)-arr.at(i)) == minDiff){
			vector<int> pair ;
			pair.push_back(arr.at(i)) ;
			pair.push_back(arr.at(i+1)) ;
			pairs.push_back(pair) ;
		}
	}
	return pairs ;
}*/

int main(){
	vector<int> arr{} ;
	vector<vector<int>> absDiff ;
	int len, e;
	
	cout << endl ;
	cout << "  MINIMUM ABSOLUTE DIFFERENCE " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array...." << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		arr.push_back(e) ;
	}
	
    absDiff = minimumAbsDifference(arr) ;
	
	if(!absDiff.empty()){
        for(int i=0; i<absDiff.size(); ++i){
			for(int j=0; j<(absDiff.at(i)).size(); ++j){
				cout << " " << (absDiff.at(i)).at(j) << " " ;
			}
			cout << endl ;
	    }
	}
	else{
		cout << "NOT FOUND" << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}