
// 2942. FIND WORDS CONTAINING CHARACTER

#include<iostream>
#include<cstring>
#include<vector>

using namespace std ;

vector<int> findWordsContaining(vector<string> & words, char x){
	vector<int> indices{} ;
	for(int i=0; i<words.size(); ++i){
		for(int j=0; j<(words.at(i)).length(); ++j){
			if((words.at(i)).at(j) == x){
				indices.push_back(i) ;
				break ;
			}
		}
	}
	return indices ;
}

int main()
{
	int l;
	char x ;
	string word ;
	vector<int> indices{} ;
	vector<string> words{} ;
	
	cout << endl ;
	cout << "  FIND WORDS CONTAINING CHARACTER " << endl ;
	cout << " ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl ;
	
	cout << "Enter size of the array : " ;
	cin >> l ;
	
	cout << endl << "Enter words...... " << endl ;
	for(int i = 0; i < l; i++){
		cin >> word ;
		words.push_back(word) ;
	}
	
	cout << "Enter a character : " ;
	cin >> x ;
	
    indices = findWordsContaining(words, x) ;

	if(!indices.empty())
		for(int i=0; i<indices.size(); ++i)
			cout << " " << indices.at(i) << " " ;
	else	
		cout << "NOT FOUND...." << endl ;
	
	cout << endl ;
	
	system("pause") ;
	
	return 0 ;
}