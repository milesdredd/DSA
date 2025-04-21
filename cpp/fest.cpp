#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "give a num ";
    cin >> n;

    int c = 0;
    int mask = 0;
    int ans = 0;
    int i = 0;

    cout << "Initial values:\n" << "n: " << n << endl << "mask: " << mask << endl << "ans: " << ans << endl;

    c = ~n;
    cout << "~n: " << c << endl;

    while (c != 0) {
        cout << "mask before shift: " << mask << endl;
        cout << "running " << i++ << " times\n";
        mask = (mask << 1) | 1;
        cout << "mask is: " << mask << endl;
        c = c >> 1;
        ans = (~n) & mask;
        cout << "ans: " << ans << endl;
    }

    cout << "Final ans: " << ans << endl;

    return 0;
}

    c = ~n;
    cout << "~n: " << c << endl;
