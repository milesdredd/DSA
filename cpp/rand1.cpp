#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;

    int i=1;
    int num =16;

    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<num<<" ";
            num = num-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    

}