class Solution {
public:
    string clearStars(string s) {
        vector<char> result;
        map<char, vector<int>> charPositions;

        for (char ch : s) {
            if (ch == '*') {
                // Find smallest available character
                for (char c = 'a'; c <= 'z'; ++c) {
                    if (!charPositions[c].empty()) {
                        int idx = charPositions[c].back();
                        charPositions[c].pop_back();
                        result[idx] = '#'; // mark for removal
                        break;
                    }
                }
            } else {
                charPositions[ch].push_back(result.size());
                result.push_back(ch);
            }
        }

        // Final pass: collect only non-removed chars
        string finalResult;
        for (char ch : result) {
            if (ch != '#') finalResult.push_back(ch);
        }

        return finalResult;
    }
};
