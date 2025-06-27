class Solution {
public:
    bool isPalindrome(string s){
        int left = 0;
        int right = s.size() - 1;
        while(left < right){
            if(s[left] == s[right]){
                left++;
                right--;
            } else {
                return false;
            }
        }
        return true;
    }

    string longestPalindrome(string s) {
        int n = s.size();
        string result = "";

        for(int center = 0; center < n; ++center){
            // Odd length
            int l = center, r = center;
            while (l >= 0 && r < n && s[l] == s[r]) {
                string temp = s.substr(l, r - l + 1);
                if (temp.size() > result.size() && isPalindrome(temp)) {
                    result = temp;
                }
                l--;
                r++;
            }

            // Even length
            l = center;
            r = center + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                string temp = s.substr(l, r - l + 1);
                if (temp.size() > result.size() && isPalindrome(temp)) {
                    result = temp;
                }
                l--;
                r++;
            }
        }

        return result;
    }
};
