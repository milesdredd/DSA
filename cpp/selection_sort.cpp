#include <iostream>
using namespace std;

void sort(int arr[] , int n ){
	
	for (int i  = 0; i < n-1 ; i++ ){
		int minIndex = i;
		for (int j = i; j < n;j++){
			if ( arr[j]< arr[minIndex] ){
				minIndex = j;
			}
		}
		int temp = arr[i];
		arr[i]=arr[minIndex];
		arr[minIndex]=temp;
	}
}

int main(){
	int n = 10; 
	int arr[n]= {99,98,96,94,75,73,71,69,64,52};
	sort(arr, n);
	for(int i =0; i < n ;i++){
		cout<< arr[i]<< " ";
	}
	cout<< endl;
	return 0;
}
