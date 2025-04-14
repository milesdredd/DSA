#include<iostream>
using namespace std;
int main(){
    int a ;

    cout<< "Enter the value of a";
    cin>>a;

    if (a<0)
    {
        cout<< "A is negative";
    }
    
    else if(a>0){
        cout<< "A is positive";
    }

    else {
        cout<<"The  value of 0";
    }

    return 0;
}