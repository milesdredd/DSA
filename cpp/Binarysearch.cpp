#include<iostream>
using namespace std;

void MakeArr(int arr[],int n,int s){
	for (int i=0;i<n;i+=2 ){
		arr[i]=s++;
		arr[i+1]=++s;
		s++;
	cout <<"("<<i<<")"<< arr[i]<< " "<<"("<<i+1<<")"<<arr[i+1]<<" ";
	}
cout<<endl;	
}

int search(int arr[],int s,int n){
	int start=0;
	while (start<=s){
		int mid = (start+(s-1))/2;
		cout<<"scaning on "<< mid<<endl;
		if (arr[mid]==n){
			cout<<"Got it!"<< endl;
			return mid;
			break;
		}
		else {
			if (arr[mid]<n){
				start=mid+1;
			}
			else{
				s=mid-1;

			}
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"size of array : ";cin>>n;
	int arr[n];
	int s;
	cout<<"start with : ";cin>>s;
	MakeArr(arr,n,s);
//searching a number with binary search 
	int num;
	cout<<"search a number : ";
	cin >>num;
	int index = search(arr,n,num);
	if (index==-1){cout<<"NUMBER NOT FOUND !";}
	else{
		cout<<"Number found ! at index no.: " <<index<<"th position "<< endl<< endl << "which is "<<  arr[index]<< endl ;
	}

}










