#include<iostream>
using namespace std;

int main(){

        
    char arr[3];
    cout << "type 3 letter to get it's power set\n";
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cout << "---------POWER SET -------\n";
    cout<< "{";
    for(int l =1; l<=sizeof(arr);l++){
        for(int i = 0 ; i<sizeof(arr)&& l ==1; i++){
            cout<<arr[i]<<", ";
        }
        for(int i = 0 ; i<sizeof(arr) && l ==2 ; i++){
            cout<< arr[i]<<arr[i+1];
        }
        for(int i = 0 ; i<sizeof(arr) && l ==3 ; i++){
            cout<< arr[i];
        }

     }  

        
    cout <<"}\n";








return 0;
}
