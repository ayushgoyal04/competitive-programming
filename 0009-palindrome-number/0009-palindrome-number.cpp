class Solution {
public:
    
    int reverse(int x) {
        int ans = 0;
        while(x != 0){
            int d = x % 10;

            // Check for overflow before multiplying by 10
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && d > 7)) {
                return 0; // Positive overflow
            }
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && d < -8)) {
                return 0; // Negative overflow
            }

            ans = ans * 10 + d;
            x = x / 10;
        }
        return ans;
    }
    
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int reversed = reverse(x);
        if(reversed == x){
            return true;
        }
        else{
            return false;
        }
    }

};