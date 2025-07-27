class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size()<1) return {-1, -1};
        if (nums.size()==1 && nums[0] == target) return {0, 0};
        if (nums.size()==1 && nums[0] != target) return {-1, -1};

        int left = 0, right = nums.size()-1, mid;
        int leftans = -1, rightans = -1;
        
        // finding the left ans
        while(left <= right) {
            mid = right + (left - right) /2;

            if(nums[mid] < target) {
                left = mid + 1;
            }
            else if(nums[mid]>target) {
                right = mid - 1;
            }
            if(nums[mid] == target) {
                leftans = mid;
                right = mid - 1;
            }
        }

        // finding the right ans
        left = mid; 
        right = nums.size()-1;
        while(left <= right) {
            mid = right + (left - right) /2;
            
            if(nums[mid] < target) {
                left = mid + 1;
            }
            else if(nums[mid]>target) {
                right = mid - 1;
            }
            if(nums[mid] == target) {
                rightans = mid;
                left = mid + 1;
            }
        }

        return {leftans, rightans};
    }
};