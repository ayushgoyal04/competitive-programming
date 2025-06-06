class Solution {
public:
    void operation1(string& s, string& t) {
        t.push_back(s[0]);
        s.erase(0, 1);
    }

    void operation2(string& t, string& result) {
        result.push_back(t.back());
        t.pop_back();
    }

    string robotWithString(string s) {
        string result = "";
        string t = "";

        vector<int> freq(26, 0);
        for (char ch : s) freq[ch - 'a']++;

        char minChar = 'a';

        while (!s.empty() || !t.empty()) {
            if (!s.empty()) {
                operation1(s, t);
                freq[t.back() - 'a']--;
                while (minChar <= 'z' && freq[minChar - 'a'] == 0) minChar++;
            }

            while (!t.empty() && t.back() <= minChar) {
                operation2(t, result);
            }
        }

        return result;
    }
};
