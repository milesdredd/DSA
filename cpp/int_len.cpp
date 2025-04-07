#include<iostream>
using namespace std;

int main(){

    int x ;
    cout << " int : ";
    cin >> x ;
    int length = 0 ;
        
        int d = x;
        for (;d!=0 ;length++){
            d /= 10; 
        };
        cout << "length is : " << length << endl;
        int a = x ;

        int arr[length];
        cout << "while init ,  x is : " << x << endl;
        for ( int i = 0 ; i < length; i++){
            
            for ( int j = 1 ; j < length - i ; j++){
                a /= 10;
                cout << " now a is : " << a << endl; 
                arr[i]= a;


            }
            
        }
    cout << " {";
    for ( int i = 0; i < length; i++){
        cout << arr[i]<< ",";
        }
       cout << " } ";







return 0;
}
