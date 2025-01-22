class Solution {
public:
    int numSquares(int n) {
         std::vector<int> dp(n + 1, INT_MAX);
        // Base case: 0 requires 0 perfect squares
        dp[0] = 0;

        // Iterate through each number from 1 to n
        for (int i = 1; i <= n; ++i) {
            // Try all perfect squares smaller than or equal to i
            for (int j = 1; j * j <= i; ++j) {
                // Update dp[i] if a smaller number of perfect squares is found
                dp[i] = std::min(dp[i], dp[i - j * j] + 1);
            }
        }

        // The result is stored at dp[n]
        return dp[n];
    }
};