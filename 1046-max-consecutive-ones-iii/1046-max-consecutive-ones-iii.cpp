class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0, maxlen = 0;
        for (int right = 0; right < nums.size(); ++right) {
            if (nums[right] == 0) --k;  // use one zero flip

            // If flips exceed k, shrink the window from the left
            while (k < 0) {
                if (nums[left] == 0) ++k; // return a flip when we pass a zero
                ++left;
            }

            maxlen = max(maxlen, right - left + 1);
        }
        return maxlen;
    }
};
