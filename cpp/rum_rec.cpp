#include<iostream>
using namespace std;
int sum(int n ){
    if (n ==0) return 0;
    int su = 0;
    su = n+ sum(n-1);
    return su;

}


int main(){

   int n; 

   cout << "num :";
   cin >> n ;
  cout << "sum is "<< sum(n)<< " .";










return 0;
}
