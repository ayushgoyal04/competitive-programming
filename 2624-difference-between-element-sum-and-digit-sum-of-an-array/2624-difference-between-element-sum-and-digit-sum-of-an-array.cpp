class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum = 0, digitSum = 0;

        for (int num : nums) {
            elementSum += num;

            // Add digits of the current number to digitSum
            while (num != 0) {
                digitSum += num % 10; // Extract last digit
                num /= 10;            // Remove last digit
            }
        }

        // Return the absolute difference
        return abs(elementSum - digitSum);
    }
};