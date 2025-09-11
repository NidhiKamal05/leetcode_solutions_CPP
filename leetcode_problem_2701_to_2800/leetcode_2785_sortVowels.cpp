
// 2785. SORT VOWELS IN A STRING

#include<iostream>
#include<algorithm>

using namespace std ;

bool isVowel(char ch) {
	return ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')) ;
}

string sortVowels(string s) {
	string temp ;
	for(char ch : s) {
		if(isVowel(ch)) {
			temp.push_back(ch) ;
		}
	}
	sort(temp.begin(), temp.end()) ;
	int k = 0 ;
	for(int i=0; i<s.length(); ++i)	{
		if(isVowel(s[i])) {
			s[i] = temp[k++] ;
		}
	}
	return s ;
}

int main() {
	string s, r ;
	
	cout << endl ;
	cout << "  SORT VOWELS IN A STRING  " << endl ;
	cout << " ************************* " << endl ;
	
	cout << endl ;
	cout << "Enter a string...... " << endl ;
	cout << "s = " ;
	cin >> s ;
	
	r = sortVowels(s) ;
	
	cout << endl ;	
	cout << " After Sorting...." << endl ;
	cout << r << endl ;
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}

	
// cout << "\n Before sorting....\n" ;
// for(int j=0; j<t.size(); ++j)
    // cout << "-" << t.at(j) ;
	
// cout << "\n After sorting....\n" ;
// for(int j=0; j<t.size(); ++j)
    // cout << "-" << t.at(j) ;

/*	int i = 0;
	int j = s.length()-1 ;
    while(i<=j)
	{  cout << "L -----------" ;
		if((s.at(i)==97)||(s.at(i)==101)||(s.at(i)==105)||(s.at(i)==111)||(s.at(i)==117)
			||(s.at(i)==65)||(s.at(i)==69)||(s.at(i)==73)||(s.at(i)==79)||(s.at(i)==85))
		{
			t.push_back(s.at(i)) ;
			++i ;
		}
		else if((s.at(i)==97)||(s.at(i)==101)||(s.at(i)==105)||(s.at(i)==111)||(s.at(i)==117)
		        ||(s.at(j)==65)||(s.at(j)==69)||(s.at(j)==73)||(s.at(j)==79)||(s.at(j)==85))
		{
			t.push_back(s.at(j)) ;
			--j ;
		}
		// else if((s.at(i)==97)||(s.at(i)==101)||(s.at(i)==105)||(s.at(i)==111)||(s.at(i)==117))
		// {
			// t.push_back(s.at(i)) ;
			// ++i ;
		// }
		// else if((s.at(j)==97)||(s.at(j)==101)||(s.at(j)==105)||(s.at(j)==111)||(s.at(j)==117))
		// {
			// t.push_back(s.at(j)) ;
			// --j ;
		// }
		else{
			++i ;
			--j ;
		}
	}*/