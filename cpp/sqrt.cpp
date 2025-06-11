#include <chrono>
#include<iostream>
using namespace std;

int sqrt(int x) {
    if (x == 0 || x == 1) return x ;
    int st = 1;
    int end = x/2;
    while (st <= end ){
        int mid = st + (end - st)/2;
        if ( mid == x/mid ) {
            return mid ;
        }
        else if (mid <  x/mid){
            st = mid + 1;
            }
        else{
            end = mid -1 ;
            }
    }
    return end;
}


int main(){

   int x = 0;
   cout << "enter number ";
   cin >> x ;
   cout << endl;
   cout << "square root of the given number is " << sqrt (x) << endl;


       int input = 10;

    auto start = chrono::high_resolution_clock::now();
    int result = sqrt(x);
    auto end = chrono::high_resolution_clock::now();

    cout << "Result: " << result << "\n";

    auto duration = chrono::duration_cast<chrono::microseconds>(end - start);
    cout << "Time taken by function: " << duration.count() << " microseconds\n";






return 0;
}
