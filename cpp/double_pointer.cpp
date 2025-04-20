#include<iostream>
using namespace std;


int main(){
	cout << "6 ->"<<"starting ..."  <<endl;
	
	cout << endl;	
	int var = 544;
	int *ptr = &var;
	int **ptr2 = &ptr;


/*	cout << "14 ->"<< var <<endl;	
	cout << "15 ->"<<ptr  <<endl;
	cout << "16 ->"<<*ptr  <<endl;
	cout << "17 ->"<<ptr2  <<endl;
	cout << "18 ->"<<*ptr2  <<endl;
	cout << "19 ->"<<**ptr2  <<endl;
	cout << "14 ->"<<"sab bahiya "  <<endl;
*/
	
	int *const pr=&var;
	cout << "24 ->"<<++pr  <<endl;
	const int *pr2=&var;
	cout << "26 ->"<<++*pr2  <<endl;
	cout << "27 ->"<<++var  <<endl;
	cout<< endl;
	return 0;
}
