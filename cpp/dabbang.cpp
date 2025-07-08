
#include<iostream>
using namespace std;

int main(){
	int n;cout<<"num :  ";cin>>n;
	int i=0;
	int j=0;
	int n2= n;
	while (i<=n){
		while (n2-j){
			cout<<j+1<<" ";
			j++;
		}
		n2--;
		j=0;
		int s=1;
		while(1<=i && s<=((i-1)*2)+1 && i<n){
			cout<<"** ";
			s++;
		}
		j=i;
		while(j<n){
			cout<<n-j<<" ";
			j++;
		}
		j=0;

	i++;
	cout<<"\n";
	}
	return 0;
}
