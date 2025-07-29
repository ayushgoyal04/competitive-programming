class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if (nums.size() ==1) return 0;
        int left = 0, right = nums.size()-1;
        int mid;
        while(left <= right) {
            mid = left + (right - left) / 2;

            if(mid==0) {
                if(nums[mid]>nums[mid+1]) return mid;
                else left++;
            }
            else if(mid == nums.size()-1) {
                if(nums[mid] > nums[mid - 1]) return mid;
                else right--;
            }
            else {
                if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]) return mid;

                if(nums[mid-1]<nums[mid] && nums[mid] < nums[mid+1]) {
                    left = mid + 1;
                }   
                else {
                    right = mid - 1;
                }
            }

        }
        return -1;
    }
};