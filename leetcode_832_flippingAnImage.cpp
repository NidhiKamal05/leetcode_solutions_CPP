
// 832. FLIPPING AN IMAGE

#include<iostream>
#include<vector>

using namespace std ;

void Reverse(vector<int> & v){
	int i = 0 ;
	int j = v.size()-1 ;
	int temp ;
	while(i <= j){
		temp = v.at(i) ;
		v.at(i) = v.at(j) ;
		v.at(j) = temp ;
		++i ;
		--j ;
	}
}

vector<vector<int>> flipAndInvertImage(vector<vector<int>> & image){
	for(int i=0; i<image.size(); ++i){
		for(int j=0; j<(image.at(i)).size(); ++j){
			if((image.at(i)).at(j) == 1)
				(image.at(i)).at(j) = 0 ;
			else
				(image.at(i)).at(j) = 1 ;
		}
		// reverse((image.at(i)).begin(), (image.at(i)).end()) ;
		Reverse(image.at(i)) ;
	}
	return image ;
}

int main()
{
	vector<vector<int>> image ;
	vector<vector<int>> flippedImage ;
	int m, n, e ;
	
	cout << endl ;
	cout << "  FLIPPING AN IMAGE  " << endl ;
	cout << " ^^^^^^^^^^^^^^^^^^^ " << endl ;	
	
	cout << endl ;
	cout << "Matrix of m X n...." << endl ;
	cout << "m = " ;
	cin >> m ;
	cout << "n = " ;
	cin >> n ;
	
	cout << endl ;
	cout << "Enter elements of image " << m << "X" << n << "......" << endl ;
	for(int i=0; i<m; ++i){
		vector<int> t ;
		for(int j=0; j<n; ++j){
			cin >> e ;
			t.push_back(e) ;
		}
		image.push_back(t) ;
	}
	
	system("pause") ;
	system("cls") ;
	
	cout << endl ;
	cout << "Image......." << endl ;
	for(int i=0; i<image.size(); ++i){
		// vector<int> t ;
		cout << "| " ;
		for(int j=0; j<(image.at(i)).size(); ++j){
			cout << (image.at(i)).at(j) << " " ;
		}
		cout << "|" << endl ;
	}
	
	flippedImage = flipAndInvertImage(image) ;
	
	cout << endl ;
	cout << "Flipped Image......." << endl ;
	for(int i=0; i<flippedImage.size(); ++i){
		// vector<int> t ;
		cout << "| " ;
		for(int j=0; j<(flippedImage.at(i)).size(); ++j){
			cout << (flippedImage.at(i)).at(j) << " " ;
		}
		cout << "|" << endl ;
	}
	
	cout << endl << endl ;
	
	system("pause") ;
	
	return 0 ;
}