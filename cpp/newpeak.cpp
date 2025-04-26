#include<iostream>
using namespace std;

int peak(int arr[],int n){
	int start=0;
	int end = n-1;
	
	while (start<end ){
		int mid = start+(end-start)/2;
		cout<< " in while loop"<< endl;
		if(arr[mid]<arr[mid+1]){
			start=mid+1;
			cout << " if \n";
		}
		else {
			end = mid ;
			cout<< " else \n";
		}
	}
	return start;
}
int main (){
	int n = 7;
	int arr[n]= {1,2,3,5,3,2,1};
	int ans = peak(arr,n);
	cout<< "peake value is at index : "<< ans << endl;
	return 0;
}
