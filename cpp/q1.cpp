#include<iostream>
#include<vector>
using namespace std;

int leftIndex(int arr[],int end,int k){
	int start =0;
	int mid =0;
	int ans = -1;
	while (start<=end){
		mid = (start+(end))/2;

		cout<<"mid is "<< mid << endl;
		if (arr[mid]==k){
			cout<<"got it"<< mid << endl;
			ans =mid;
			start = mid +1;
		}
		else {
			if (k>arr[mid]){
				start=mid+1;
				cout<<"now start = "<< start << endl;

			}
			else{
				end=mid-1;
				cout<< "end = " << end << endl ;

			}

		}
	}
	return ans;
}


int rightIndex(int arr[],int end,int k){
	int start =0;
	int mid =0;
	int ans=-1;
	while (start<=end){
		mid = (start+(end))/2;
		if (arr[mid]==k){
			ans = mid;
			end = mid -1;
		}
		else {
			if (k>arr[mid]){
				start=mid+1;
			}
			else{
				end=mid-1;
			}

		}
	}
	return ans;

}
void MakeArr(int arr[],int n,int s){
	for (int i=0;i<n;i+=2 ){
		arr[i]=s++;
		arr[i+1]=++s;
		s++;
		cout <<"("<<i<<")"<< arr[i]<< " "<<"("<<i+1<<")"<<arr[i+1]<<" ";
	}
	cout<<endl;
}

int main(){

	int times;cout<<"how many searches you want : ";cin >> times;
	vector<int> ans;

	while (times>0){
		cout<<"entering while loop "<<times<< " time!\n";
		int n;cout<<"print size of array : ";cin >> n;

		int k;cout<<" key to find  : ";cin >> k;
		int arr[n];
		cout <<"making array";
		MakeArr(arr,n,0);
		ans.push_back(leftIndex(arr,n,k));
		ans.push_back(rightIndex(arr,n,k));
		times--;
	}
	for (int i =0;i<ans.size();i+=2){
		cout<<ans[i]<<" "<<ans[i+1]<< endl;


	}


	return 0;
}
