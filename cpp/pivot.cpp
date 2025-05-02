#include<iostream>
using namespace std ;

int pivot(int arr[], int n){
	int start=0;
	int end=n-1;
	while (start < end ) {
		int mid = start + ( end - start)/2;
		if (arr[mid]>=arr[0]){
			start= mid+1;
		}
		else{
			end = mid;
		}
	}
	return end;
}

int main () { 
	int n=9;
	int array[n]={7,8,9,10,2,3,4,5,6};
	int ans = pivot (array, n );
	cout << " PIVOT IS AT "<< ans << endl;
	return 0 ; 
}


