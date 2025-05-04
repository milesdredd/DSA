#include<iostream>
using namespace std;


int main(){

	
	char ch[6]="ankit";
	int arr[10]={1,3,4,5,6,23,25,28,34,44};




	for (int i=0;i< 10;i++){

		cout << arr[i]<<" , ";
	}
	cout<< endl;
	
	cout<< "arr-> "<< arr<< endl;
	cout<< "*arr -> "<< *arr<< endl;
	cout<< "2[arr] -> "<< 2[arr]<< endl;
	cout<< "*(arr+2)-> "<< *(arr+2);
	cout<<endl;
	cout<<endl;


	cout <<"ch-> "<< ch<< endl;
	cout <<"*ch-> "<< *ch;
	cout << endl;
	cout << endl;




	cout << "printing-> "<<&ch<<endl;
	//char *p = &ch;
	cout << "38 ->"<<&ch[3]  <<endl;
	cout << "40 ->"<<ch  <<endl;
	cout << "41 ->"<<&ch  <<endl;
	cout << "42 ->"<<ch <<endl;
	cout << "42 ->"<<ch[2]  <<endl;
	cout<< endl;
	char temp= 'd';
	cout << "45 ->"<<temp  <<endl;
	char *t=&temp;
	cout << "47 ->"<<t  <<endl;
	return 0;
}
