class Solution {
public:
    bool is_bigger(const string& binary, int k) {
        if (binary.empty()) return false;
        try {
            int value = stoi(binary, nullptr, 2);
            return value > k;
        } catch (const std::invalid_argument& e) {
            // Non-binary or empty string
            return false;
        } catch (const std::out_of_range& e) {
            // Binary number too big to fit in int
            return true;  // Definitely bigger than k
        }
    }

    int longestSubsequence(string s, int k) {
        int n = s.size();
        string ans = "";
        string temp = "";
        int revindex = -1;

        for (int i = n - 1; i >= 0; i--) {
            temp.insert(0, 1, s[i]);  // Insert s[i] at beginning
            revindex = i;

            if (is_bigger(temp, k)) {
                break;
            } else {
                ans = temp;
            }
        }

        int count = 0;
        if (revindex == -1) revindex = 0;

        for (int i = 0; i < revindex; i++) {
            if (s[i] == '0') {
                count++;
            }
        }

        count += ans.size();  // Include length of valid binary part
        return count;
    }
};
