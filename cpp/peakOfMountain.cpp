#include<iostream>
using namespace std;
int peak(int arr[],int end){
	int start=0;
	int mid =-1;
	while (start<=end){
		mid =(start +end )/2;
		int pk = arr[mid];
		if (arr[mid-1]>arr[mid]){
			end = mid -1;
		}
		else if (arr[mid + 1]> arr[mid]){
			start=mid+1;
		}
		else{
			return arr[mid];
		}


	}
	return arr[mid];
}

int main(){
	int ans;
	int n=9;
	int arr[n]={1,2,3,4,34,54,54,12,11,6};
	ans = peak(arr,9);
	cout<< "ans is "<< ans<< endl;
	return 0;
}
