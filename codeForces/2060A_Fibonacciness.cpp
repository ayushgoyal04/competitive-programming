#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int maxFibonacciness = 0;

        for (int a3 = -200; a3 <= 200; ++a3) {
            int currentFibonacciness = 0;

            // Check conditions for Fibonacciness
            if (a1 + a2 == a3) currentFibonacciness++;
            if (a2 + a3 == a4) currentFibonacciness++;
            if (a3 + a4 == a5) currentFibonacciness++;

            // Update maximum Fibonacciness
            maxFibonacciness = max(maxFibonacciness, currentFibonacciness);
        }

        cout << maxFibonacciness << endl;
    }
    return 0;
}
