class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        for(int i=0; i<s.length(); i++){
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9')){
                temp.push_back(tolower(s[i]));
            }
        }
        int n = temp.length();
        int i=0;
        return isPalin(i, temp, n);

    }
    bool isPalin(int i, string &s, int n){
        if(i>=n/2) return true;
        if(s[i]!=s[n-i-1]){
            return false;
        }
        return isPalin(i+1, s, n);
    }
};