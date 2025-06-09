#include<iostream>
using namespace std;

int main(){


    int n;
    cout<<"enter n";
    cin>>n;

    int i=1;

    while (i<=n)
    {
        int j=i;
        while (j<=n)
        {
            cout<<i;
            j = j+1;
        }
        i=i+1;
        cout<<endl;
    }
    
}