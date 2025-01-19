#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        cin >> n;  // Number of integers in the sequence
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        bool possible = true;

        // Check if the sequence can be made non-decreasing
        for (int i = 1; i < n; ++i) {
            // Check if a[i-1] > a[i], it means the operation is needed.
            if (a[i] < a[i-1]) {
                // If it's not possible to make a[i] >= a[i-1], break
                if (a[i] + a[i-1] < a[i-1]) {
                    possible = false;
                    break;
                }
                a[i] = a[i-1]; // Set a[i] equal to a[i-1] to maintain non-decreasing order
            }
        }

        // Output result based on the condition
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    solve();
    return 0;
}
