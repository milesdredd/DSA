#include<iostream>
using namespace std;

void printJalebi(int n){
    int cx = 0, cy = 0;  
    int rx = 0, ry = 0;  
    int val = 1;         
    int step =n;        
    int stepCount = 0;   
    int turnCount = 0;  
    int dir = 1;  
    int sR= 1;
    
    while (rx = cx && ry == cy ) {
        cout << val << "  ";
       // Real cursor update 
       if (rx == 5){
            rx = 1;
            ry ++;
        }else{
            rx++;
        }
       // direction 
        if (sR){



       // my cursor update
                






int main(){

   int n;
   cin >> n;
   cout << "n :";
   printJalebi(n);
return 0;
}
