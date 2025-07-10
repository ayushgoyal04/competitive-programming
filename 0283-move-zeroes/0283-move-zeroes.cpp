class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPos = 0;

        // Step 1: Move non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[insertPos++] = nums[i];  // assign first, then increment
            }
        }

        // Step 2: Fill the rest with zeros
        while (insertPos < nums.size()) {
            nums[insertPos++] = 0;
        }
    }
};
