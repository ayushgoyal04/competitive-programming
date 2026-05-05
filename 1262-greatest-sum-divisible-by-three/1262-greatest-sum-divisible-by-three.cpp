class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp(3, INT_MIN);
        dp[0] =0;

        for(int x : nums) {
            vector<int> temp = dp;

            for(int r = 0; r < 3; r++) {
                if( temp[r] == INT_MIN) continue;
                
                int new_rem = ( r + x ) % 3;
                dp[new_rem] = max(dp[new_rem], temp[r] + x);

            }
        }
        return dp[0];
    }
};