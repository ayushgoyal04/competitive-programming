class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ps(n + 1, 0); // ps[i] = sum of nums[0..i-1]
        
        for (int i = 1; i <= n; i++) {
            ps[i] = ps[i-1] + nums[i-1];
        }

        int count = 0;
        for (int start = 0; start < n; start++) {
            for (int end = start + 1; end <= n; end++) {
                if (ps[end] - ps[start] == k) {
                    count++;
                }
            }
        }
        return count;
    }
};
