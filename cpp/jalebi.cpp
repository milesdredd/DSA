#include <iostream>
using namespace std;

void printJalebi(int n) {
    int matrix[n][n]; 
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    int num = 1;

    while (num <= n * n) {

        for (int i = left; i <= right; i++)
            matrix[top][i] = num++;
        top++;


        for (int i = top; i <= bottom; i++)
            matrix[i][right] = num++;
        right--;


        for (int i = right; i >= left; i--)
            matrix[bottom][i] = num++;
        bottom--;


        for (int i = bottom; i >= top; i--)
            matrix[i][left] = num++;
        left++;
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    printJalebi(n);
    return 0;
}

