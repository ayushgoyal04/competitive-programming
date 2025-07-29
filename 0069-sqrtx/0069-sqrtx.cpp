class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right = x;
        long long int mid;
        long long int ans = -1;
        while(left <= right) {
            mid = right + (left - right) / 2;

            if (mid * mid <= x) {
                ans = mid;
                left = mid + 1;
            } 
            else {
                right = mid - 1;
            }
        }
        return ans;
    }
};