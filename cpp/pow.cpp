#include<iostream>
using namespace std;

double pow(double n, int p){
    if (p < 0) return 1/ (pow(n,-p));
    if (p == 0 || n == 1) return 1;
    if (n == 0) return 0;
    double small = pow(n*n , p/2);

    if ( p % 2) return n*small;
    else return small;





}


int main(){
        double n ; 
        int p ; 
        cout << "num : ";
        cin >> n ;
        cout << "power : "<< endl;
        cin >> p;
        cout  << endl << pow(n,p)<< endl ; 

        







return 0;
}
