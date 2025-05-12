
// 1832. CHECK IF THE SENTENCE IS PANGRAM

#include<iostream>
#include<unordered_map>

using namespace std ;

bool checkIfPanagram(string sentence) {
	unordered_map<char, int> mp ;
	for(auto i : sentence)
		mp[i]++ ;
	return mp.size() == 26 ;
}

int main() {
	string sentence ;
	bool ans ;
	
	cout << endl ;
	cout << "  CHECK IF THE SENTENCE IS PANGRAM " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl ;
	
	cout << endl ;
	cout << "Enter a sentence..... " << endl ;
	cin >> sentence ;
	
    ans = checkIfPanagram(sentence) ;
	
	cout << endl ;
	if(ans)
		cout << "TRUE...." << endl ;
	else
		cout << "FALSE...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}