#include<iostream>
using namespace std;


int main(){

	
	int n;
	cout <<"length of the array :";
	cin >> n ; 
	int** arr = new int*[n];
	int* sizes = new int[n];
	for (int i =0 ; i < n ; i ++ ) {
		int j =0;
		cout<< "size of "<<i+1 << "th Box :" ;

		cin >> j ;
		arr[i] = new int [j];
		sizes[i]=j;
		cout<< "created array"<< i << " of " <<sizes[i]<< " size\n "; 
	}
	//checking...

 
	for ( int i = 0; i < n ; i++){
		for (int j =0; j < sizes[i];j++){
			cin >> arr[i][j];
		}
	}

	for (int i = 0 ;i < n ; i++ ) {
		for (int j = 0 ; j < sizes[i];j++){
			cout<< arr[i][j];
			cout<< " ";
		}
	cout<< endl;
	}


	//clearing memories !
	for (int i = 0 ; i< n ;i++){
		delete []arr[i];
	}
	delete []arr;
	delete []sizes;
	



	cout<< endl;
	return 0;
}
