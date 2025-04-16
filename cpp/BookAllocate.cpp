#include<iostream>
using namespace std;


void allocate (int arr[],int n,int st,int all[]){
	int start=0;
	int end = 0 ;
	for (int i =0;i<n;i++){end +=arr[i];}
		cout<<"total pages : "<< end << endl;
		int mid = 0;
	while (start<=end){
		int kid = 1;
		mid = (start+end)/2;
		cout<<"mid is " << mid << endl;
		int pg = 0;
		int i=0;
		int book = 0;
		for (;kid<=st;kid++){
			pg=0;
			cout<<"selected kid "<< kid << endl; 
			cout << " n is : " << n << endl;
			for (;i<n ; i++){
				cout<< "thinking book no. "<< i+1 << endl;
				if (pg+arr[i]<=mid ){
				cout << " given "<< arr[i] << " pages to kid no. "<<kid<< endl;	
					pg+=arr[i];
					book++;
				}
				else {
					break;
				}
			}	
			pg=0 ;
			book=0;
 
		}
			
		if (i<n){
			
			start = mid + 1;
		}
		else{
			end = mid -1;

		}
	}
	int p =0;
	for (int i=0;i < st;i++){
		all[i]=0;
		for (;p<n;p++){
			if (all[i]+arr[p]<=mid ){
				all[i]+=arr[p];
			}
			else {break;}
		}
	}
}

int main(){
	cout<< "compiled , running...\n";

	int n=4;
	int arr[n]={10,20,30,40};
	int student=2;
	int all[student];
	allocate(arr,n,student,all);
	for (int i=0;i<student;i++){
		cout<< i+1<< "th student got "<< all[i]<<" pages.\n";
	}
	return 0;
}


