// print 1 2 3
//       4 5 6
//       7 8 9


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n :"<<endl;
    cin>>n;

    int i=1;
    int num =1;

    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<num<<" ";   // to do the reverse pattern just replace *num* with *n-num+1*
            num = num+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
        
    }
    

}