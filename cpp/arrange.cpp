#include <iostream>
using namespace std;

int main() {
    int arr[10], temp;
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    
    int left = 0, right = 9;
    
    while(left < right) {
        while(arr[left] >= 0 && left < right)
            left++;
        while(arr[right] < 0 && left < right)
            right--;
        if(left < right) {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    

    cout << "Arranged array (positive then negative): ";
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}