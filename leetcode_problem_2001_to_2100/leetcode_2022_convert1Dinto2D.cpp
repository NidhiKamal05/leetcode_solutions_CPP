
// 2022. CONVERT 1D ARRAY INTO 2D ARRAY

#include<iostream>
#include<vector>

using namespace std ;

vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    vector<vector<int>> arr2D ;
    int len = original.size() ;
    if(m*n != len)
        return arr2D ;
    for(int i=0; i<m; ++i){
        vector<int> temp ;
        int cnt = 0 ;
        for(int i=0; i<n; ++i){
            temp.push_back(original.at(i)) ;
            ++cnt ;
            if(cnt == n)
                break ;
        }
        arr2D.push_back(temp) ;
        original.erase(original.begin(), original.begin()+cnt) ;
    }
    return arr2D ;
}

int main(){
	vector<int> original ;
	vector<vector<int>> arr2D ;
	int len, e, m, n ;
	
	cout << endl ;
	cout << "  CONVERT 1D ARRAY INTO 2D ARRAY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << endl ;
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array...." << endl ;
	for(int i = 0; i<len; i++){
		cin >> e ;
		original.push_back(e) ;
	}
	
	cout << endl ;
	cout << "Enter no. of rows and colums....\n" ;
	cout << "m = " ;
	cin >> m ;
	cout << "n = " ;
	cin >> n ;
	
    arr2D = construct2DArray(original, m, n) ;
	
	if(!arr2D.empty()){
        for(int i=0; i<arr2D.size(); ++i){
			for(int j=0; j<(arr2D.at(i)).size(); ++j){
				cout << " " << (arr2D.at(i)).at(j) << " " ;
			}
			cout << endl ;
	    }
	}
	else{
		cout << "We can't convert this into 2D" << endl ;
	}
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}