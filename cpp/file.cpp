#include<iostream>
using namespace std;
int sum(int k);
int main(){ 
	int k;
	int total;
	cout << "till what number you wanna add all even numbers :- ";
	cin>>k;
	total=sum(k);
	cout<<"the sum of even number till "<< k << " is "<<total<<"\n";
	return 0;
	
}
int sum(int k ){
	if(k>1){
		if (k%2==0){
			return k+sum(k-2);	
		}
		else{
			return sum(k-1);
		
		}

	}
	return 0;
}


