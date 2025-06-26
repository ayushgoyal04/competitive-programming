class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = 0;
        int mini = 0;
        int temp = INT_MIN;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0; i<nums.size(); i++){
            if (nums[i]>temp){
                temp = nums[i];
            }
        }
        int res = temp;

        for (int n : nums){
            int temp = maxi*n;
            maxi = max({temp, mini*n, n});
            mini = min({temp, mini*n, n});

            res = max(res, maxi);
        }
        return res;
    }
};