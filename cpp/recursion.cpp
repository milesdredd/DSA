#include<iostream>
using namespace std;

void f(int n ) {
    if ( n == 0 )
        return;
    cout << n-- << " ";
    f(n);
    cout<< n<<"'th line"<< endl ;
}



int main(){
   int n;
   cin >> n ; 
   f(n);

   cout << endl;










return 0;
}
