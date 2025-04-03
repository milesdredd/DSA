#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        int min_difference = INT_MAX; 

        for (int length = 1; length <= n; ++length) {
            for (int width = 1; width <= m; ++width) {
                int perimeter = 2 * (length + width);
                min_difference = min(min_difference, abs(perimeter - k));
            }
        }

        cout << min_difference << endl;
    }
    return 0;
}

