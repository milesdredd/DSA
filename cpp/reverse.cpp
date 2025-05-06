#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &arr,int m){
	int s = m+1;
	int e = arr.size()-1;
	while ( s <= e) {
		swap(arr[s],arr[e]);
		s++;
		e--;
	}
}
int main(){
	vector<int> arr = {1,2,3,4,5,6,7,8};
	int m;
	cout<< "Give the position at which you wanna reverse : ";cin >> m ;
	reverse(arr,m);

	for(const int &elem : arr){
	cout<< elem << " ";
	}
	cout<<endl;
	return 0;
}
