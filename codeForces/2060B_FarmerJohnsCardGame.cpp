#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n, m;
        cin >> n >> m;  // Number of cows and cards per cow

        vector<vector<int>> cards(n);
        for (int i = 0; i < n; i++) {
            cards[i].resize(m);
            for (int j = 0; j < m; j++) {
                cin >> cards[i][j];
            }
            sort(cards[i].begin(), cards[i].end());  // Sort each cow's cards
        }

        // Create a permutation based on the smallest card of each cow
        vector<int> order(n);
        iota(order.begin(), order.end(), 0);  // Initialize order as [0, 1, ..., n-1]
        sort(order.begin(), order.end(), [&](int a, int b) {
            return cards[a][0] < cards[b][0];  // Sort cows by their smallest card
        });

        // Simulate the game
        int topCard = -1;  // Initial card on the center pile
        bool possible = true;
        vector<int> currentIndex(n, 0);  // Track the current card index for each cow

        for (int round = 0; round < m && possible; round++) {
            for (int cow : order) {
                // Check if the cow can play a card
                if (currentIndex[cow] >= m || cards[cow][currentIndex[cow]] <= topCard) {
                    possible = false;
                    break;
                }
                // Play the card
                topCard = cards[cow][currentIndex[cow]];
                currentIndex[cow]++;
            }
            if (!possible) break;  // Exit early if any cow cannot play
        }

        if (possible) {
            // Output the 1-based permutation of cows
            for (int i = 0; i < n; i++) {
                cout << order[i] + 1 << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    solve();
    return 0;
}
