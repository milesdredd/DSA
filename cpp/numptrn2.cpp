// print 1  1  1
//       2  2  2
//       3  3  3

// here row =3 and coulum =i


#include<iostream>
using namespace std;

int main(){


    int n;
    cout<<"enter n";
    cin>>n;

    int i=1;

    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<i;
            j = j+1;
        }
        i=i+1;
        cout<<endl;
    }
    
}