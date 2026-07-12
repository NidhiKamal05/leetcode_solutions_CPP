
// 1331. RANK TRANSFORM OF AN ARRAY

/** T.C. - O(N Log N) & S.C. - O(N) **/

/* C++ */
// https://leetcode.com/problems/rank-transform-of-an-array/solutions/5670461/c-easy-solution-using-map-by-nidhi_kamal-gjd3/

/* JAVA */
// https://leetcode.com/problems/rank-transform-of-an-array/solutions/8392516/java-solution-beats-9032-by-nidhi_kamal-buhv/

#include<iostream>
#include<vector>
#include<map>

using namespace std ;

vector<int> arrayRankTransform(vector<int>& arr) {
    map<int, int> mp ;
    for(int& el : arr) {
        mp[el] = 0 ; 
    }
    int rank = 0 ;
    for(auto& i : mp) {
        i.second = ++rank ;
    }
    vector<int> ranks ;
    for(int& el : arr) {
        ranks.push_back(mp[el]) ;
    }
    return ranks ;
}

int main() {
	vector<int> arr{}, rank{};
	int len, e;
	
	cout << endl ;
	cout << "  RANK TRANSFORM OF AN ARRAY " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> len ;
	
	cout << endl << "Enter elements of the array : " << endl ;
	for(int i = 0; i<len; i++) {
		cin >> e ;
		arr.push_back(e) ;
	}
	
    rank = arrayRankTransform(arr) ;
	
	if(!rank.empty())
        for(int i=0; i<rank.size(); i++)
	    	cout << " " << rank.at(i) << " " ;
	else
		cout << "NOT FOUND" << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}




// void Sort(vector<int> & v){
	// for(int i=0; i<v.size()-1; ++i)
		// for(int j=i+1; j<v.size(); ++j)
			// if(v.at(i) > v.at(j))
				// swap(v.at(i),v.at(j)) ;
// }



/*vector<int> arrayRankTransform(vector<int> & arr){
	vector<int> temp{} ;
	for(int el : arr)
		temp.push_back(el) ;
	Sort(temp) ;
	// sort(temp.begin(), temp.end()) ;
}*/

/*vector<int> arrayRankTransform(vector<int> & arr){ cout<<"FFFF"<<endl;
	int n = arr.size() ;
	vector<int> rank ;
	vector<int> temp{} ;
	for(int el : arr){ cout<<"LOOP_1"<<endl;
		temp.push_back(el) ;
	}
	// for(int i=0; i<n; ++i){ cout<<"LOOP_1"<<endl;
		// temp.push_back(arr.at(i)) ;
	// }
	Sort(temp) ;
	// sort(temp.begin(), temp.end()) ;
	for(int i=0; i<temp.size(); ++i){ cout<<"LOOP_2"<<endl;
		int k = i+1 ;
		for(int j=0; i<arr.size(); ++j){ cout<<"Nested LOOP_2"<<endl;
			if(temp.at(i) == arr.at(j)){ cout<<temp.at(i)<<" "<<arr.at(j)<<endl;
				// rank[j] = k ; cout<<temp.at(i)<<"--"<<rank.at(j)<<endl;
				arr.at(j) = k ; cout<<temp.at(i)<<"--"<<arr.at(j)<<endl;
			}
		}
	}
	return rank ;
}*/