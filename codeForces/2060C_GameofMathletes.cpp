#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> x(n);
        unordered_map<int, int> freq;

        // Count frequencies of each number
        for (int i = 0; i < n; i++) {
            cin >> x[i];
            freq[x[i]]++;
        }

        int score = 0;

        // Iterate through the unique numbers
        for (auto &entry : freq) {
            int num = entry.first;
            int complement = k - num;

            if (freq.count(complement)) {
                if (num == complement) {
                    // For pairs like (a, a), only half the frequency can form pairs
                    score += freq[num] / 2;
                } else if (num < complement) {
                    // Pair num with complement
                    int pairs = min(freq[num], freq[complement]);
                    score += pairs;
                    freq[complement] -= pairs; // Reduce complement frequency
                }
            }
        }

        cout << score << "\n";
    }
}

int main() {
    solve();
    return 0;
}
