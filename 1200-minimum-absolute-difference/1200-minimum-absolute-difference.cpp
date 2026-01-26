class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();

        // Step 1: Sort the array
        sort(arr.begin(), arr.end());

        // Step 2: Find minimum difference
        int mini = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            mini = min(mini, arr[i + 1] - arr[i]);
        }

        // Step 3: Collect pairs with minimum difference
        for (int i = 0; i < n - 1; i++) {
            if (arr[i + 1] - arr[i] == mini) {
                ans.push_back({arr[i], arr[i + 1]});
            }
        }

        return ans;
    }
};
