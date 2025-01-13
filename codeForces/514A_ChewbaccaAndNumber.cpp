#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    long long int ans = 0;
    long long int multiplier = 1;

    while (t > 0) {
        long long int rem = t % 10;
        if (rem >= 5) {
            rem = 9 - rem;
        }
        if(rem == 0 && t / 10 == 0) {
            rem = 9;
        }

        ans += rem * multiplier;
        multiplier *= 10;
        t = t / 10;
    }

    cout << ans << endl;
    return 0;
}
