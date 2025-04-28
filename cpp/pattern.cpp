#include <iostream>
using namespace std;

void tryCatch(int arr[5]) {
    int a;
    
    if (arr[1] != 0) {
        a = arr[1] / arr[0];
        cout << "The next number will be \"" << a * arr[4] << "\".";
        cout << " Concept: All numbers are multiplied by " << a << " to get the next number!" << endl;
    } else {
        cout << "Error: Division by zero is not allowed!" << endl;
    }
}

int main() {
    cout << "Give 5 sequence numbers: ";
    int arr[5];
    
    for (int i = 0; i < 5; i++) {
        cout << "seq[" << i << "]: ";
        cin >> arr[i];
    }
    
    cout << "Given: ";
    for (int l = 0; l < 5; l++) {
        cout << arr[l] << " ";
    }
    cout << endl;

    tryCatch(arr);

    return 0;
}

