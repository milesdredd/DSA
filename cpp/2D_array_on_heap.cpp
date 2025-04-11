#include<iostream>
using namespace std;


int main(){

	int n ;
	cout << "8 ->"<<"give the array size :"   <<endl;	cin >> n ; 
	int **arr = new int*[n];
	for (int i = 0 ; i < n ; i++){
		arr[i]= new int [n];
	}

	cout << "13 ->"<<"done creating array ! "<<endl;
	for(int i=0; i<n ; i++){
		for(int j=0; j<n ; j++){
			cout << "looping -> "<<i<< " "<< j<<endl;
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i<n;i++){
		for (int j = 0; j<n ; j++){
			cout << arr[i][j]<<" ";
		}
	cout << endl;
	}

//releasing the allocated space of heap memory 
	for(int i =0 ;i < n ;i++){
		delete []arr[i];
	}
	delete []arr;
	cout << "33 ->"<<"all clear "  <<endl;

	cout<< endl;
	return 0;
}
