class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi = 0;
        for (auto i : sentences) {
            istringstream iss(i);
            string ans;
            int c = 0;
            while (iss >> ans) c++;
            maxi = max(maxi, c);
        }
        return maxi;
    }
};