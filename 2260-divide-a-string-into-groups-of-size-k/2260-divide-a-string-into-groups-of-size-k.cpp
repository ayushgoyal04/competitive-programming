class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int l = s.length();

        // Loop through the string in steps of k
        for(int i = 0; i < l; i += k) {
            string temp = s.substr(i, k);

            // If the last chunk is shorter than k, pad it
            if(temp.length() < k) {
                temp.append(k - temp.length(), fill);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};
