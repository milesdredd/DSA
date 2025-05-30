// print 1
//       2 3 
//       3 4 5  
//       4 5 6 7 



#include<iostream>
using namespace std;

//Method #1


// int main(){
//     int n;
//     cout<<"enter n:";
//     cin>>n;


//     int i=1;

//     int num=1;

//     while (i<=n)
//     {
//         int j=1;
//         while (j<=i)
//         {
//             cout<<i+j-1<<" ";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }

//Method #2 


    // int main(){
    //     int n;
    //     cout<<"enter n:";
    //     cin>>n;
    
    
    //     int i=1;
    
    //     int num=i;
    
    //     while (i<=n)
    //     {
    //         int j=1;
    //         while (j<=i)
    //         {
    //             cout<<num<<" ";
    //             num=num+1;
    //             j=j+1;
    //         }
    //         cout<<endl;
    //         i=i+1;
    //     }

//Solve it using no extra variable other than i and j 

//Method #3

int main(){
    int n;
    cout<<"enter n:";
    cin>>n;


    int i=1;
    while (i<=n)
    {
        int j=i;
        while (j<i*2)
        {
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}
