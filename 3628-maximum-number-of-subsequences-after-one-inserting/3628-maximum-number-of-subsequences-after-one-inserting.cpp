class Solution {
public:
    long long numOfSubsequences(string s) {
        int n = s.size();

        long long countL = 0, countLC = 0, countLCT = 0;

        for (char ch : s) {
            if (ch == 'L') countL++;
            else if (ch == 'C') countLC += countL;
            else if (ch == 'T') countLCT += countLC;
        }

        // Count CT (for inserting L)
        long long countT = 0, countCT = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == 'T') countT++;
            else if (s[i] == 'C') countCT += countT;
        }

        // Prefix L and suffix T
        vector<long long> prefixL(n+1, 0), suffixT(n+1, 0);

        for (int i = 0; i < n; i++) {
            prefixL[i+1] = prefixL[i] + (s[i] == 'L');
        }

        for (int i = n-1; i >= 0; i--) {
            suffixT[i] = suffixT[i+1] + (s[i] == 'T');
        }

        // Best for inserting C
        long long bestC = 0;
        for (int i = 0; i <= n; i++) {
            bestC = max(bestC, prefixL[i] * suffixT[i]);
        }

        return max({
            countLCT,
            countLCT + countCT,   // insert L
            countLCT + countLC,   // insert T
            countLCT + bestC      // insert C
        });
    }
};