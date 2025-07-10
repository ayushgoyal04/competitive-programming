class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) {
            int temp = abs(nums[i]);
            temp--;
            nums[temp] = -nums[temp];
            if(nums[temp] > 0) {
                return abs(nums[i]);
            }
        }
        return -1;
    }
};