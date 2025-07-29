class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size()-1; 
        int mid, ans = INT_MAX;
        while(left <= right) {
            mid = left + (right - left) / 2;

            if(nums[left] < nums[mid]) {
                ans = min(ans, nums[left]);
                left = mid + 1;
            }
            else if (nums[mid] < nums[right] ) {
                ans = min(ans, nums[mid]);
                right = mid - 1;
            }
            else {
                ans = min(ans, min(nums[mid], min(nums[left], nums[right])));
                left++;
                right--;

            }
        }
        return ans;
    }
};