// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         map<int, int> mp;
//         int n = arr1.size();
//         int m = arr2.size();
//         for( int i = 0; i < n; i++) {
//             mp[arr1[i]]++;
//             for(int j = 0; j < m; j++)
//             {
//                 if(arr1[i]==arr2[j])
//                 arr1[i] = -1;
//             }
//         }
//         vector<int> ans;
//         for( auto it : arr2){
//             int len = mp[it];
//             int val = it;
//             for(int i = 0; i < len; i++)
//             {
//                 ans.push_back(val);
//             }
//         }
//         vector<int> temp;
//         for(auto num : arr1){
//             if(num != -1){
//                 temp.push_back(num);
//             }
//         }
//         sort(temp.begin(), temp.end());
//         for(auto i : temp){
//             ans.push_back(i);
//         }               
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mp;

        // Count frequency
        for (int num : arr1) {
            mp[num]++;
        }

        vector<int> ans;

        // Add elements in arr2 order
        for (int x : arr2) {
            while (mp[x] > 0) {
                ans.push_back(x);
                mp[x]--;
            }
        }

        // Add remaining elements sorted
        for (auto &p : mp) {
            while (p.second > 0) {
                ans.push_back(p.first);
                p.second--;
            }
        }

        return ans;
    }
};